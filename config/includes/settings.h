#pragma once

// レイヤータップ (親指 Enter / Space の長押し・連打判定)
#define LT_TAPPING_TERM_MS 250 // ホールド(レイヤー切り替え)とみなす時間
#define LT_QUICK_TAP_MS 200 // タップ後の連続打鍵でホールド暴発を防ぐ時間

// 同時押しコンボ (Combos)
#define COMBO_TIMEOUT_MS 50 // 同時押しと判定する許容時間 (ミリ秒)

// かな・マクロ送信速度 (Naginata Macros)
#define KANA_WAIT_MS 8 // キー送信間のウェイト
#define KANA_TAP_MS 8 // キー押下時間

// IME切り替えマクロ (Alt + `)
#define IME_MACRO_WAIT_MS 10 // Alt + ` 送信時の待機時間
#define IME_MACRO_TAP_MS 10 // Alt + ` 送信時のタップ時間

// ロータリーエンコーダー (Scroll)
#define SCROLL_ENCODER_TAP_MS 20 // スクロール回転時のパルス時間
#define ZMK_POINTING_DEFAULT_SCRL_VAL 100 // スクロール量
