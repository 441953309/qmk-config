#pragma once

/* Handedness. */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* Trackball angle adjustment. */
#define ROTATIONAL_TRANSFORM_ANGLE -25

/* Pointing device configuration. */

// Enable use of pointing device on slave split.
#define SPLIT_POINTING_ENABLE

// Pointing device is on the right split.
#define POINTING_DEVICE_RIGHT

// Limits the frequency that the sensor is polled for motion.
#define POINTING_DEVICE_TASK_THROTTLE_MS 1

// Invert X axis on mouse reports.
#define POINTING_DEVICE_INVERT_X

#define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 8
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MOVE_DELTA 25

// #define MOUSEKEY_DELAY 300
// #define MOUSEKEY_INTERVAL 50
// #define MOUSEKEY_MOVE_DELTA 5

#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_TIME_TO_MAX 10
#define MOUSEKEY_INITIAL_SPEED 100
#define MOUSEKEY_BASE_SPEED 1000
#define MOUSEKEY_DECELERATED_SPEED 400
#define MOUSEKEY_ACCELERATED_SPEED 3000
/* Mouse scroll config. */
#define MOUSEKEY_WHEEL_DELAY 15
#define MOUSEKEY_WHEEL_DELTA 1
#define MOUSEKEY_WHEEL_INTERVAL 50
#define MOUSEKEY_WHEEL_MAX_SPEED 8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 80
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 8
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 48
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8
