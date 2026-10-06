#pragma once

/*
 * Navigation Keys & Skeleton Template
 *
 * 【設計思想・目的】
 * Left-Navigation と Right-Navigation は、どちらの手でコンボホールドしているかに応じて
 * フリーな側の手に Shift キーおよび Enter キーを提供する対称構造のナビゲーション面。
 * 両面のコアキー定義（ファンクションキー、カーソル移動キー、特殊キー等）を一元化し、
 * 将来の配置変更における二重管理や同期ズレを防止するために骨格テンプレートマクロとして定義する。
 */

/*
 * Shift ブロック部品マクロ
 * フリーな手の側に Shift キーを供給し、ホールド側の手は空き（none）とするためのパーツ。
 */
#define NAV_SHIFTS       &kp LSHIFT &none &kp RSHIFT
#define NAV_EMPTY_SHIFTS &none &none &none

/*
 * Navigation Layer Skeleton Template
 *
 * 引数:
 * - L_SHIFTS: 左手側の Shift ブロック (NAV_SHIFTS または NAV_EMPTY_SHIFTS)
 * - R_SHIFTS: 右手側の Shift ブロック (NAV_SHIFTS または NAV_EMPTY_SHIFTS)
 * - L_INNER_THUMB: 左手親指の最内側キー (&to LAYER_SYSTEM または &kp RET)
 * - R_INNER_THUMB: 右手親指の最内側キー (&kp RET または &to LAYER_SYSTEM)
 */
#define NAVIGATION_BINDINGS(L_SHIFTS, R_SHIFTS, L_INNER_THUMB, R_INNER_THUMB) \
    &to LAYER_NAGINATA &kp F1   &kp F2   &kp F3   &kp F4           &kp F5                            &kp PRINTSCREEN &kp HOME         &kp UP   &kp END   &kp PG_UP  &to LAYER_LATIN \
    &kp PAUSE_BREAK    &kp F6   &kp F7   &kp F8   &kp F9           &kp F10                           &kp CAPSLOCK    &kp LEFT         &kp DOWN &kp RIGHT &kp PG_DN  &kp RGUI \
    &kp LCTRL          &kp F11  L_SHIFTS          &kp F12          &none            &none            &kp SCROLLLOCK  R_SHIFTS                  &kp INSERT           &kp RCTRL \
    &kp LALT           &kp LGUI &kp TAB  &kp DEL  &mt LSHIFT SPACE L_INNER_THUMB    R_INNER_THUMB    &mt RSHIFT SPACE &kp BSPC        &kp ESC  &kp K_APP            &kp RALT
