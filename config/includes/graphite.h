#pragma once

/*
 * Graphite Layout - Core Character Row Definitions
 *
 * Cornix LP (52/54-key matrix)
 * Row 0: 12 keys (Top row)
 * Row 1: 12 keys (Home row)
 * Row 2: 14 keys (Bottom row + center rotary encoder push buttons)
 */

#define GRAPHITE_ROW0 \
    &none      &kp B     &kp L       &kp D            &kp W             &kp Z                          &mm_comma_excl &kp F             &kp O         &kp U    &kp J      &none

#define GRAPHITE_ROW1 \
    &kp GRAVE  &kp N     &kp R       &kp T            &kp S             &kp G                          &kp Y          &kp H             &kp A         &kp E    &kp I      &kp SQT
