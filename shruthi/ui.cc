// Copyright 2013 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// User interface handler.

#include "shruthi/ui.h"

#include "shruthi/editor.h"
#include "shruthi/synthesis_engine.h"

namespace shruthi {

using namespace avrlib;

/* static */
bool Ui::switch_inhibit_release_[SWITCH_LAST];
uint8_t Ui::switch_state_[SWITCH_LAST];
uint32_t Ui::switch_press_time_[SWITCH_LAST];
uint8_t Ui::sub_clock_;
uint8_t Ui::progress_bar_;
uint8_t Ui::led_pattern_;
uint8_t Ui::led_pwm_counter_;
uint8_t Ui::pots_multiplexer_address_;
int16_t Ui::adc_values_[36];
int8_t Ui::adc_thresholds_[36];
Adc Ui::adc_;
EventQueue<> Ui::queue_;
SpiMaster<IOEnableLine, MSB_FIRST, 4> Ui::io_;
SpiMaster<IOEnableLineAux, MSB_FIRST, 4> Ui::aux_io_;
RotaryEncoder<EncoderALine, EncoderBLine, EncoderClickLine> Ui::encoder_;

static const int16_t kAdcThresholdLocked = 32;
static const int16_t kAdcThresholdUnlocked = 8;

/* static */
void Ui::Init() {
  io_.Init();
  aux_io_.Init();
  encoder_.Init();

  lcd.Init();
  display.Init();
  lcd.SetCustomCharMapRes(character_table[0], 7, 1);

  editor.Init();
  editor.DisplaySplashScreen(STR_RES_V + 1);

  queue_.Flush();

  progress_bar_ = 0;
  pots_multiplexer_address_ = 0;

  memset(switch_inhibit_release_, 0, sizeof(switch_inhibit_release_));
  memset(switch_state_, 0xff, sizeof(switch_state_));
  
  adc_.Init();
  adc_.set_reference(ADC_DEFAULT);
  adc_.set_alignment(ADC_RIGHT_ALIGNED);
  adc_.StartConversion(0);
  pots_multiplexer_address_ = 0;
    
  for (uint8_t i = 0; i < 36; ++i) {
    adc_values_[i] = -1;
    adc_thresholds_[i] = kAdcThresholdUnlocked;
  }
}

/* static */
void Ui::LockPotentiometers() {
  uint8_t programmer = engine.system_settings().programmer;
  adc_thresholds_[0] = kAdcThresholdLocked;
  adc_thresholds_[1] = kAdcThresholdLocked;
  adc_thresholds_[2] = kAdcThresholdLocked;
  adc_thresholds_[3] = kAdcThresholdLocked;
}

/* static */
void Ui::ScanPotentiometers() {
  uint8_t address = pots_multiplexer_address_;
  int16_t value = adc_.ReadOut();
  bool generate_ui_event = true;
  
  if (engine.system_settings().programmer == PROGRAMMER_NONE) {
    pots_multiplexer_address_ = (pots_multiplexer_address_ + 1) & 7;
    adc_.StartConversion(pots_multiplexer_address_);
    if (address >= 4) {
      generate_ui_event = false;
      engine.set_modulation_source(MOD_SRC_CV_1 + address - 4, value >> 2);
    }
  } else if (engine.system_settings().programmer == PROGRAMMER_FCD) {
    pots_multiplexer_address_++;
    if (pots_multiplexer_address_ >= 36) {
      pots_multiplexer_address_ = 0;
    }
    if (pots_multiplexer_address_ < 4) {
      adc_.StartConversion(pots_multiplexer_address_);
    } else {
      WriteShiftRegister();
      adc_.StartConversion(4);
    }
  } else if (engine.system_settings().expansion_filter_board == PROGRAMMER_XT) {
    pots_multiplexer_address_ = (pots_multiplexer_address_ + 1) & 31;
    // TODO: writer address counters.
    adc_.StartConversion(0);
    // TODO: apply address conversion table.
    address = address;
  }
  
  if (generate_ui_event) {
    int16_t previous_value = adc_values_[address];
    if (previous_value == -1) {
      // Register the value and move on.
      adc_values_[address] = value;
    } else {
      int16_t delta = value - previous_value;
      int16_t threshold = adc_thresholds_[address];
      if (delta > threshold || delta < -threshold) {
        adc_thresholds_[address] = kAdcThresholdUnlocked;
        queue_.AddEvent(CONTROL_POT, address, value >> 3);
        adc_values_[address] = value;
      }
    }
  }
}

/* static */
void Ui::WriteShiftRegister() {
  uint8_t filter_board = engine.system_settings().expansion_filter_board;
  led_pwm_counter_ += 16;
  io_.Begin();

  switch (filter_board) {
    case FILTER_BOARD_DLY:
      {
        Word w;
        w.value = U8U8Mul(engine.voice().cv_1(), 5);
        aux_io_.End();
        aux_io_.Send(w.bytes[1] | 0x90);
        aux_io_.Begin();
        aux_io_.Send(w.bytes[0]);

        w.value = U8U8Mul(pgm_read_byte(wav_res_ssm2164_linearization + \
            (engine.voice().cv_2() >> 2)), 16);
        aux_io_.Send(w.bytes[1] | 0x10);
        aux_io_.End();
        aux_io_.Begin();
        aux_io_.Send(w.bytes[0]);
      }
      break;

    case FILTER_BOARD_SVF:
      io_.Send(engine.svf_routing_byte());
      break;

    case FILTER_BOARD_PVK:
      io_.Send(engine.pvk_routing_byte());
      break;

    case FILTER_BOARD_4PM:
      io_.Send(engine.four_pole_routing_byte());
      break;
  }

  if (engine.system_settings().programmer == PROGRAMMER_FCD) {
    io_.Send(
        pots_multiplexer_address_ >= 4 ? pots_multiplexer_address_ - 4 : 0);
  }

  io_.Send(led_pattern_);
  io_.End();
}

/* static */
void Ui::DebounceSwitches() {
  io_.Begin();
  io_.End();
  uint8_t bits = io_.Receive();
  uint8_t mask = 0x20;
  for (uint8_t i = 0; i < SWITCH_LAST; ++i) {
    switch_state_[i] <<= 1;
    if (bits & mask) {
      switch_state_[i] |= 1;
    }
    mask >>= 1;

    if (switch_state_[i] == 0x80) {
      switch_press_time_[i] = milliseconds();
      switch_inhibit_release_[i] = false;
    } else if (switch_state_[i] == 0x00) {
      int8_t hold_time = static_cast<int8_t>((milliseconds() - switch_press_time_[i]) >> 8);
      if (hold_time > 6 && !switch_inhibit_release_[i]) {
        queue_.AddEvent(CONTROL_SWITCH, i, hold_time);
        switch_inhibit_release_[i] = true;
      }
    } else if (switch_state_[i] == 0x7f) {
      if (!switch_inhibit_release_[i]) {
        if (switch_state_[SWITCH_SHIFT] == 0x00) {
          queue_.AddEvent(CONTROL_SWITCH, i | 0x80, 0);
          switch_inhibit_release_[SWITCH_SHIFT] = true;
        } else {
          queue_.AddEvent(CONTROL_SWITCH, i, 0);
        }
      }
    }
  }
}

/* static */
void Ui::RefreshLeds() {
  // The progress bar overrides the default pattern.
  if (progress_bar_) {
    led_pattern_ = progress_bar_;
    return;
  }

  uint8_t led_pattern = editor.leds_pattern();
  if (editor.current_mode() == EDITOR_MODE_SEQUENCE) {
    if (engine.voice_controller().active()) {
      if (!(engine.voice_controller().step() & 3)) {
        led_pattern |= LED_MODE_MASK;
      }
    }
  } else {
    led_pattern |= LED_MODE_MASK;
    if (editor.current_page() == PAGE_MOD_MATRIX) {
      uint8_t current_modulation_source_value = engine.modulation_source(0,
          engine.patch().modulation_matrix.modulation[
              editor.subpage()].source);
      if (current_modulation_source_value > led_pwm_counter_) {
        led_pattern |= LED_6_MASK;
      }
    } else if (editor.current_page() == PAGE_MOD_OPERATORS) {
      uint8_t current_operator_value = engine.modulation_source(0,
          MOD_SRC_OP_1 + editor.subpage());
      if (current_operator_value > led_pwm_counter_) {
        led_pattern |= LED_6_MASK;
      }
    }
  }
  led_pattern_ = led_pattern;
}

/* static */
void Ui::DoEvents() {
  bool refresh_display = false;

  uint8_t previous_page = editor.current_page();

  while (queue_.available()) {
    Event e = queue_.PullEvent();
    queue_.Touch();
    switch (e.control_type) {
      case CONTROL_ENCODER_CLICK:
        editor.HandleClick();
        break;

      case CONTROL_ENCODER:
        editor.HandleIncrement(e.value);
        break;

      case CONTROL_SWITCH:
        editor.HandleSwitchEvent(e);
        break;

      case CONTROL_POT:
        if (e.control_id < 4) {
          editor.HandleInput(e.control_id, e.value);
        } else {
          editor.HandleProgrammerInput(e.control_id, e.value);
        }
        break;
    }
    refresh_display = true;
  }

  if (editor.current_page() != previous_page) {
    LockPotentiometers();
  }

  if (queue_.idle_time_ms() > (engine.system_settings().display_delay << 7)) {
    queue_.Touch();
    editor.Relax();
  }

  if (engine.dirty()) {
    refresh_display = true;
  }

  if (refresh_display) {
    editor.Refresh();
  }

  RefreshLeds();
  display.Tick();
}

/* extern */
Ui ui;

}  // namespace shruthi
