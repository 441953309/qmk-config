#include QMK_KEYBOARD_H

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [1] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),           ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [2] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),           ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [3] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),           ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [4] = { ENCODER_CCW_CW(XXXXXXX, XXXXXXX),           ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_MPRV, KC_MNXT) }
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        //,---------------------------------------------------------------------------------.                        ,-----------------------------------------------------------------------------.
            XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                                XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,        KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,                                   KC_Y,          KC_U,          KC_I,          KC_O,    KC_P, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,  LT(1,KC_A),  LGUI_T(KC_S),  LALT_T(KC_D),  LSFT_T(KC_F),          KC_G,                                   KC_H,  RSFT_T(KC_J),  RALT_T(KC_K),  RGUI_T(KC_L), KC_BSPC, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,        KC_Z,          KC_X,          KC_C,          KC_V,          KC_B,   KC_MUTE,      KC_MPLY,          KC_N,          KC_M,       KC_COMM,        KC_DOT, KC_SLSH, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------+----------|  |----------+--------------+--------------+--------------+--------------+--------+--------|
                                        XXXXXXX,       XXXXXXX,LCTL_T(KC_ESC),  LT(2,KC_TAB),    KC_SPC,       KC_ENT, LT(3,KC_BSPC),RCTL_T(KC_DEL),       XXXXXXX,       XXXXXXX
                              //`----------------------------------------------------------------------'  `----------------------------------------------------------------------'
        ),

    [1] = LAYOUT(
        //,---------------------------------------------------------------------------------.                        ,-----------------------------------------------------------------------------.
            XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                                XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,     XXXXXXX,       KC_VOLD,       KC_MUTE,       KC_VOLU,       KC_MPLY,                                XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,     XXXXXXX,       KC_LGUI,       KC_LALT,       KC_LSFT,       XXXXXXX,                                KC_LEFT,       KC_DOWN,         KC_UP,      KC_RIGHT, KC_BSPC, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX,         KC_F2,        KC_F12,   XXXXXXX,      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------+----------|  |----------+--------------+--------------+--------------+--------------+--------+--------|
                                        XXXXXXX,       XXXXXXX,       KC_LCTL,       KC_BSPC,    KC_ENT,       KC_ENT,       XXXXXXX,       KC_RCTL,       XXXXXXX,       XXXXXXX
                              //`----------------------------------------------------------------------'  `----------------------------------------------------------------------'
        ),

    [2] = LAYOUT(
      //,---------------------------------------------------------------------------------.                        ,-----------------------------------------------------------------------------------.
          XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                                XXXXXXX,         XXXXXXX,         XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+----------------+----------------+----------------+--------+--------|
          XXXXXXX,        KC_1,          KC_2,          KC_3,          KC_4,          KC_5,                                KC_UNDS,         KC_PLUS,         KC_LBRC,         KC_LCBR, KC_LPRN, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+----------------+----------------+----------------+--------+--------|
          XXXXXXX,        KC_6,  LGUI_T(KC_7),  LALT_T(KC_8),  LSFT_T(KC_9),          KC_0,                                KC_MINS,  RSFT_T(KC_EQL), RALT_T(KC_RBRC),         KC_RCBR, KC_RPRN, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------|                        |--------------+----------------+----------------+--------------+--------+--------|
          XXXXXXX,      KC_DOT,       KC_QUOT,       KC_DQUO,        KC_GRV,       KC_TILD,   XXXXXXX,      XXXXXXX,       KC_SLSH,         KC_ASTR,         KC_COLN,         KC_SCLN, KC_BSLS, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------+----------|  |----------+--------------+----------------+----------------+----------------+--------+--------|
                                      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,   XXXXXXX,       KC_ENT,       XXXXXXX,         KC_RCTL,         XXXXXXX,         XXXXXXX
                            //`----------------------------------------------------------------------'  `----------------------------------------------------------------------------'
      ),

    [3] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT, KC_MPLY,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX,   MO(4), XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
                          //`--------------------------------------------'  `--------------------------------------------'
        ),
    [4] = LAYOUT(
        //,-----------------------------------------------------.                    ,------------------------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |---------------------+--------+--------+--------+--------+--------|
            XXXXXXX,   TG(5), XXXXXXX, XXXXXXX, QK_BOOT,  EE_CLR,                                    EE_CLR, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |---------------------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE,                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |---------------------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, QK_MAGIC_TOGGLE_NKRO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+---------------------+--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
                          //`--------------------------------------------'  `---------------------------------------------------------'
        ),
    //Game
    [5] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
             KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
             KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
             KC_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,    KC_MPLY,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              KC_LGUI, KC_LALT, KC_LCTL, XXXXXXX,  KC_SPC,     KC_ENT,   TG(5), KC_RCTL, KC_RALT, KC_RGUI
                          //`--------------------------------------------'  `--------------------------------------------'
        )
};




#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("0\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("1\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("2\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("3\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("4\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("5\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif