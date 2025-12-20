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
                                        XXXXXXX,       XXXXXXX,LCTL_T(KC_ESC),  LT(2,KC_SPC),   XXXXXXX,       XXXXXXX,        KC_ENT,       KC_BSPC,       XXXXXXX,       XXXXXXX
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
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,  EE_CLR, XXXXXXX,                       EE_CLR, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, NK_TOGG, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
                          //`--------------------------------------------'  `--------------------------------------------'
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


// LT/MT 状态跟踪
typedef struct {
    bool active;
    uint16_t keycode;    // 基础按键码（Tap时使用）
    uint8_t row;
    uint8_t col;
    uint16_t press_time;
    bool hold_detected;
    bool decision_sent;
    bool is_hold_decision;
    bool key_sent;
    uint16_t decided_keycode;
    uint8_t hold_layer;
    bool layer_press_logged;
} lt_mt_tracker_t;

#define MAX_TRACKERS 10
static lt_mt_tracker_t trackers[MAX_TRACKERS] = {0};

static uint16_t get_lt_tap_keycode(uint16_t keycode) {
    return QK_LAYER_TAP_GET_TAP_KEYCODE(keycode);
}

static uint16_t get_lt_hold_keycode(uint16_t keycode) {
    uint8_t layer = QK_LAYER_TAP_GET_LAYER(keycode);
    return MO(layer);
}

static uint16_t get_mt_hold_keycode(uint16_t keycode) {
    uint8_t mods = QK_MOD_TAP_GET_MODS(keycode);
    if (!mods) return KC_NO;

    // Pick the lowest-set mod bit to avoid contaminating with extra bits
    uint8_t mod_bit = mods & (uint8_t)(-mods);
    switch (mod_bit) {
        case MOD_LCTL: return KC_LCTL;
        case MOD_LSFT: return KC_LSFT;
        case MOD_LALT: return KC_LALT;
        case MOD_LGUI: return KC_LGUI;
        case MOD_RCTL: return KC_RCTL;
        case MOD_RSFT: return KC_RSFT;
        case MOD_RALT: return KC_RALT;
        case MOD_RGUI: return KC_RGUI;
        default: return KC_NO;
    }
}

static uint16_t get_mt_tap_keycode(uint16_t keycode) {
    return QK_MOD_TAP_GET_TAP_KEYCODE(keycode);
}

static void log_key_event(uint8_t row, uint8_t col, uint16_t keycode, bool pressed, uint16_t time) {
    printf("[QMK-LOG] row=%d col=%d pressed=%s keycode=0x%04X time=%d\n", row, col, pressed ? "true" : "false", keycode, time);
}

static void log_layer_event(uint8_t row, uint8_t col, uint8_t layer, bool pressed, uint16_t time) {
    printf("[QMK-LOG] row=%d col=%d layer=%d %s time=%d\n", row, col, layer, pressed ? "layer_press" : "layer_release", time);
}

// 记录层切换
static uint8_t current_layer = 0;
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t new_layer = get_highest_layer(state);
    if (new_layer != current_layer) {
        // 确保 LT 的 layer_press 先于 layer_change 日志
        if (new_layer > current_layer) {
            for (int i = 0; i < MAX_TRACKERS; i++) {
                if (trackers[i].active &&
                    IS_QK_LAYER_TAP(trackers[i].keycode) &&
                    trackers[i].hold_layer == new_layer &&
                    !trackers[i].layer_press_logged) {
                    log_layer_event(trackers[i].row, trackers[i].col, trackers[i].hold_layer, true, timer_read());
                    trackers[i].layer_press_logged = true;
                    break;
                }
            }
        }
        printf("[QMK-LOG] current_layer %d -> new_layer %d\n", current_layer, new_layer);
        current_layer = new_layer;
    }
    return state;
}

// 记录 LT/MT 事件
void log_lt_mt_event(uint8_t row, uint8_t col, uint16_t keycode, const char* event_type, const char* decision, uint16_t held_time) {
    const char* decision_sep = (decision && decision[0]) ? " " : "";
    const char* decision_str = (decision && decision[0]) ? decision : "";

    if (IS_QK_LAYER_TAP(keycode)) {
        uint16_t tap_code = get_lt_tap_keycode(keycode);
        uint16_t hold_code = get_lt_hold_keycode(keycode);
        printf("[QMK-LOG] row=%d col=%d LT(%d) tap=0x%04X hold=0x%04X %s%s%s hold_tap timer=%d\n",
               row, col, QK_LAYER_TAP_GET_LAYER(keycode), tap_code, hold_code, event_type, decision_sep, decision_str, held_time);
    } else if (IS_QK_MOD_TAP(keycode)) {
        const char* mod = "";
        uint8_t mods = QK_MOD_TAP_GET_MODS(keycode);
        uint8_t mod_bit = mods ? (mods & (uint8_t)(-mods)) : 0;
        if (mod_bit == MOD_LCTL || mod_bit == MOD_RCTL) mod = "CTRL";
        else if (mod_bit == MOD_LSFT || mod_bit == MOD_RSFT) mod = "SHIFT";
        else if (mod_bit == MOD_LALT || mod_bit == MOD_RALT) mod = "ALT";
        else if (mod_bit == MOD_LGUI || mod_bit == MOD_RGUI) mod = "GUI";
        uint16_t hold_code = get_mt_hold_keycode(keycode);
        uint16_t tap_code = get_mt_tap_keycode(keycode);
        printf("[QMK-LOG] row=%d col=%d MT(%s) tap=0x%04X hold=0x%04X %s%s%s hold_tap timer=%d\n",
               row, col, mod, tap_code, hold_code, event_type, decision_sep, decision_str, held_time);
    }
}

static uint16_t get_tracker_tap_keycode(const lt_mt_tracker_t* tracker) {
    if (IS_QK_LAYER_TAP(tracker->keycode)) return get_lt_tap_keycode(tracker->keycode);
    if (IS_QK_MOD_TAP(tracker->keycode)) return get_mt_tap_keycode(tracker->keycode);
    return tracker->keycode;
}

static uint16_t get_tracker_hold_keycode(const lt_mt_tracker_t* tracker) {
    if (IS_QK_LAYER_TAP(tracker->keycode)) return get_lt_hold_keycode(tracker->keycode);
    if (IS_QK_MOD_TAP(tracker->keycode)) return get_mt_hold_keycode(tracker->keycode);
    return KC_NO;
}

static void decide_hold_tap(lt_mt_tracker_t* tracker, uint16_t held_time) {
    bool is_lt = IS_QK_LAYER_TAP(tracker->keycode);
    bool is_hold = held_time >= TAPPING_TERM;
    const char* decision = is_hold ? "hold" : "tap";
    uint16_t keycode = is_hold ? get_tracker_hold_keycode(tracker) : get_tracker_tap_keycode(tracker);
    if (keycode == KC_NO) {
        // 回退到 Tap 码以保证后续事件都有携带 keycode
        keycode = get_tracker_tap_keycode(tracker);
    }

    log_lt_mt_event(tracker->row, tracker->col, tracker->keycode, "decided", decision, held_time);

    if (is_lt) {
        tracker->decision_sent = true;
        tracker->is_hold_decision = is_hold;
        tracker->decided_keycode = keycode;
        tracker->key_sent = false;
        tracker->hold_layer = QK_LAYER_TAP_GET_LAYER(tracker->keycode);
        if (is_hold) {
            if (!tracker->layer_press_logged) {
                log_layer_event(tracker->row, tracker->col, tracker->hold_layer, true, timer_read());
                tracker->layer_press_logged = true;
            }
        } else {
            log_key_event(tracker->row, tracker->col, tracker->decided_keycode, true, timer_read());
            tracker->key_sent = true;
        }
        return;
    }

    // 对 MT 保持原有 key_press 行为
    log_key_event(tracker->row, tracker->col, keycode, true, timer_read());

    tracker->decision_sent = true;
    tracker->is_hold_decision = is_hold;
    tracker->decided_keycode = keycode;
    tracker->key_sent = true;
    tracker->hold_detected = is_hold || tracker->hold_detected;
}

// 主处理函数
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t row = record->event.key.row;
    uint8_t col = record->event.key.col;
    bool pressed = record->event.pressed;
    uint16_t time = record->event.time;
    bool is_lt_mt = IS_QK_LAYER_TAP(keycode) || IS_QK_MOD_TAP(keycode);
    bool is_mo = keycode >= QK_MOMENTARY && keycode <= QK_MOMENTARY_MAX;

    // LT/MT 特殊处理：先发 hold_tap_press，等待决定后再发 key_press
    if (is_lt_mt) {
        if (pressed) {
            for (int i = 0; i < MAX_TRACKERS; i++) {
                if (!trackers[i].active) {
                    trackers[i].active = true;
                    trackers[i].keycode = keycode;
                    trackers[i].row = row;
                    trackers[i].col = col;
                    trackers[i].press_time = time;
                    trackers[i].hold_detected = false;
                    trackers[i].decision_sent = false;
                    trackers[i].is_hold_decision = false;
                    trackers[i].key_sent = false;
                    trackers[i].decided_keycode = KC_NO;
                    trackers[i].hold_layer = IS_QK_LAYER_TAP(keycode) ? QK_LAYER_TAP_GET_LAYER(keycode) : 0;
                    trackers[i].layer_press_logged = false;
                    // 发送 hold_tap_press（undecided）
                    log_lt_mt_event(row, col, keycode, "undecided", "", 0);
                    break;
                }
            }
            return true;
        } else {
            for (int i = 0; i < MAX_TRACKERS; i++) {
                if (trackers[i].active && trackers[i].row == row && trackers[i].col == col) {
                    uint16_t held_time = timer_elapsed(trackers[i].press_time);

                    if (!trackers[i].decision_sent) {
                        decide_hold_tap(&trackers[i], held_time);
                    }

                    // hold_tap_release
                    log_lt_mt_event(row, col, trackers[i].keycode, "released", "", held_time);

                    if (IS_QK_LAYER_TAP(trackers[i].keycode)) {
                        if (trackers[i].decision_sent && trackers[i].is_hold_decision) {
                            log_layer_event(row, col, trackers[i].hold_layer, false, time);
                        } else if (trackers[i].key_sent) {
                            log_key_event(row, col, trackers[i].decided_keycode, false, time);
                        }
                    } else if (trackers[i].key_sent) {
                        log_key_event(row, col, trackers[i].decided_keycode, false, time);
                    }

                    trackers[i].active = false;
                    break;
                }
            }
            return true;
        }
    }

    // MO(layer) 直接记录 layer_press / layer_release
    if (is_mo) {
        uint8_t layer = keycode & 0xFF;      // layer stored in low byte
        layer &= 0x1F;                       // drop stray flag bits (e.g., 0x20) to keep 0-31
        log_layer_event(row, col, layer, pressed, time);
        return true;
    }

    // 普通按键保持原有 key_press/key_release 日志
    log_key_event(row, col, keycode, pressed, time);
    return true;
}

// 定期检查超时
void matrix_scan_user(void) {
    for (int i = 0; i < MAX_TRACKERS; i++) {
        if (trackers[i].active) {
            uint16_t held_time = timer_elapsed(trackers[i].press_time);
            if (held_time >= TAPPING_TERM && !trackers[i].decision_sent) {
                // 超时，发送 hold_tap_decide 并在此时发送 key_press（hold 码）
                decide_hold_tap(&trackers[i], held_time);
            }
        }
    }
}
