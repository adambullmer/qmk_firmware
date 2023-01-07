/*
  Copyright (c) 2023 Adam Bullmer

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include "adambullmer.h"
#include "lib/led_framework/md_rgb_matrix.h"

void layer_state_set_rgb(layer_state_t state) {
  switch (get_highest_layer(state)) {
    case _QW:
    case _DV:
    case _CM:
    case _ML:
    case _UL:
      // purple
      // rgblight_sethsv_noeeprom(210, 255, 20);
      break;
    case _GL:
      // green
      // rgblight_sethsv_noeeprom(85, 255, 20);
      break;
    case _VL:
      // red
      // rgblight_sethsv_noeeprom(0, 255, 20);
      break;
    // case _:
    // case _:
    case _D1:
    case _D2:
    // case _D3:
    // case _D4:
      // blue
      // rgblight_sethsv_noeeprom(191, 255, 20);
      break;
    case _FN:
    case _DB:
      // blue
      // rgblight_sethsv_noeeprom(191, 255, 20);
      break;
  }
}

void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  layer_state_set_rgb(1); // Set layer 0 (bit 1) on
}

