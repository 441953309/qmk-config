#include QMK_KEYBOARD_H

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),           ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
    [1] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),           ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [2] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),           ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [3] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),           ENCODER_CCW_CW(XXXXXXX, XXXXXXX) }
    // [1] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(_______, _______) },
    // [2] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI) },
    // [3] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_RMOD,RGB_MOD) }
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_TILD,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        LT(2,KC_TAB),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,    KC_MUTE,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_LGUI,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                KC_LGUI, KC_LALT, KC_LCTL,   MO(1),  KC_SPC,     KC_ENT,   MO(3), KC_RCTL, KC_RALT, KC_RGUI
                            //`--------------------------------------------'  `--------------------------------------------'
        ),
    [1] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_UNDS, KC_PLUS, KC_PIPE, KC_LCBR, KC_RCBR,  KC_F12,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_TILD,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                      KC_MINS,  KC_EQL, KC_BSLS, KC_LBRC, KC_RBRC, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_DOT, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, XXXXXXX,    XXXXXXX, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                KC_LGUI, KC_LALT, KC_LCTL, XXXXXXX,  KC_SPC,     KC_ENT, XXXXXXX, KC_RCTL, KC_RALT, KC_RGUI
                            //`--------------------------------------------'  `--------------------------------------------'
        ),
    [2] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                KC_LGUI, KC_LALT, KC_LCTL, KC_BSPC,  KC_ENT,     KC_ENT, XXXXXXX, KC_RCTL, KC_RALT, KC_RGUI
                            //`--------------------------------------------'  `--------------------------------------------'
        ),
    [3] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_DEL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                KC_LGUI, KC_LALT, KC_LCTL, XXXXXXX,  KC_SPC,     KC_ENT, XXXXXXX, KC_RCTL, KC_RALT, KC_RGUI
                            //`--------------------------------------------'  `--------------------------------------------'
        )
};
