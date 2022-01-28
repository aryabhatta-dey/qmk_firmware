/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#define COLEMAK_MOD_DH_L1       KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define COLEMAK_MOD_DH_L2       KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define COLEMAK_MOD_DH_L3       KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define COLEMAK_MOD_DH_R1       KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT
#define COLEMAK_MOD_DH_R2       KC_M,    KC_N,    KC_E,    KC_I,    KC_O
#define COLEMAK_MOD_DH_R3       KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLASH

#define BASE_THUMB_CLUSTER      KC_ESC,  KC_SPC,  KC_TAB,  KC_ENT,  KC_BSPC,  KC_DEL

#define LAYOUT_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)

enum layer_names {
  _COLEMAKDHM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAKDHM] = LAYOUT_wrapper(
                  COLEMAK_MOD_DH_L1, COLEMAK_MOD_DH_R1,
                  COLEMAK_MOD_DH_L2, COLEMAK_MOD_DH_R2,
                  COLEMAK_MOD_DH_L3, COLEMAK_MOD_DH_R3,
                        BASE_THUMB_CLUSTER
)};
