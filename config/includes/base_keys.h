#pragma once

/*
 * Base Keys & Skeleton Templates (Latin & Symbols)
 *
 * 【設計思想】
 * Layer 0 (Latin) と Layer 1 (Symbols) はユーザーのメンタルモデルとして「1セット」の基本打鍵面。
 * それぞれの Mod レイヤー (Layer 8: Mod-Latin / Layer 9: Mod-Symbols) は ZMK 実装都合のレイヤーであり、
 * コア打鍵エリア(30キー)およびはみ出しキー(L26, R26, L41, R41, R42)の変更に対して
 * 完全に自動追従・同期させるため、骨格テンプレートマクロとして一元管理する。
 */

#define LM_LATIN(mod)   &lm LAYER_MOD_LATIN mod
#define LM_SYMBOLS(mod) &lm LAYER_MOD_SYMBOLS mod
#define TRANS_MOD(mod)  &trans

/*
 * Latin Layer Skeleton Template
 *
 * コア打鍵文字30キー + はみ出しキー(L26: `, R26: ', L41: Tab, R41: Esc, R42: Menu)
 * および親指キー(Del, Space/Shift, Enter)の配置を定義。
 */
#define LATIN_BINDINGS(MOD_FN, SYM_LAYER) \
    &none         &kp B         &kp L       &kp D            &kp W             &kp Z                          &mm_comma_excl &kp F             &kp O         &kp U    &kp J          &none \
    &kp GRAVE     &kp N         &kp R       &kp T            &kp S             &kp G                          &kp Y          &kp H             &kp A         &kp E    &kp I          &kp SQT \
    MOD_FN(LCTRL) &kp Q         &kp X       &kp P            &kp C             &kp V      &kp C_MUTE &kp LG(L) &kp K         &kp M             &mm_dot_qmark &kp MINUS &mm_slash_bslh MOD_FN(RCTRL) \
    MOD_FN(LALT)  MOD_FN(LGUI)  &kp TAB     &kp DEL          &mt LSHIFT SPACE  &lt SYM_LAYER RET         &lt SYM_LAYER RET  &mt RSHIFT SPACE  &kp BSPC      &kp ESC  &kp K_APP      MOD_FN(RALT)

/*
 * Symbols Layer Skeleton Template
 *
 * コア記号・テンキー30キー + 固定機能キー(L41: Tab, R41: Esc, R42: Menu)
 * および親指キー(Del/Bspcの片手完結反転仕様、Space/Shift、Enter透過)の配置を定義。
 */
#define SYMBOLS_BINDINGS(MOD_FN, TOP_L, TOP_R) \
    TOP_L         &kp LBRC      &kp RBRC    &mm_lbkt         &mm_rbkt          &kp CARET                      &kp PRCNT      &kp HASH          &kp LT        &kp GT   &kp DLLR       TOP_R \
    &none         &mm_semi      &kp PIPE    &kp AMPS         &mm_n0            &kp COLON                      &kp AT         &mm_n1            &kp LPAR      &kp RPAR &mm_equal      &none \
    MOD_FN(LCTRL) &mm_n6        &mm_n7      &mm_n8           &mm_n9            &kp PLUS   &kp C_MUTE &kp LG(L) &kp ASTRK     &mm_n2            &mm_n3        &mm_n4   &mm_n5         MOD_FN(RCTRL) \
    MOD_FN(LALT)  MOD_FN(LGUI)  &kp TAB     &kp BSPC         &mt LSHIFT SPACE  &trans                    &trans         &mt RSHIFT SPACE  &kp DEL       &kp ESC  &kp K_APP      MOD_FN(RALT)
