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

/* http://xahlee.info/comp/computer_language_char_distribution.html */
/*
 * Ideas behind the build 
 * 1. As lil movement as possible
 * 2. Try to maximize the use of the keyboard
*/ 

#include QMK_KEYBOARD_H

#define NULL_THUMB                 KC_NO,    KC_NO,    KC_NO
#define NULL_ROW                   KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO
#define LSUPER_ROW                 KC_NO,    KC_LSFT,  KC_LCTL, KC_LALT, KC_LGUI
#define RSUPER_ROW                 KC_RGUI,  KC_RALT,  KC_RCTL, KC_RSFT, KC_NO

#define COLEMAK_MOD_DH_L1          KC_Q,             KC_W,           KC_F,           KC_P,             KC_B
#define COLEMAK_MOD_DH_R1          KC_J,             KC_L,           KC_U,           KC_Y,             KC_QUOT
#define COLEMAK_MOD_DH_L2          KC_A,             KC_LSFT(KC_R),  KC_LCTL(KC_S),  KC_LALT(KC_T),    KC_LGUI(KC_G)
#define COLEMAK_MOD_DH_R2          KC_RGUI(KC_M),    KC_RALT(KC_N),  KC_RCTL(KC_E),  KC_RSFT(KC_I),    KC_O
#define COLEMAK_MOD_DH_L3          KC_Z,             KC_X,           KC_C,           KC_D,             KC_V
#define COLEMAK_MOD_DH_R3          KC_K,             KC_H,           KC_SCLN,        KC_DOT,           KC_SLASH
#define COLEMAK_THUMB_CLUSTER      KC_ESC,           KC_SPC,         KC_TAB,         LT(NUM, KC_ENT),  KC_BSPC,  LT(FUN, KC_DEL)

#define NUM_R1                     KC_NO,  KC_9,    KC_8,    KC_7,    KC_NO
#define NUM_R2                     KC_NO,  KC_3,    KC_2,    KC_1,    KC_NO
#define NUM_R3                     KC_NO,  KC_6,    KC_5,    KC_4,    KC_NO
#define NUM_THUMB_CLUSTER          KC_NO,  KC_NO,   KC_0,    KC_NO,   KC_TRNS,  KC_NO

#define FUN_R1                     KC_F12,  KC_F11,    KC_F10,   KC_F9,    KC_NO
#define FUN_R2                     KC_F4,   KC_F3,     KC_F2,    KC_F1,    KC_NO
#define FUN_R3                     KC_F8,   KC_F7,     KC_F6,    KC_F5,    KC_NO
#define FUN_THUMB_CLUSTER          KC_NO,   KC_NO,     KC_NO,    KC_NO,    KC_NO,  KC_TRNS

#define SYM_R1                     KC_NO,   KC_NO
#define SYM_R2                     KC_NO,   KC_NO
#define SYM_R3                     KC_NO,   KC_NO
#define SYM_THUMB_CLUSTER          KC_NO,   KC_TRNS,  KC_NO

#define EXTRAS_R1                     
#define EXTRAS_R2                  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_NO
#define EXTRAS_R3                  KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,  KC_NO

#define LAYOUT_wrapper(...) LAYOUT_split_3x5_3(__VA_ARGS__)

enum layer_names { COLEMAKDHM, NUM, FUN, SYM, EXTRAS, MEDIA };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [COLEMAKDHM] = LAYOUT_wrapper(
                  COLEMAK_MOD_DH_L1, COLEMAK_MOD_DH_R1,
                  COLEMAK_MOD_DH_L2, COLEMAK_MOD_DH_R2,
                  COLEMAK_MOD_DH_L3, COLEMAK_MOD_DH_R3,
                        COLEMAK_THUMB_CLUSTER
),
          [NUM] = LAYOUT_wrapper(
                             NUM_R1, NULL_ROW,
                             NUM_R2, RSUPER_ROW,
                             NUM_R3, NULL_ROW,
                             NUM_THUMB_CLUSTER
),
          [FUN] = LAYOUT_wrapper(
                          FUN_R1, NULL_ROW,
                          FUN_R2, RSUPER_ROW,
                          FUN_R3, NULL_ROW,
                          FUN_THUMB_CLUSTER
),
          [MEDIA] = LAYOUT_wrapper(
)
};
