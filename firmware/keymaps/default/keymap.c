// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_qwerty(
        KC_ESCAPE,      KC_1,   KC_2,   KC_3,   KC_4,   KC_5,         KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_BACKSPACE,
        KC_TAB,         KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,         KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,             KC_ENTER,
        KC_LEFT_SHIFT,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,         LT(1, KC_H),   KC_J,   KC_K,   KC_L,   KC_SEMICOLON,     KC_RIGHT_SHIFT,
        KC_LEFT_CTRL,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,         KC_N,   KC_M,   KC_COMMA,   KC_DOT,   KC_QUESTION,    KC_RIGHT_CTRL,
        KC_LGUI, MT(MOD_LSFT, KC_SPC), MT(MOD_LCTL, KC_LALT),         LT(1, KC_ENTER), KC_BACKSPACE, LT(2, KC_ESCAPE)
    ),
    [1] = LAYOUT_qwerty(
        RGB_TOG,      RGB_MODE_PLAIN,   RGB_MODE_BREATHE,   RGB_MODE_RAINBOW,   RGB_MODE_SWIRL,   RGB_MODE_SNAKE,         RGB_MODE_KNIGHT,   RGB_MODE_XMAS,   RGB_MODE_GRADIENT,   RGB_MODE_RGBTEST,   RGB_MODE_TWINKLE,             KC_BACKSPACE,
        RGB_HUI,         RGB_SAI,   RGB_VAI,   KC_E,   KC_R,   KC_T,         KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,             RGB_SAI,
        RGB_HUD,  RGB_SAD,   RGB_VAD,   KC_D,   KC_F,   KC_G,         KC_LEFT,   KC_DOWN,   KC_UP,   KC_RIGHT,   KC_SEMICOLON,     RGB_VAI,
        KC_LEFT_CTRL,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,         KC_N,   KC_M,   KC_COMMA,   KC_DOT,   KC_PIPE,    KC_RIGHT_CTRL,
                                   KC_LCTL, KC_SPC, KC_LALT,         KC_ENTER, KC_BACKSPACE, KC_LGUI
    ),
    [2] = LAYOUT_qwerty(
        KC_NO,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,             KC_BACKSPACE,
        KC_NO,         KC_NO,   KC_NO,   KC_E,   KC_R,   KC_T,         KC_Y,   KC_U,   KC_I,   KC_F11,   KC_F12,             RGB_SAI,
        KC_NO,  KC_NO,   KC_NO,   KC_D,   KC_F,   KC_G,         KC_LEFT,   KC_DOWN,   KC_UP,   KC_RIGHT,   KC_SEMICOLON,     RGB_VAI,
        KC_LEFT_CTRL,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,         KC_N,   KC_M,   KC_COMMA,   KC_DOT,   KC_PIPE,    KC_RIGHT_CTRL,
                                   KC_LCTL, KC_SPC, KC_LALT,         KC_ENTER, KC_BACKSPACE, KC_LGUI
    )
};
