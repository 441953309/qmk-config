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
        //,---------------------------------------------------------------------------------.                         ,-----------------------------------------------------------------------------------.
            XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                                 XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------------+--------|
            XXXXXXX,        KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,                                    KC_Y,          KC_U,          KC_I,          KC_O,          KC_P, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------------+--------|
            XXXXXXX,  LT(1,KC_A),  LGUI_T(KC_S),  LALT_T(KC_D),  LSFT_T(KC_F),          KC_G,                                    KC_H,  RSFT_T(KC_J),  RALT_T(KC_K),  RGUI_T(KC_L),RCTL_T(KC_QUOT),XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------------+--------|
            XXXXXXX,  LT(5,KC_Z),          KC_X,          KC_C,          KC_V,          KC_B,   KC_MUTE,       KC_MPLY,          KC_N,          KC_M,       KC_COMM,        KC_DOT,       KC_SLSH, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------+----------|   |----------+--------------+--------------+--------------+--------------+--------------+--------|
                                        XXXXXXX,       XXXXXXX,LCTL_T(KC_ESC),  LT(2,KC_SPC),   XXXXXXX,       XXXXXXX,        KC_ENT, LT(3,KC_BSPC),       XXXXXXX,       XXXXXXX
                              //`----------------------------------------------------------------------'   `----------------------------------------------------------------------'
        ),

    [1] = LAYOUT(
        //,---------------------------------------------------------------------------------.                         ,-----------------------------------------------------------------------------.
            XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                                 XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,     KC_MPLY,       KC_VOLD,       KC_MUTE,       KC_VOLU,     S(KC_TAB),                                 KC_HOME,       KC_PGDN,       KC_PGUP,        KC_END, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,     XXXXXXX,       KC_LGUI,       KC_LALT,       KC_LSFT,        KC_TAB,                                 KC_LEFT,       KC_DOWN,         KC_UP,      KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------+--------|
            XXXXXXX,     XXXXXXX,       XXXXXXX,         KC_F8,         KC_F2,        KC_F12,   XXXXXXX,       XXXXXXX,       KC_CALC,       KC_MPRV,       KC_MPLY,       KC_MNXT, XXXXXXX, XXXXXXX,
        //|--------+------------+--------------+--------------+--------------+--------------+----------|   |----------+--------------+--------------+--------------+--------------+--------+--------|
                                        XXXXXXX,       XXXXXXX,       KC_BSPC,        KC_ENT,   XXXXXXX,       XXXXXXX,        KC_ENT,        KC_DEL,       XXXXXXX,        XXXXXXX
                              //`----------------------------------------------------------------------'   `----------------------------------------------------------------------'
        ),

    [2] = LAYOUT(
      //,---------------------------------------------------------------------------------.                         ,-----------------------------------------------------------------------------.
          XXXXXXX,     XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,                                 XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------+--------|
          XXXXXXX,     KC_EXLM,         KC_AT,       KC_HASH,        KC_DLR,       KC_PERC,                                 KC_CIRC,       KC_AMPR,       KC_ASTR,       KC_SCLN, KC_COLN, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------+--------|
          XXXXXXX,        KC_1,          KC_2,          KC_3,          KC_4,          KC_5,                                 KC_MINS,        KC_EQL,       KC_LBRC,       KC_LCBR, KC_LPRN, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------|                         |--------------+--------------+--------------+--------------+--------+--------|
          XXXXXXX,        KC_6,          KC_7,          KC_8,          KC_9,          KC_0,   XXXXXXX,       XXXXXXX,       KC_UNDS,       KC_PLUS,       KC_RBRC,       KC_RCBR, KC_RPRN, XXXXXXX,
      //|--------+------------+--------------+--------------+--------------+--------------+----------|   |----------+--------------+--------------+--------------+--------------+--------+--------|
                                      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,   XXXXXXX,       XXXXXXX,  LT(3,KC_GRV),       KC_BSLS,       XXXXXXX,       XXXXXXX
                            //`----------------------------------------------------------------------'   `----------------------------------------------------------------------'
      ),

    [3] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX,  KC_F11,  KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX,   MO(4), XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
                          //`--------------------------------------------'  `--------------------------------------------'
        ),

    [4] = LAYOUT(
        //,-----------------------------------------------------.                    ,------------------------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |---------------------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,  EE_CLR, XXXXXXX,                                    EE_CLR, QK_BOOT, XXXXXXX, XXXXXXX, DB_TOGG, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |---------------------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE, XXXXXXX,                                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |---------------------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAGIC_TOGGLE_NKRO, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+---------------------+--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
                          //`--------------------------------------------'  `---------------------------------------------------------'
        ),

    [5] = LAYOUT(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX,    KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, KC_QUOT,    KC_L,    KC_K,    KC_J,    KC_H,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, KC_SLSH,  KC_DOT, KC_COMM,    KC_M,    KC_N, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX,  KC_SPC, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
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

// 记录层切换
static layer_state_t prev_layer_state = 0;
layer_state_t layer_state_set_user(layer_state_t state) {
    layer_state_t diff = state ^ prev_layer_state;
    for (int i = 0; i < 32; i++) {
        if ((diff >> i) & 1) {
            bool on = (state >> i) & 1;
            printf("layer_changed: layer %d state %d\n", i, on ? 1 : 0);
        }
    }
    prev_layer_state = state;
    return state;
}

// 记录修饰键状态
static uint8_t last_mods = 0;
void log_modifier_change(void) {
    uint8_t current_mods = get_mods();
    if (current_mods != last_mods) {
        printf("modifiers_changed: 0x%02X\n", current_mods);
        last_mods = current_mods;
    }
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
    log_modifier_change(); // 检查修饰键变化

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
                    // 发送 tap/release 事件
                    if (trackers[i].hold_detected) {
                        log_lt_mt_event(row, col, keycode, "released", held_time);
                    } else {
                        log_lt_mt_event(row, col, keycode, "tap", held_time);
                    }
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
                // 超时，发送 hold hold_tap 事件
                log_lt_mt_event(trackers[i].row, trackers[i].col, trackers[i].keycode, "hold", held_time);
                trackers[i].hold_detected = true;
            }
        }
    }
}
