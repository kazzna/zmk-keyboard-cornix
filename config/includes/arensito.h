#pragma once

/*
 * Arensito Layout - Core Character Row Definitions
 *
 * Cornix LP (52/54-key matrix)
 * Row 0: 12 keys (Top row)
 * Row 1: 12 keys (Home row)
 * Row 2: 14 keys (Bottom row + center rotary encoder push buttons)
 */

#define ARENSITO_ROW0 \
    &none      &kp Q     &kp L       &mm_comma_qmark  &kp P             &mm_at_hash                    &mm_pipe_amps  &kp F             &kp U         &kp D    &kp K      &none

#define ARENSITO_ROW1 \
    &kp GRAVE  &kp A     &kp R       &kp E            &kp N             &kp B                          &kp G          &kp S             &kp I         &kp T    &kp O      &kp SQT

#define ARENSITO_ROW2 \
    &kp LCTRL  &kp Z     &kp W       &mm_dot_excl     &kp H             &kp J      &kp C_MUTE &kp LG(L)   &kp V       &kp C             &kp Y         &kp M    &kp X      &kp RCTRL

/* Upper 3 rows combined (core layout) */
#define ARENSITO_ALPHA_ROWS \
    ARENSITO_ROW0 \
    ARENSITO_ROW1 \
    ARENSITO_ROW2
