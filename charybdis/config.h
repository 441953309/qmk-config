#pragma once

/* Pointing device configuration. */

// Enable use of pointing device on slave split.
#define SPLIT_POINTING_ENABLE

// Pointing device is on the right split.
#define POINTING_DEVICE_RIGHT

// Limits the frequency that the sensor is polled for motion.
#define POINTING_DEVICE_TASK_THROTTLE_MS 1

// Invert X axis on mouse reports.
#define POINTING_DEVICE_INVERT_X

/* RGB matrix support. */
#ifdef RGB_MATRIX_ENABLE
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#endif
