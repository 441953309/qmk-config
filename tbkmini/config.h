#pragma once

// #define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define ENABLE_COMPILE_KEYCODE

/* RGB matrix support. */
#ifdef RGB_MATRIX_ENABLE
    #define SPLIT_TRANSPORT_MIRROR
    #define RGB_MATRIX_LED_COUNT 42
    #define RGB_MATRIX_SPLIT { 21, 21 }
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
    #define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    // #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
    // #define ENABLE_RGB_MATRIX_DUAL_BEACON
    // #define ENABLE_RGB_MATRIX_RAINBOW_BEACON
    // #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    // #define ENABLE_RGB_MATRIX_HUE_PENDULUM

    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses 
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    // #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    // #define ENABLE_RGB_MATRIX_SPLASH
    // #define ENABLE_RGB_MATRIX_SOLID_SPLASH
#endif
