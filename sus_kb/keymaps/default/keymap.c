// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
    _QWERTY = 0,
    _UPPER,
};

#define UPPER MO(_UPPER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_ortho_split_sus(
        KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,
        KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,
        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                    KC_LCMD,    KC_LCTL,    KC_SPC,     UPPER,     KC_TAB,      KC_BSPC,    KC_RSFT,    KC_LALT
    ),

    [_UPPER] = LAYOUT_ortho_split_sus(
        KC_GRV,     KC_NO,      KC_ENTER,   KC_ESC,     KC_NO,      KC_PPLS,    KC_7,       KC_8,       KC_9,       KC_MINS,
        KC_BSLS,    KC_LBRC,    KC_RBRC,    KC_QUOT,    KC_PSCR,    KC_0,       KC_4,       KC_5,       KC_6,       KC_PAST,
        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_NO,      KC_PEQL,    KC_1,       KC_2,       KC_3,       KC_SLSH,
                    KC_LCMD,    KC_RCTL,    KC_SPC,     UPPER,      KC_TAB,     KC_BSPC,    KC_LSFT,    KC_RALT
    )
};
