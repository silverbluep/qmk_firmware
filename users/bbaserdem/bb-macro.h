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
#pragma once
#include "bbaserdem.h"
/* This header file contains definitons regarding custom keycodes.
 * - Both regular and unicode macros are dealt with in this file
 */

// These will be delegated to keymap specific stuff (weak definition)
bool process_record_macro(uint16_t keycode, keyrecord_t *record);

// Make it so that keymaps can use KEYMAP_SAFE_RANGE for custom keycodes
#if defined(KEYMAP_SAFE_RANGE)
  #define PLACEHOLDER_SAFE_RANGE KEYMAP_SAFE_RANGE
#else
  #define PLACEHOLDER_SAFE_RANGE SAFE_RANGE
#endif

// Custom macro keycode ranges
enum userspace_custom_keycodes {
    // Safe stuff
    BB_SAFE = PLACEHOLDER_SAFE_RANGE,
    // Double entry macros
    DBL_ANG,
    DBL_PAR,
    DBL_CBR,
    DBL_BRC,
    // Macro key
    BB_PGPK,
    // Unicode strings
    #ifdef UNICODEMAP_ENABLE
    BB_LENY,
    BB_TABL,
    TR_FLAG,
    #endif
    //use for keymap specific codes
    KEYMAP_SAFE_RANGE
};

// Mask these keycodes if required features are not enabled
#ifndef UNICODEMAP_ENABLE
#define BB_LENY KC_NO
#define BB_TABL KC_NO
#define TR_FLAG KC_NO
#endif

// Unicodemap implementation
#ifdef UNICODEMAP_ENABLE
enum userspace_unicodemap {
    UPC_A_CIRC,
    UPC_C_CEDI,
    UPC_G_BREV,
    UPC_I_CIRC,
    UPC_I_DOTL,
    UPC_I_DOTT,
    UPC_O_DIAE,
    UPC_S_CEDI,
    UPC_U_CIRC,
    UPC_U_DIAE,
    LOW_A_CIRC,
    LOW_C_CEDI,
    LOW_G_BREV,
    LOW_I_CIRC,
    LOW_I_DOTL,
    LOW_I_DOTT,
    LOW_O_DIAE,
    LOW_S_CEDI,
    LOW_U_CIRC,
    LOW_U_DIAE,
    ELLIPSIS,
    PLANCK_CON,
    ANGSTROM,
    MATHPI,
    BITCOIN,
    UPC_ALPHA,
    UPC_BETA,
    UPC_GAMMA,
    UPC_DELTA,
    UPC_EPSILON,
    UPC_ZETA,
    UPC_ETA,
    UPC_THETA,
    UPC_IOTA,
    UPC_KAPPA,
    UPC_LAMBDA,
    UPC_MU,
    UPC_NU,
    UPC_XI,
    UPC_OMICRON,
    UPC_PI,
    UPC_RHO,
    UPC_SIGMA,
    UPC_TAU,
    UPC_UPSILON,
    UPC_PHI,
    UPC_CHI,
    UPC_PSI,
    UPC_OMEGA,
    LOW_ALPHA,
    LOW_BETA,
    LOW_GAMMA,
    LOW_DELTA,
    LOW_EPSILON,
    LOW_ZETA,
    LOW_ETA,
    LOW_THETA,
    LOW_IOTA,
    LOW_KAPPA,
    LOW_LAMBDA,
    LOW_MU,
    LOW_NU,
    LOW_XI,
    LOW_OMICRON,
    LOW_PI,
    LOW_RHO,
    LOW_SIGMA,
    LOW_TAU,
    LOW_UPSILON,
    LOW_PHI,
    LOW_CHI,
    LOW_PSI,
    LOW_OMEGA,
};
#endif

// Tap dance definition
#ifdef TAP_DANCE_ENABLE

// Tap dance stuff
enum {
    #ifdef AUDIO_ENABLE
    TD_AUDIO_TEMPO,
    #endif
    TD_BIGSWITCH,
};
#endif
