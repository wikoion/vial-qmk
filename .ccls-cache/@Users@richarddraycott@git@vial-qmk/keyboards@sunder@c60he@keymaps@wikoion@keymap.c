#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        /* r0 */ KC_Q, KC_W, KC_E, KC_5, KC_4, KC_3, KC_2, KC_1, KC_GRAVE, KC_TAB,
        /* r1 */ KC_Z, KC_G, KC_T, KC_R, LSFT_T(KC_F), LCTL_T(KC_D), LALT_T(KC_S), LGUI_T(KC_A), KC_EQUAL, KC_LSHIFT,
        /* r2 */ KC_LGUI, MO(1), KC_SPACE, KC_NO, KC_NO, KC_NO, KC_B, KC_V, KC_C, KC_X,
        /* r3 */ KC_Y, KC_U, KC_I, KC_0, KC_9, KC_8, KC_7, KC_6, KC_NO, KC_NO,
        /* r4 */ KC_N, RGUI_T(KC_SCLN), KC_P, KC_O, RALT_T(KC_L), RCTL_T(KC_K), RSFT_T(KC_J), KC_H, KC_NO, KC_ENTER,
        /* r5 */ MO(1), KC_ESCAPE, KC_BSPACE, KC_MINUS, KC_QUOTE, KC_RSHIFT, KC_SLASH, KC_DOT, KC_COMMA, KC_M
    ),
    [1] = LAYOUT(
        /* r0 */ KC_F11, KC_F12, KC_NO, KC_F5, KC_F4, KC_F3, KC_F2, KC_F1, KC_NO, KC_NO,
        /* r1 */ KC_NO, KC_END, KC_NO, KC_NO, LSFT_T(KC_PGUP), LCTL_T(KC_PGDOWN), LALT_T(KC_HOME), LGUI_T(KC_NO), KC_CAPS, KC_LSHIFT,
        /* r2 */ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        /* r3 */ KC_NO, KC_NO, KC_NO, KC_F10, KC_F9, KC_F8, KC_F7, KC_F6, KC_NO, KC_NO,
        /* r4 */ KC_NO, KC_QUOTE, KC_LBRACKET, KC_NO, RGUI_T(KC_RIGHT), RALT_T(KC_UP), RCTL_T(KC_DOWN), RSFT_T(KC_LEFT), KC_NO, KC_NO,
        /* r5 */ KC_TRNS, KC_NO, KC_DELETE, KC_RBRACKET, KC_NONUS_HASH, KC_NO, KC_NONUS_BSLASH, KC_NO, KC_NO, KC_NO
    ),
	[2] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[3] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[4] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[5] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[6] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),
	[7] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	)
};


// -------------------- Per-key Tapping Term --------------------
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):

        case LSFT_T(KC_END):
        case RSFT_T(KC_LEFT):
            return 150;
        default:
            return 220; // fallback to global
    }
}
// ----- Per-key IGNORE_MOD_TAP_INTERRUPT -----
bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
        case LCTL_T(KC_D):
        case LALT_T(KC_S):
        case LGUI_T(KC_A):
        case RGUI_T(KC_SCLN):
        case RALT_T(KC_L):
        case RCTL_T(KC_K):

        case LSFT_T(KC_END):
        case RSFT_T(KC_LEFT):
        case LCTL_T(KC_PGUP):
        case LALT_T(KC_PGDN):
        case LGUI_T(KC_NO):
        case RGUI_T(KC_RIGHT):
        case RALT_T(KC_UP):
        case RCTL_T(KC_DOWN):
            return true;
        default:
            return false;
    }
}

// ----- Per-key HOLD_ON_OTHER_KEY_PRESS -----
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):

        case LSFT_T(KC_END):
        case RSFT_T(KC_LEFT):
            return true;
        default:
            return false;
    }
}

// ----- Per-key PERMISSIVE_HOLD -----
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_D):
        case LALT_T(KC_S):
        case LGUI_T(KC_A):
        case RGUI_T(KC_SCLN):
        case RALT_T(KC_L):
        case RCTL_T(KC_K):

        case LCTL_T(KC_PGUP):
        case LALT_T(KC_PGDN):
        case LGUI_T(KC_NO):
        case RGUI_T(KC_RIGHT):
        case RALT_T(KC_UP):
        case RCTL_T(KC_DOWN):
            return true;
        default:
            return false;
    }
}
