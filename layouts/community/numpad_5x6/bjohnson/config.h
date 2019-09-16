#pragma once

// #define B6_AUDIO

#if defined(RGBLIGHT_ENABLE) && !defined(RGBLED_NUM)
#define RGB_DI_PIN B7
#define RGBLED_NUM 13     // Number of LEDs
#define RGBLIGHT_ANIMATIONS

#define RGBLIGHT_HUE_STEP 12
#define RGBLIGHT_SAT_STEP 12
#define RGBLIGHT_VAL_STEP 12
#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 2
#define RGBLIGHT_EFFECT_SNAKE_LENGTH 2
#define RGBLIGHT_EFFECT_BREATHE_CENTER 1

#define RGBLIGHT_SLEEP
#endif // RGBLIGHT_ENABLE

#ifdef AUDIO_ENABLE
#ifdef RGBLIGHT_ENABLE
#define NO_MUSIC_MODE
#endif // RGBLIGHT_ENABLE
#endif // AUDIO_ENABLE
#define TAP_CODE_DELAY 10
