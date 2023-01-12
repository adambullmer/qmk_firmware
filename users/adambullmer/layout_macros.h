#pragma once

#define TRANS_12 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
#define TRANS_6  _______, _______, _______, _______, _______, _______
#define TRANS_4  _______, _______, _______, _______
#define TRANS_3  _______, _______, _______
#define TRANS_2  _______, _______

#define MEDIA_VOLUME KC_MUTE, KC_VOLD, KC_VOLU
#define MEDIA_TOP    KC_INS,  KC_HOME, KC_PGUP
#define MEDIA_BOTTOM KC_DEL,  KC_END,  KC_PGDN

#define ARROW_TOP               KC_UP
#define ARROW_BOTTOM  KC_LEFT, KC_DOWN, KC_RGHT

#define KC_WEMJ LGUI(KC_DOT)
#define KC_MEMJ LCTL(LGUI(KC_SPACE))
#define KC_UEMJ LCTL(KC_SEMICOLON)

#define LAYOUT_TKL_WINDOWS_FUNCTION   KC_MUTE, KC_VOLD, KC_VOLU, _______,   KC_MPRV, KC_MPLY, KC_MNXT, _______,   KC_WEMJ, L_BRD,   L_BRI,   KC_PSCR
#define LAYOUT_TKL_MAC_FUNCTION       KC_BRMD, KC_BRMU, L_BRD,   L_BRI,     KC_MEMJ, XXXXXXX, KC_MPRV, KC_MPLY,   KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU
#define LAYOUT_TKL_UBUNTU_FUNCTION    KC_MUTE, KC_VOLD, KC_VOLU, _______,   KC_MPRV, KC_MPLY, KC_MNXT, _______,   KC_UEMJ, L_BRD,   L_BRI,   KC_PSCR

#define LAYOUT_TKL_WINDOWS_MOD_LEFT   KC_LCTL, KC_LGUI, KC_LALT
#define LAYOUT_TKL_MAC_MOD_LEFT       KC_LCTL, KC_LALT, KC_LGUI
#define LAYOUT_TKL_UBUNTU_MOD_LEFT    KC_LCTL, KC_LGUI, KC_LALT

#define LAYOUT_TKL_WINDOWS_MOD_RIGHT  KC_RALT, MO(_FN), KC_APP,  KC_RCTL
#define LAYOUT_TKL_MAC_MOD_RIGHT      KC_RGUI, MO(_FN), KC_APP,  KC_RCTL
#define LAYOUT_TKL_UBUNTU_MOD_RIGHT   KC_RALT, MO(_FN), KC_APP,  KC_RCTL

/**
 * Standard TKL QWERTY layout.
 *    *-------------------------------------------------------------------------*
 *    |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PSc|SLk|Pau|
 *    |-----------------------------------------------------------|-------------|
 *    | ~ | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Backsp | |Ins|Hom|PgU|
 *    |-----------------------------------------------------------|-------------|
 *    | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  | |Del|End|PgD|
 *    |-----------------------------------------------------------|-------------|
 *    | Caps | A | S | D | F | G | H | J | K | L | ; | ' | Return |             |
 *    |-----------------------------------------------------------|-------------|
 *    | Shift  | Z | X | C | V | B | N | M | , | . | / |  Shift   |     | Up|   |
 *    |-----------------------------------------------------------|-------------|
 *    |Ctrl|LGUI|LAlt|          Space         |RGUI| Fn |RAlt|Ctrl| |Lft|Dwn|Rgt|
 *    *-------------------------------------------------------------------------*
 */
#define LAYOUT_TKL_QWERTY_R1 KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL
#define LAYOUT_TKL_QWERTY_R2 KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC
#define LAYOUT_TKL_QWERTY_R3 KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT
#define LAYOUT_TKL_QWERTY_R4 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

/**
 * Standard TKL Dvorak layout.
 *    *-------------------------------------------------------------------------*
 *    |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PSc|SLk|Pau|
 *    |-----------------------------------------------------------|-------------|
 *    | ~ | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Backsp | |Ins|Hom|PgU|
 *    |-----------------------------------------------------------|-------------|
 *    | Tab | ' | , | . | P | Y | F | G | C | R | L | / | = |  \  | |Del|End|PgD|
 *    |-----------------------------------------------------------|-------------|
 *    | Caps | A | O | E | U | I | D | H | T | N | S | - | Return |             |
 *    |-----------------------------------------------------------|-------------|
 *    | Shift  | ; | Q | J | K | X | B | M | W | V | Z |  Shift   |     | Up|   |
 *    |-----------------------------------------------------------|-------------|
 *    |Ctrl|LGUI|LAlt|          Space         |RGUI| Fn |RAlt|Ctrl| |Lft|Dwn|Rgt|
 *    *-------------------------------------------------------------------------*
 */
#define LAYOUT_TKL_DVORAK_R1 KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC
#define LAYOUT_TKL_DVORAK_R2 KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL
#define LAYOUT_TKL_DVORAK_R3 KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS
#define LAYOUT_TKL_DVORAK_R4 KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z

/**
 * Standard TKL Colemak layout.
 *    *-------------------------------------------------------------------------*
 *    |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PSc|SLk|Pau|
 *    |-----------------------------------------------------------|-------------|
 *    | ~ | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Backsp | |Ins|Hom|PgU|
 *    |-----------------------------------------------------------|-------------|
 *    | Tab | Q | W | F | P | G | J | L | U | Y | ; | [ | ] |  \  | |Del|End|PgD|
 *    |-----------------------------------------------------------|-------------|
 *    | Caps | A | R | S | T | D | H | N | E | I | O | ' | Return |             |
 *    |-----------------------------------------------------------|-------------|
 *    | Shift  | Z | X | C | V | B | K | M | , | . | / |  Shift   |     | Up|   |
 *    |-----------------------------------------------------------|-------------|
 *    |Ctrl|LGUI|LAlt|          Space         |RGUI| Fn |RAlt|Ctrl| |Lft|Dwn|Rgt|
 *    *-------------------------------------------------------------------------*
 */
#define LAYOUT_TKL_COLMAK_R1 KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL
#define LAYOUT_TKL_COLMAK_R2 KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC
#define LAYOUT_TKL_COLMAK_R3 KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT
#define LAYOUT_TKL_COLMAK_R4 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH
