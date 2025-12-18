#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
                   KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,                   KC_Y,          KC_U,          KC_I,          KC_O,          KC_P,
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
             LT(1,KC_A),  LGUI_T(KC_S),  LALT_T(KC_D),  LSFT_T(KC_F),          KC_G,                   KC_H,  RSFT_T(KC_J),  RALT_T(KC_K),  RGUI_T(KC_L), RCTL_T(KC_QUOT),
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
             LT(5,KC_Z),          KC_X,          KC_C,          KC_V,          KC_B,                   KC_N,          KC_M,       KC_COMM,        KC_DOT,       KC_SLSH,
        //|------------+--------------+--------------+--------------+--------------|            |----------+--------------+--------------+--------------+--------------|
                                                      LCTL_T(KC_ESC),  LT(2,KC_SPC),                 KC_ENT,       KC_BSPC
                                                   //`-----------------------------'            `-------------------------'
        ),

    [1] = LAYOUT_split_3x5_2(
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            KC_MPLY, KC_VOLD, KC_MUTE, KC_VOLU,S(KC_TAB),         KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            XXXXXXX, KC_LGUI, KC_LALT, KC_LSFT,  KC_TAB,          KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX,   KC_F8,   KC_F2,  KC_F12,          KC_CALC, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
                                        KC_BSPC, KC_ENT,           KC_ENT,  KC_DEL
                                   //`-----------------'        `-----------------'
        ),

    [2] = LAYOUT_split_3x5_2(
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
            KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,          KC_CIRC, KC_AMPR, KC_ASTR, KC_SCLN, KC_COLN,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
               KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_MINS,  KC_EQL, KC_LBRC, KC_LCBR, KC_LPRN,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,          KC_UNDS, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN,
        //|--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
                                       XXXXXXX, XXXXXXX,     LT(3,KC_GRV), KC_BSLS
                                   //`-----------------'        `-----------------'
      ),

    [3] = LAYOUT_split_3x5_2(
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
              KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,              KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
              KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,              KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
             KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
                                       XXXXXXX,   MO(4),              XXXXXXX, XXXXXXX
                                   //`-----------------'            `-----------------'
        ),
    [4] = LAYOUT_split_3x5_2(
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,  EE_CLR,               EE_CLR, QK_BOOT, XXXXXXX, XXXXXXX, DB_TOGG,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAGIC_TOGGLE_NKRO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
                                       XXXXXXX, XXXXXXX,              XXXXXXX, XXXXXXX
                                   //`-----------------'            `-----------------'
        ),
    [5] = LAYOUT_split_3x5_2(
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
               KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            KC_QUOT,    KC_L,    KC_K,    KC_J,    KC_H,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
            KC_SLSH,  KC_DOT, KC_COMM,    KC_M,    KC_N,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------|            |--------+--------+--------+--------+--------|
                                       XXXXXXX,  KC_SPC,              XXXXXXX, XXXXXXX
                                   //`-----------------'            `-----------------'
        )
};

// 记录层切换
static uint8_t current_layer = 0;
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t new_layer = get_highest_layer(state);
    if (new_layer != current_layer) {
        printf("[QMK-LOG] current_layer %d -> new_layer %d\n", current_layer, new_layer);
        current_layer = new_layer;
    }
    return state;
}

// LT/MT 状态跟踪
typedef struct {
    bool active;
    uint16_t keycode;    // 基础按键码（Tap时使用）
    uint8_t row;
    uint8_t col;
    uint16_t press_time;
    bool hold_detected;
} lt_mt_tracker_t;

#define MAX_TRACKERS 10
static lt_mt_tracker_t trackers[MAX_TRACKERS] = {0};

// 记录 LT/MT 事件
void log_lt_mt_event(uint8_t row, uint8_t col, uint16_t keycode, const char* event_type, uint16_t held_time) {
    if (IS_QK_LAYER_TAP(keycode)) {
        printf("[QMK-LOG] row=%d col=%d LT(%d) 0x%04X %s hold_tap timer=%d\n", row, col, QK_LAYER_TAP_GET_LAYER(keycode), QK_LAYER_TAP_GET_TAP_KEYCODE(keycode), event_type, held_time);
    } else if (IS_QK_MOD_TAP(keycode)) {
        const char* mod = "";
        uint8_t mods = QK_MOD_TAP_GET_MODS(keycode);
        if (mods & MOD_LCTL || mods & MOD_RCTL) mod = "CTRL";
        else if (mods & MOD_LSFT || mods & MOD_RSFT) mod = "SHIFT";
        else if (mods & MOD_LALT || mods & MOD_RALT) mod = "ALT";
        else if (mods & MOD_LGUI || mods & MOD_RGUI) mod = "GUI";
        printf("[QMK-LOG] row=%d col=%d MT(%s) 0x%04X %s hold_tap timer=%d\n", row, col, mod, QK_MOD_TAP_GET_TAP_KEYCODE(keycode), event_type, held_time);
    }
}

// 主处理函数
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t row = record->event.key.row;
    uint8_t col = record->event.key.col;
    bool pressed = record->event.pressed;
    uint16_t time = record->event.time;
    printf("[QMK-LOG] row=%d col=%d pressed=%s keycode=0x%04X time=%d\n", row, col, pressed ? "true" : "false", keycode, time);

    if (IS_QK_LAYER_TAP(keycode) || IS_QK_MOD_TAP(keycode)) {
        if (pressed) {
            // 记录按下状态
            for (int i = 0; i < MAX_TRACKERS; i++) {
                if (!trackers[i].active) {
                    trackers[i].active = true;
                    trackers[i].keycode = keycode;                   // 存储LT/MT功能码
                    trackers[i].row = row;
                    trackers[i].col = col;
                    trackers[i].press_time = time;
                    trackers[i].hold_detected = false;
                    // 发送 undecided hold_tap 事件
                    log_lt_mt_event(row, col, keycode, "undecided", 0);
                    break;
                }
            }
        } else {
            // 释放时检查状态并记录
            for (int i = 0; i < MAX_TRACKERS; i++) {
                if(trackers[i].active && trackers[i].row == row && trackers[i].col == col){
                    uint16_t held_time = timer_elapsed(trackers[i].press_time);
                    // 发送 cleaning up hold_tap 事件
                    log_lt_mt_event(row, col, keycode, "cleaning up", held_time);
                    trackers[i].active = false;
                    break;
                }
            }
        }
    }

    return true;
}

// 定期检查超时
void matrix_scan_user(void) {
    for (int i = 0; i < MAX_TRACKERS; i++) {
        if (trackers[i].active) {
            uint16_t held_time = timer_elapsed(trackers[i].press_time);
            if (held_time >= TAPPING_TERM && !trackers[i].hold_detected) {
                // 超时，发送 decided hold_tap 事件
                log_lt_mt_event(trackers[i].row, trackers[i].col, trackers[i].keycode, "decided", held_time);
                trackers[i].hold_detected = true;
            }
        }
    }
}
