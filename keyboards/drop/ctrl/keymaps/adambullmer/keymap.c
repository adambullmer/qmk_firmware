#include QMK_KEYBOARD_H
#include "lib/led_framework/md_rgb_matrix.h"
#include "adambullmer.h"
#include "print.h"

keymap_config_t keymap_config;

// Use an expanded macro with VA_ARGS to ensure that the common
// rows get expanded out before getting passed to the LAYOUT
// macro.
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT_wrapper(
        KC_ESC,                LAYOUT_TKL_WINDOWS_FUNCTION,                          MEDIA_VOLUME,
        KC_GRV,                   LAYOUT_TKL_QWERTY_R1,                   KC_BSPC,   MEDIA_TOP,
        KC_TAB,                   LAYOUT_TKL_QWERTY_R2,                   KC_BSLS,   MEDIA_BOTTOM,
        KC_CAPS,                  LAYOUT_TKL_QWERTY_R3,                   KC_ENT,
        KC_LSFT,                  LAYOUT_TKL_QWERTY_R4,                   KC_RSFT,   ARROW_TOP,
        LAYOUT_TKL_WINDOWS_MOD_LEFT,     KC_SPC,     LAYOUT_TKL_WINDOWS_MOD_RIGHT,   ARROW_BOTTOM
    ),
    [_DV] = LAYOUT_wrapper(
        KC_ESC,                LAYOUT_TKL_WINDOWS_FUNCTION,                          MEDIA_VOLUME,
        KC_GRV,                   LAYOUT_TKL_DVORAK_R1,                   KC_BSPC,   MEDIA_TOP,
        KC_TAB,                   LAYOUT_TKL_DVORAK_R2,                   KC_BSLS,   MEDIA_BOTTOM,
        KC_CAPS,                  LAYOUT_TKL_DVORAK_R3,                   KC_ENT,
        KC_LSFT,                  LAYOUT_TKL_DVORAK_R4,                   KC_RSFT,   ARROW_TOP,
        LAYOUT_TKL_WINDOWS_MOD_LEFT,     KC_SPC,     LAYOUT_TKL_WINDOWS_MOD_RIGHT,   ARROW_BOTTOM
    ),
    [_CM] = LAYOUT_wrapper(
        KC_ESC,                LAYOUT_TKL_WINDOWS_FUNCTION,                          MEDIA_VOLUME,
        KC_GRV,                   LAYOUT_TKL_COLMAK_R1,                   KC_BSPC,   MEDIA_TOP,
        KC_TAB,                   LAYOUT_TKL_COLMAK_R2,                   KC_BSLS,   MEDIA_BOTTOM,
        KC_CAPS,                  LAYOUT_TKL_COLMAK_R3,                   KC_ENT,
        KC_LSFT,                  LAYOUT_TKL_COLMAK_R4,                   KC_RSFT,   ARROW_TOP,
        LAYOUT_TKL_WINDOWS_MOD_LEFT,     KC_SPC,     LAYOUT_TKL_WINDOWS_MOD_RIGHT,   ARROW_BOTTOM
    ),
    //////////////////////////////////////////////////
    [_ML] = LAYOUT_wrapper(
        _______,                                              LAYOUT_TKL_MAC_FUNCTION,                                                  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        LAYOUT_TKL_MAC_MOD_LEFT,                     _______,                                      LAYOUT_TKL_MAC_MOD_RIGHT,            _______, _______, _______
    ),
    [_UL] = LAYOUT_wrapper(
        _______,                                            LAYOUT_TKL_UBUNTU_FUNCTION,                                                 _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        LAYOUT_TKL_UBUNTU_MOD_LEFT,                  _______,                                   LAYOUT_TKL_UBUNTU_MOD_RIGHT,            _______, _______, _______
    ),
    //////////////////////////////////////////////////
    [_GL] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    [_VL] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    [_L7] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    [_L8] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    //////////////////////////////////////////////////
    [_D1] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    [_D2] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    [_D3] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    [_D4] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    [_D5] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    //////////////////////////////////////////////////
    [_FN] = LAYOUT_wrapper(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,             KC_PSCR, KC_SCRL, KC_PAUS,
        _______, DF(_QW), DF(_DV), DF(_CM), AB_T_WL, AB_T_ML, AB_T_UL, AB_T_GL, AB_T_VL, AB_T_L7, AB_T_L8, AB_S_LD, AB_S_LU, _______,   KC_MPLY, KC_MSTP, KC_VOLU,
        L_T_BR,  L_PSD,   L_BRI,   L_PSI,   L_EDG_I, _______, AB_T_D1, AB_T_D2, AB_T_D3, AB_T_D4, AB_T_D0, AB_S_DD, AB_S_DU, _______,   KC_MPRV, KC_MNXT, KC_VOLD,
        L_T_PTD, L_PTP,   L_BRD,   L_PTN,   L_EDG_D, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, L_T_MD,  L_T_ONF, _______, L_EDG_M, MD_BOOT, NK_TOGG, U_T_AGCR,_______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, MO(_DB), _______,            _______, _______, _______
    ),
    [_DB] = LAYOUT_wrapper(
        DBG_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, DBG_KBD, DBG_MTRX,DBG_MOU, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   DBG_FAC,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    /*
    [X] = LAYOUT_wrapper(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                              _______,
        _______, _______, _______,                   _______,                            _______, _______, _______, _______,            _______, _______, _______
    ),
    */
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

#define MODS_SHIFT (get_mods() & MOD_BIT(KC_LSFT) || get_mods() & MOD_BIT(KC_RSFT))
#define MODS_CTRL (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTL))
#define MODS_ALT (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;
    static uint8_t scroll_effect = 0;

    switch (keycode) {
        case L_BRI ... U_T_AGCR:
            if (record->event.pressed) {
                md_led_changed();
            }
            break;
    }

    switch (keycode) {
        case L_BRI:
            if (record->event.pressed) {
                // if (LED_GCR_STEP > LED_GCR_MAX - gcr_desired) gcr_desired = LED_GCR_MAX;
                // else gcr_desired += LED_GCR_STEP;
                // if (led_animation_breathing) gcr_breathe = gcr_desired;
                rgb_matrix_increase_val();
            }
            return false;
        case L_BRD:
            if (record->event.pressed) {
                // if (LED_GCR_STEP > gcr_desired) gcr_desired = 0;
                // else gcr_desired -= LED_GCR_STEP;
                // if (led_animation_breathing) gcr_breathe = gcr_desired;
                rgb_matrix_decrease_val();
            }
            return false;
        case L_EDG_M:
            if (record->event.pressed) {
                led_edge_mode++;
                if (led_edge_mode > LED_EDGE_MODE_MAX) {
                    led_edge_mode = LED_EDGE_MODE_ALL;
                }
            }
            return false;
        case L_EDG_I:
            if (record->event.pressed) {
                led_edge_brightness += 0.1;
                if (led_edge_brightness > 1) { led_edge_brightness = 1; }
            }
            return false;
        case L_EDG_D:
            if (record->event.pressed) {
                led_edge_brightness -= 0.1;
                if (led_edge_brightness < 0) { led_edge_brightness = 0; }
            }
            return false;
        case L_RATIOI:
            if (record->event.pressed) {
                led_ratio_brightness += 0.2;
                if (led_ratio_brightness > 2.0) { led_ratio_brightness = 2.0; }
            }
            return false;
        case L_RATIOD:
            if (record->event.pressed) {
                led_ratio_brightness -= 0.2;
                if (led_ratio_brightness < 0.0) { led_ratio_brightness = 0.0; }
            }
            return false;
        case L_PTN:
            if (record->event.pressed) {
                if (led_animation_id == led_setups_count - 1) led_animation_id = 0;
                else led_animation_id++;
            }
            return false;
        case L_PTP:
            if (record->event.pressed) {
                if (led_animation_id == 0) led_animation_id = led_setups_count - 1;
                else led_animation_id--;
            }
            return false;
        case L_PSI:
            if (record->event.pressed) {
                led_animation_speed += ANIMATION_SPEED_STEP;
            }
            return false;
        case L_PSD:
            if (record->event.pressed) {
                led_animation_speed -= ANIMATION_SPEED_STEP;
                if (led_animation_speed < 0) led_animation_speed = 0;
            }
            return false;
        case L_T_MD:
            if (record->event.pressed) {
                led_lighting_mode++;
                if (led_lighting_mode > LED_MODE_MAX_INDEX) led_lighting_mode = LED_MODE_NORMAL;
            }
            return false;
        case L_T_ONF:
            if (record->event.pressed) {
                led_enabled = !led_enabled;
                rgb_matrix_set_enabled(led_enabled);
            }
            return false;
        case L_ON:
            if (record->event.pressed) {
                led_enabled = 1;
                rgb_matrix_set_enabled(led_enabled);
            }
            return false;
        case L_OFF:
            if (record->event.pressed) {
                led_enabled = 0;
                rgb_matrix_set_enabled(led_enabled);
            }
            return false;
        case L_T_BR:
            if (record->event.pressed) {
                led_animation_breathing = !led_animation_breathing;
                if (led_animation_breathing) {
                    // gcr_breathe = gcr_desired;
                    led_animation_breathe_cur = BREATHE_MIN_STEP;
                    breathe_dir = 1;
                }
            }
            return false;
        case L_T_PTD:
            if (record->event.pressed) {
                scroll_effect++;
                if (scroll_effect == 1) {
                    // Patterns with scroll move horizontal (Right to left)
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                } else if (scroll_effect == 2) {
                    // Patterns with scroll move vertical (Top to bottom)
                    led_animation_direction = 1;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 3) {
                    // Patterns with scroll move vertical (Bottom to top)
                    led_animation_direction = 0;
                    led_animation_orientation = 1;
                    led_animation_circular = 0;
                } else if (scroll_effect == 4) {
                    // Patterns with scroll explode from center
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else if (scroll_effect == 5) {
                    // Patterns with scroll implode on center
                    led_animation_direction = 1;
                    led_animation_orientation = 0;
                    led_animation_circular = 1;
                } else {
                    // Patterns with scroll move horizontal (Left to right)
                    scroll_effect = 0;
                    led_animation_direction = 0;
                    led_animation_orientation = 0;
                    led_animation_circular = 0;
                }
            }
            return false;
        case U_T_AGCR:
            // if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
            //     TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            // }
            return false;
        case DBG_FAC:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                led_lighting_mode = LED_MODE_NORMAL;
                led_edge_brightness = 1;
                led_edge_mode = LED_EDGE_MODE_ALL;
                led_animation_breathing = 0;
                led_animation_id = 7; // led_programs.c led_setups leds_white index
                // gcr_desired = LED_GCR_MAX;
                led_enabled = 1;
                rgb_matrix_set_enabled(led_enabled);
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        /**
         * Layouts
         */
        case AB_T_WL:
            /**
             * Toggle on Windows Layout, and deactivate other layouts.
             * Since Windows is the default, instead of adding a new layer, this just disables the
             * other OS Layers.
             */
            if (record->event.pressed) {
                layer_off(_ML);
                layer_off(_UL);
            }
            return false;
        case AB_T_ML:
            /**
             * Toggle on Mac Layout, and deactivate other layouts.
             */
            if (record->event.pressed) {
                layer_on(_ML);
                layer_off(_UL);
            }
            return false;
        case AB_T_UL:
            /**
             * Toggle on Ubuntu Layout, and deactivate other layouts.
             */
            if (record->event.pressed) {
                layer_off(_ML);
                layer_on(_UL);
            }
            return false;
        /**
         * Shortcut Layers
         */
        case AB_T_GL:
            if (record->event.pressed) {
                layer_invert(_GL);
                layer_off(_VL);
                layer_off(_L7);
                layer_off(_L8);
            }
            return false;
        case AB_T_VL:
            if (record->event.pressed) {
                layer_off(_GL);
                layer_invert(_VL);
                layer_off(_L7);
                layer_off(_L8);
            }
            return false;
        case AB_T_L7:
            if (record->event.pressed) {
                layer_off(_GL);
                layer_off(_VL);
                layer_invert(_L7);
                layer_off(_L8);
            }
            return false;
        case AB_T_L8:
            if (record->event.pressed) {
                layer_off(_GL);
                layer_off(_VL);
                layer_off(_L7);
                layer_invert(_L8);
            }
            return false;
        case AB_S_LU:
            if (record->event.pressed) {
                int max = 1<<_L8;
                int min = 1<<_GL;
                int all_layouts = 1<<_GL | 1<<_VL | 1<<_L7 | 1<<_L8;
                int layout_state = layer_state & all_layouts;
                int next_state = layer_state & ~all_layouts;
                layout_state = (layout_state << 1);
                if (layout_state == 0) {
                    // if no displays are active, turn on the minimum
                    layout_state |= min;
                } else if (layout_state > max) {
                    // if the shifted bit is out of range, turn it off
                    layout_state = 0;
                }
                next_state |= layout_state;
                layer_state_set(next_state);
            }
            return false;
        case AB_S_LD:
            if (record->event.pressed) {
                int max = 1<<_L8;
                int min = 1<<_GL;
                int all_layouts = 1<<_GL | 1<<_VL | 1<<_L7 | 1<<_L8;
                int layout_state = layer_state & all_layouts;
                int next_state = layer_state & ~all_layouts;
                layout_state = (layout_state >> 1);
                if (layout_state == 0) {
                    // if no displays are active, turn on the maximum
                    layout_state |= max;
                } else if (layout_state < min && layout_state > 0) {
                    // if the shifted bit is out of range, turn it off
                    layout_state = 0;
                }
                next_state |= layout_state;
                layer_state_set(next_state);
            }
            return false;
        /**
         * Display Layers
         */
        case AB_T_D0:
            /**
             * Toggle off all Display Layers.
             */
            if (record->event.pressed) {
                layer_off(_D1);
                layer_off(_D2);
                layer_off(_D3);
                layer_off(_D4);
                layer_off(_D5);
            }
            return false;
        case AB_T_D1:
            if (record->event.pressed) {
                layer_invert(_D1);
                layer_off(_D2);
                layer_off(_D3);
                layer_off(_D4);
            }
            return false;
        case AB_T_D2:
            /**
             * Toggle off all Display Layers.
             */
            if (record->event.pressed) {
                layer_off(_D1);
                layer_invert(_D2);
                layer_off(_D3);
                layer_off(_D4);
                layer_off(_D5);
            }
            return false;
        case AB_T_D3:
            /**
             * Toggle off all Display Layers.
             */
            if (record->event.pressed) {
                layer_off(_D1);
                layer_off(_D2);
                layer_invert(_D3);
                layer_off(_D4);
                layer_off(_D5);
            }
            return false;
        case AB_T_D4:
            /**
             * Toggle off all Display Layers.
             */
            if (record->event.pressed) {
                layer_off(_D1);
                layer_off(_D2);
                layer_off(_D3);
                layer_invert(_D4);
                layer_off(_D5);
            }
            return false;
        case AB_T_D5:
            /**
             * Toggle off all Display Layers.
             */
            if (record->event.pressed) {
                layer_off(_D1);
                layer_off(_D2);
                layer_off(_D3);
                layer_off(_D4);
                layer_invert(_D5);
            }
            return false;
        case AB_S_DU:
            if (record->event.pressed) {
                int max = 1<<_D5;
                int min = 1<<_D1;
                int all_layouts = 1<<_D1 | 1<<_D2 | 1<<_D3 | 1<<_D4 | 1<<_D5;
                int layout_state = layer_state & all_layouts;
                int next_state = layer_state & ~all_layouts;
                layout_state = (layout_state << 1);
                if (layout_state == 0) {
                    // if no displays are active, turn on the minimum
                    layout_state |= min;
                } else if (layout_state > max) {
                    // if the shifted bit is out of range, turn it off
                    layout_state = 0;
                }
                next_state |= layout_state;
                layer_state_set(next_state);
            }
            return false;
        case AB_S_DD:
            if (record->event.pressed) {
                int max = 1<<_D5;
                int min = 1<<_D1;
                int all_layouts = 1<<_D1 | 1<<_D2 | 1<<_D3 | 1<<_D4 | 1<<_D5;
                int layout_state = layer_state & all_layouts;
                int next_state = layer_state & ~all_layouts;
                layout_state = (layout_state >> 1);
                if (layout_state == 0) {
                    // if no displays are active, turn on the maximum
                    layout_state |= max;
                } else if (layout_state < min && layout_state > 0) {
                    // if the shifted bit is out of range, turn it off
                    layout_state = 0;
                }
                next_state |= layout_state;
                layer_state_set(next_state);
            }
            return false;
        default:
            return true; // Process all other keycodes normally
    }
}
