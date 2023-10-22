/*
Copyright 2022 sporewoh

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_4x10(
    KC_Q,       KC_W,   KC_E,     KC_R,   KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,       KC_S,   KC_D,     KC_F,   KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,       KC_X,   KC_C,     KC_V,   KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    LT(3,KC_NO),KC_NO,  KC_LGUI,  KC_LSFT,LT(2,KC_SPC),KC_LCTL, TO(1),   KC_NO,   KC_NO,   KC_NO),
  [1] = LAYOUT_ortho_4x10(
    KC_ESC,     KC_EXLM,KC_AT,    KC_HASH,KC_DLR,      KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_BSPC,
    KC_TAB,     KC_GRV, KC_QUOT,  KC_MINS,KC_EQL,      KC_BSLS, KC_LCBR, KC_RCBR, KC_PIPE, KC_ENT,
    KC_CAPS,    KC_TILD,KC_DQUO,  KC_UNDS,KC_PLUS,     KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, TO(3),
    KC_NO,      KC_NO,  KC_NO,    TO(0),  KC_LSFT,     KC_LALT, TO(2),   KC_NO,   KC_NO,   KC_NO),
  [2] = LAYOUT_ortho_4x10(
    KC_NO,      KC_NO,  KC_NO,    KC_NO,  KC_NO,       KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_BSPC,
    KC_LGUI,    KC_LCTL,KC_LALT,  KC_LSFT,KC_NO,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,
    KC_NO,      KC_NO,  KC_NO,    KC_NO,  KC_NO,       KC_HOME, KC_PGDN, KC_PGUP, KC_END,  TO(3),
    KC_NO,      KC_NO,  KC_NO,    TO(0),  KC_NO,       KC_NO,   TO(1),   KC_NO,   KC_NO,   KC_NO),
  [3] = LAYOUT_ortho_4x10(
    KC_ESC,     KC_MUTE,KC_NO,    KC_NO,  LCA(KC_BSLS),KC_NO,   KC_P7,   KC_P8,   KC_P9,   KC_BSPC,
    KC_TAB,     KC_NO,  KC_VOLD,  KC_VOLU,KC_NO,       KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PENT,
    KC_NO,      KC_MPLY,KC_MRWD,  KC_MFFD,KC_NO,       KC_NO,   KC_P1,   KC_P2,   KC_P3,   TO(2),
    KC_NO,      KC_NO,  KC_NO,    TO(0),  KC_NO,       KC_NO,   TO(1),   KC_P0,   KC_NO,   KC_NO),
};