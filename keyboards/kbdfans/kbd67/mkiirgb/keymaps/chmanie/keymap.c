// Copyright 2023 Christian Maniewski, chmanie
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include QMK_KEYBOARD_H

// layers, ordering is important!
enum layers {
    BASE,
    FN1,
    FN2,
    FN3
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_65_ansi_blocker(
		KC_GRV,             KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,        KC_MINS,   KC_EQL,    KC_BSPC,   KC_DEL,
		KC_TAB,             KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,        KC_LBRC,   KC_RBRC,   KC_BSLS,   MO(FN3),
		LT(FN1, KC_ESC),    KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,     KC_QUOT,              KC_ENT,    MO(FN2),
		KC_LSFT,            KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,     KC_RSFT,              KC_UP,     MO(FN1),
		KC_LCTL,            KC_LGUI,   KC_LALT,                         KC_SPC,                                     KC_RALT,   KC_RCTL,                KC_LEFT,   KC_DOWN,   KC_RGHT
		),

	[FN1] = LAYOUT_65_ansi_blocker(
		KC_ESC,     KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12,    _______,   _______,
		_______,    _______,   KC_UP,     _______,   _______,   _______,   _______,   _______,   _______,   _______,   KC_PSCR,   KC_HOME,   KC_END,    _______,   _______,
		_______,    KC_LEFT,   KC_DOWN,   KC_RGHT,   _______,   _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_PGUP,   KC_PGDN,              _______,   _______,
		_______,    KC_VOLD,   KC_VOLU,   KC_MUTE,   _______,   _______,   _______,   _______,   _______,   _______,   KC_INS,    KC_DEL,               _______,   _______,
		_______,    _______,   _______,                         KC_MPLY,                                    _______,   _______,              _______,   _______,   _______
		),

	[FN2] = LAYOUT_65_ansi_blocker(
        _______,   _______,   _______,   RGB_SPD,   RGB_SPI,   RGB_HUD,   RGB_HUI,   RGB_SAD,   RGB_SAI,   RGB_MOD,   RGB_TOG,   RGB_VAD,   RGB_VAI,   QK_BOOT,   EE_CLR,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
		_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   RGB_SPD,   RGB_SPI,              _______,   _______,
		_______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,   _______,
		_______,   _______,   _______,                         RGB_TOG,                                    _______,   _______,              RGB_HUD,   _______,   _______
    ),

    [FN3] = LAYOUT_65_ansi_blocker(
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,   _______,
        _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,              _______,   _______,
        _______,   _______,   _______,                         _______,                                    _______,   _______,              _______,   _______,   _______
    )
};
// clang-format on
