#include QMK_KEYBOARD_H

#define MT_UP  MT(MOD_RSFT, KC_UP)
#define MT_DOWN MT(MOD_RGUI, KC_DOWN)
#define MT_LEFT MT(MOD_RALT, KC_LEFT)
#define MT_RIGHT MT(KC_RCTL, KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_all(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, XXXXXXX, KC_ENT,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX, MT_UP,   XXXXXXX,
        KC_LCTL, KC_LGUI, KC_LALT,                   MO(1),   KC_SPC,  MO(1),                     MO(1),   MT_LEFT, XXXXXXX, MT_DOWN, MT_RIGHT
    ),

	[1] = LAYOUT_all(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,
        _______, UG_TOGG, KC_UP,   UG_NEXT, UG_HUEU, UG_HUED, UG_SATU, UG_SATD, UG_VALU, UG_VALD, _______, _______, _______, _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, BL_DOWN, BL_TOGG, BL_UP,   _______, _______, _______, _______, _______, _______, _______, _______,
        QK_BOOT, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______, _______
    ),

};
