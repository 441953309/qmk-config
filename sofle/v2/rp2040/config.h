#pragma once

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* OLED over i2c. */
// #define I2C1_CLOCK_SPEED 400000
// #define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_16_9
// #define OLED_DISPLAY_HEIGHT 128