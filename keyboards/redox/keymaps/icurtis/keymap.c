#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(LT(2,KC_GRV), KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, LT(2,KC_GRV), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, TT(1), TT(1), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LBRC, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RCTL_T(KC_QUOT), KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, LT(2,KC_PGUP), KC_PGDN, KC_HOME, LT(2,KC_END), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_EQL, LALT_T(KC_PAST), TT(1), LCTL_T(KC_PSLS), KC_BSPC, KC_DEL, KC_ENT, KC_SPC, KC_RALT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_NO, KC_P7, KC_P8, KC_P9, KC_PAST, KC_F12, KC_TRNS, KC_HASH, KC_DLR, KC_LBRC, KC_RBRC, KC_GRV, KC_TRNS, KC_TRNS, KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO, KC_TRNS, KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_P1, KC_P2, KC_P3, KC_PSLS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_P0, KC_PDOT, KC_PENT, KC_NO),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, KC_TRNS, KC_TRNS, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RESET, KC_NO, RGB_VAI, RGB_VAD, RGB_SAD, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SPI, RGB_SPD, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC__MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO)
};
