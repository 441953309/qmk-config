#include "quantum.h"

// clang-format off
#ifdef RGB_MATRIX_ENABLE
    led_config_t g_led_config = {
        {
            {   0,   1,   2,   3,   4,   5 },
            {   6,   7,   8,   9,  10,  11 },
            {  12,  13,  14,  15,  16,  17 },
            {  18,  19,  20,  21,  22,  23 },
            {  24,  25,  26,  27,  28,  NO_LED },
            {  29,  30,  31,  32,  33,  34},
            {  35,  36,  37,  38,  39,  40},
            {  41,  42,  43,  44,  45,  46},
            {  47,  48,  49,  50,  51,  52},
            {  53,  54,  55,  56,  57,  NO_LED }
        },
        {
            // Left side Matrix
            {16, 14}, {32, 14}, {48, 14}, {64, 14}, {80, 14}, {96, 14},
            {16, 26}, {32, 26}, {48, 26}, {64, 26}, {80, 26}, {96, 26},
            {16, 38}, {32, 38}, {48, 38}, {64, 38}, {80, 38}, {96, 38},
            {16, 50}, {32, 50}, {48, 50}, {64, 50}, {80, 50}, {96, 50},
            {16, 62}, {32, 62}, {48, 62}, {64, 62}, {88, 62},
            // Right side Matrix
            {112, 14}, {128, 14}, {144, 14}, {160, 14}, {176, 14}, {208, 14},
            {112, 26}, {128, 26}, {144, 26}, {160, 26}, {176, 26}, {208, 26},
            {112, 38}, {128, 38}, {144, 38}, {160, 38}, {176, 38}, {208, 38},
            {112, 50}, {128, 50}, {144, 50}, {160, 50}, {176, 50}, {208, 50},
            {120, 62}, {144, 62}, {160, 62}, {176, 62}, {208, 62},
        },
        {
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4,
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4, 4,
            4, 4, 4, 4, 4
        }
    };
#endif