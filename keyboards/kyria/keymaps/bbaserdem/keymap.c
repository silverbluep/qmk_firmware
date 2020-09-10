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
#include QMK_KEYBOARD_H
#include "bbaserdem.h"
/* F layout
 * ┌───┬───┬───┬───┬───┬───┐                 ┌───┬───┬───┬───┬───┬───┐
 * │ W │ F │ G │ Ğ │ I │ O │                 │ D │ R │ N │ H │ P │ Q │
 * ├───┼───┼───┼───┼───┼───┤                 ├───┼───┼───┼───┼───┼───┤
 * │ X │ A │ S │ D │ F │ G │                 │ T │ K │ M │ L │ Y │ Ş │
 * ├───┼───┼───┼───┼───┼───┼───┬───┐ ┌───┬───┼───┼───┼───┼───┼───┼───┤
 * │* +│ J │ Ö │ V │ C │ Ç │   │   │ │   │   │ Z │ S │ B │. :│, ;│< >│
 * └───┴───┴───┼───┼───┼───┤Esc│Shf│ │Shf│Del├───┼───┼───┼───┴───┴───┘
 *             │En1│Tab│Ent│   │   │ │   │   │Spc│Bsp│En2│
 *             └───┴───┴───┴───┴───┘ └───┴───┴───┴───┴───┘
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        _BL1_1_,_BL1_5_,                _BR1_5_,_BR1_1_,
        _BL2_1_,_BL2_5_,                _BR2_5_,_BR2_1_,
        _BL3_1_,_BL3_5_,xxx2xxx,xxx2xxx,_BR3_5_,_BR3_1_,
        BB_SND, _BL4_3_,KC_LSFT,KC_RSFT,_BR4_3_,KC_BTN2
    ),
    [_CHAR] = LAYOUT(
        XXXXXXX,_CL1_5_,                _CR1_5_,XXXXXXX,
        XXXXXXX,_CL2_5_,                _CR2_5_,XXXXXXX,
        XXXXXXX,_CL3_5_,xxx2xxx,xxx2xxx,_CR3_5_,XXXXXXX,
        _______,_CL4_3_,_______,_______,_CR4_3_,_______
    ),
    [_GAME] = LAYOUT(
        _GA1_1_,_GA1_5_,                ___5___,___1___,
        _GA2_1_,_GA2_5_,                ___5___,___1___,
        _GA3_1_,_GA3_5_,xxx2xxx,xxx2xxx,___5___,___1___,
        KC_MUTE,_GA4_3_,_______,_______,___3___,KC_UP
    ),
    [_NAVI] = LAYOUT(
        ___1___,___5___,                _NA1_5_,___1___,
        ___1___,___5___,                _NA2_5_,___1___,
        ___1___,___5___,xxx2xxx,xxx2xxx,_NA3_5_,___1___,
        KC_BTN1,___3___,_______,_______,_NA4_3_,KC_BTN3
    ),
    [_NUMB] = LAYOUT(
        ___1___,_NU1_5_,                ___5___,___1___,
        ___1___,_NU2_5_,                ___5___,___1___,
        ___1___,_NU3_5_,xxx2xxx,xxx2xxx,___5___,___1___,
        KC_BSPC,_NU4_3_,_______,_______,___3___,KC_ENT
    ),
    [_SYMB] = LAYOUT(
        ___1___,_SY1_5_,                ___5___,___1___,
        ___1___,_SY2_5_,                ___5___,___1___,
        ___1___,_SY3_5_,xxx2xxx,xxx2xxx,___5___,___1___,
        KC_BSPC,_SY4_3_,_______,_______,___3___,KC_DEL
    ),
    [_MEDI] = LAYOUT(
        ___1___,___5___,                _ME1_5_,___1___,
        ___1___,___5___,                _ME2_5_,___1___,
        ___1___,___5___,xxx2xxx,xxx2xxx,_ME3_5_,___1___,
        RGB_TOG,___3___,_______,_______,_ME4_3_,RGB_M_R	
    ),
    [_FUNC] = LAYOUT(
        ___1___,_FU1_5_,                ___5___,___1___,
        ___1___,_FU2_5_,                ___5___,___1___,
        ___1___,_FU3_5_,xxx2xxx,xxx2xxx,___5___,___1___,
        KC_BTN2,_FU4_3_,_______,_______,___3___,_______
    ),
    [_MOUS] = LAYOUT(
        ___1___,___5___,                _MO1_5_,___1___,
        ___1___,___5___,                _MO2_5_,___1___,
        ___1___,___5___,xxx2xxx,xxx2xxx,_MO3_5_,___1___,
        KC_BTN3,___3___,_______,_______,_MO4_3_,KC_BTN4
    ),
    // Music layer: everything
    [_MUSI] = LAYOUT(
        _MU_12_,_MU_12_,
        _MU_06_,xxx2xxx,xxx2xxx,_MU_06_,
        MU_TOG,_MUL_3_,_MU_02_,_MUR_3_,MU_TOG
    )
};
