// Copyright 2009 Olivier Gillet.
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
// Patch data.

#include "hardware/shruthi/patch.h"

#include <string.h>

namespace hardware_shruthi {

void Patch::PrepareForWrite() {
    filter_topology_ = (filter_1_mode_ << 4) | filter_2_mode_;
    op_data_[0] = ops_[0].operands[0];
    op_data_[1] = (ops_[0].operands[1] << 3) | ops_[0].op;
    op_data_[2] = ops_[1].operands[0];
    op_data_[3] = (ops_[1].operands[1] << 3) | ops_[1].op;
  }

uint8_t Patch::CheckBuffer(uint8_t* buffer) {
  for (uint8_t i = 8; i < 24; ++i) {
    if (buffer[i] >= 128) {
      memset(name, '-', 8);
      return 0;
    }
  }
  if (buffer[91] != '!') {
    memset(name, '-', 8);
    return 0;
  }
  return 1;
}

void Patch::Update() {
  // Horrible hack to set the HPF to 0 on patches saved with previous
  // versions of the firmware.
  if (op_data_[2] == 'n' && op_data_[3] == 'g') {
    memset(saved_data() + 84, 0, 8);
  }

  ops_[0].operands[0] = op_data_[0];
  ops_[0].operands[1] = op_data_[1] >> 3;
  ops_[0].op = op_data_[1] & 0x7;
  ops_[1].operands[0] = op_data_[2];
  ops_[1].operands[1] = op_data_[3] >> 3;
  ops_[1].op = op_data_[3] & 0x7;
    
  filter_2_mode_ = filter_topology_ & 0xf;
  filter_1_mode_ = filter_topology_ >> 4;
}

}  // hardware_shruthi
