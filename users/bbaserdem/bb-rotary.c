/*
Copyright 2019 Batuhan Başerdem <baserdem.batuhan@gmail.com> @bbaserdem
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "sbp-rotary.h"
/* ROTARY ENCODER
 * This contains my general rotary encoder code
 * It is layer adaptive
 */
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // First encoder
        switch (biton32(layer_state)) {
            case _BASE:
                // Base layer; adjusts volume
                //  This should correspond to either mute button;
                //  or music mode toggle if the board has audio
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            case _GAME:
                // Game layer; adjusts volume
                //  Keypress should correspond to either muting
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            case _FUNC:
                // Function layer; scroll vertically
                //  Keypress should correspond to middle mouse button
                if (clockwise) {
                    tap_code(KC_WH_D);
                } else {
                    tap_code(KC_WH_U);
                }
                break;
            case _NUMB:
                // Number layer; move laterally
                //  Keypress should correspond to backspace
                if (clockwise) {
                    tap_code(KC_RGHT);
                } else {
                    tap_code(KC_LEFT);
                }
                break;
            case _SYMB:
                // Symbol layer; insert space/delete characters
                //  Keypress should correspond to enter
                if (clockwise) {
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                }
                break;
            case _NAVI:
                // Navigation layer; move pointer up/down
                if (clockwise) {
                    tap_code(KC_MS_D);
                } else {
                    tap_code(KC_MS_U);
                }
                break;
            case _MEDI:
                // Media layer; increase/decrease rgb brightness
                if (clockwise) {
                    tap_code(RGB_VAI);
                } else {
                    tap_code(RGB_VAD);
                }
                break;
            case _MOUS:
                // Mouse layer; move pointer left/right
                if (clockwise) {
                    tap_code(KC_MS_R);
                } else {
                    tap_code(KC_MS_L);
                }
                break;
            case _MUSI:
                // Audio layer; increase/decrease playback speed
                if (clockwise) {
                    tap_code(MU_FAST);
                } else {
                    tap_code(MU_SLOW);
                }
                break;
            case _MIDI:
                if (clockwise) {
                    tap_code(KC_NO);
                } else {
                    tap_code(KC_NO);
                }
                break;
        }
    } else if (index == 1) {
        // Second encoder
        switch (biton32(layer_state)) {
            case _BASE:
                // Base layer; adjusts volume
                //  This should correspond to either mute button;
                //  or music mode toggle if the board has audio
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            case _GAME:
                // Game layer; adjusts volume
                //  Keypress should correspond to either muting
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
            case _FUNC:
                // Function layer; scroll vertically
                //  Keypress should correspond to middle mouse button
                if (clockwise) {
                    tap_code(KC_WH_D);
                } else {
                    tap_code(KC_WH_U);
                }
                break;
            case _NUMB:
                // Number layer; move laterally
                //  Keypress should correspond to backspace
                if (clockwise) {
                    tap_code(KC_RGHT);
                } else {
                    tap_code(KC_LEFT);
                }
                break;
            case _SYMB:
                // Symbol layer; insert space/delete characters
                //  Keypress should correspond to enter
                if (clockwise) {
                    tap_code(KC_DOWN);
                } else {
                    tap_code(KC_UP);
                }
                break;
            case _NAVI:
                // Navigation layer; move pointer up/down
                if (clockwise) {
                    tap_code(KC_MS_D);
                } else {
                    tap_code(KC_MS_U);
                }
                break;
            case _MEDI:
                // Media layer; increase/decrease rgb brightness
                if (clockwise) {
                    tap_code(RGB_VAI);
                } else {
                    tap_code(RGB_VAD);
                }
                break;
            case _MOUS:
                // Mouse layer; move pointer left/right
                if (clockwise) {
                    tap_code(KC_MS_R);
                } else {
                    tap_code(KC_MS_L);
                }
                break;
            case _MUSI:
                // Audio layer; increase/decrease playback speed
                if (clockwise) {
                    tap_code(MU_FAST);
                } else {
                    tap_code(MU_SLOW);
                }
                break;
            case _MIDI:
                if (clockwise) {
                    tap_code(KC_NO);
                } else {
                    tap_code(KC_NO);
                }
                break;
        }
    }
}
