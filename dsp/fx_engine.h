// Copyright 2011 Olivier Gillet.
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
// Main definitions.

#ifndef DSP_FX_ENGINE_H_
#define DSP_FX_ENGINE_H_

#include "avrlib/base.h"
#include "dsp/dsp.h"

namespace dsp {

class FxEngine {
 public:
  FxEngine() { }
  static void Init();
  
  inline void set_cv(uint8_t cv_index, uint8_t value) {
    data_access_byte_[cv_index + 1] = value;
  }
  
  void ProcessBlock();
  
  uint8_t* mutable_buffer() { return buffer_; }

 private:
  static uint8_t data_access_byte_[1];
  static uint8_t cv_1_;
  static uint8_t cv_2_;
  static uint8_t resonance_;
  static uint8_t cutoff_;
  static uint8_t vca_;
  
  static uint8_t buffer_[kAudioBlockSize];

  DISALLOW_COPY_AND_ASSIGN(FxEngine);
};

extern FxEngine fx_engine;

}  // namespace dsp

#endif // DSP_FX_ENGINE_H_
