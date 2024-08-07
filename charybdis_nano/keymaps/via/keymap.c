#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_charybdis_nano(
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
                   KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,                   KC_Y,          KC_U,          KC_I,          KC_O,          KC_P,
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
             LT(1,KC_A),  LGUI_T(KC_S),  LALT_T(KC_D),  LSFT_T(KC_F),          KC_G,                   KC_H,  RSFT_T(KC_J),  RALT_T(KC_K),  RGUI_T(KC_L),RCTL_T(KC_QUOT),
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
                   KC_Z,          KC_X,          KC_C,          KC_V,          KC_B,                   KC_N,          KC_M,       KC_COMM,        KC_DOT, LT(5,KC_SLSH),
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
                                       LCTL_T(KC_ESC),  LT(2,KC_TAB),        KC_SPC,                 KC_ENT,       KC_BSPC
                                    //`--------------------------------------------'            `----------------------------------------'
        ),

    [1] = LAYOUT_charybdis_nano(
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, KC_MPLY,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            XXXXXXX, DRGSCRL, KC_LALT, KC_LSFT, XXXXXXX,          KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            XXXXXXX, SNIPING,   KC_F8,   KC_F2,  KC_F12,          KC_BTN3, KC_BTN1, KC_BTN2, DRGSCRL, SNIPING,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
                              KC_LCTL, KC_BSPC,  KC_ENT,           KC_ENT,  KC_DEL
                          //`--------------------------'        `--------------------------'
        ),

    [2] = LAYOUT_charybdis_nano(
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,          KC_CIRC, KC_AMPR, KC_ASTR, KC_SCLN, KC_COLN,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
               KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_MINS,  KC_EQL, KC_LBRC, KC_LCBR, KC_LPRN,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,          KC_UNDS, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX,           KC_GRV, LT(3,KC_BSLS)
                          //`--------------------------'        `--------------------------'
      ),

    [3] = LAYOUT_charybdis_nano(
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
              KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,              KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
              KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,              KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
             KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,              KC_MPRV, KC_VOLD, KC_MUTE, KC_VOLU, KC_MNXT,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
                              XXXXXXX,   MO(4), XXXXXXX,              XXXXXXX, XXXXXXX
                          //`--------------------------'            `--------------------------'
        ),
    [4] = LAYOUT_charybdis_nano(
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,  EE_CLR,               EE_CLR, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            RGB_TOG, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAGIC_TOGGLE_NKRO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX
                          //`--------------------------'            `--------------------------'
        ),
    [5] = LAYOUT_charybdis_nano(
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, DPI_MOD,DPI_RMOD,              S_D_MOD,S_D_RMOD, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, XXXXXXX,              XXXXXXX, KC_RSFT, KC_RALT, KC_RGUI, KC_RCTL,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,              KC_BTN3, KC_BTN1, KC_BTN2, DRG_TOG, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX
                          //`--------------------------'            `--------------------------'
        )
};
