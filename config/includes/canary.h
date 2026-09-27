#pragma once

/*
 * Canary Layout - Core Character Row Definitions
 *
 * Cornix LP (52/54-key matrix)
 * Row 0: 12 keys (Top row)
 * Row 1: 12 keys (Home row)
 * Row 2: 14 keys (Bottom row + center rotary encoder push buttons)
 */

#define CANARY_ROW0 \
    &none      &kp W     &kp L       &kp Y            &kp P             &kp B                          &kp Z          &kp F             &kp O         &kp U    &kp MINUS  &none

#define CANARY_ROW1 \
    &kp GRAVE  &kp C     &kp R       &kp S            &kp T             &kp G                          &kp M          &kp N             &kp E         &kp I    &kp A      &kp SQT
