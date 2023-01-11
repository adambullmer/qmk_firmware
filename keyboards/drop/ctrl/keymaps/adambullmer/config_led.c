#include "lib/led_framework/md_rgb_matrix.h"
#include "adambullmer.h"

// CTRL Specific Configs
// Base lighting. Layer overrides on top, for example, Accent, FN
// light_grey = [2,3,4,5,10,11,12,13,18,19,20,21,22,23,24,25,26,27,28,29,35,36,37,38,39,40,41,42,43,44,45,46,52,53,54,55,56,57,58,59,60,61,62,65,66,67,68,69,70,71,72,73,74,80]
#define LED_IDS_LIGHT_GREY .id0 = 536813086, .id1 = 1073250300, .id2 = 33791
// dark_gray = [1,6,7,8,9,14,15,16,17,30,31,32,33,34,47,48,49,50,51,63,64,75,76,77,78,79,81,82,83,84,85,86,87]
#define LED_IDS_DARK_GREY .id0 = 3758219745, .id1 = 3221733379, .id2 = 8354816
// accent = [1,30,63,75,76,80,85,86,87]
#define LED_IDS_ACCENT .id0 = 536870913, .id1 = 1073741824, .id2 = 7375872 // Accented keys on the keyboard, like arrow, Enter, etc

// alphanumeric = [18,19,20,21,22,23,24,25,26,27,28,29,35,36,37,38,39,40,41,42,43,44,45,46,52,53,54,55,56,57,58,59,60,61,62,65,66,67,68,69,70,71,72,73,74]
#define LED_IDS_ALPHANUMERIC .id0 = 536739840, .id1 = 1073233916, .id2 = 1023 // Core Keys

// wasd = [36,52,53,54]
#define LED_IDS_WASD .id1 = 3670024
// arrow = [76,85,86,87]
#define LED_IDS_ARROW .id2 = 7342080

// function = range(2,17)
#define LED_IDS_FUNCTION .id0 = 65534 // Whole function row including above media
// function_light_grey = [2,,3,4,5,10,11,12,13]
#define LED_IDS_FUNCTION_LIGHT_GREY .id0 = 7710
// function_dark_grey = [6,7,8,9,14,15,16]
#define LED_IDS_FUNCTION_DARK_GREY .id0 = 57824

// fn_db = [82,83]
#define LED_IDS_FN_DEBUG .id2 = 393216 // FN and DEBUG Keys
// fn = [82]
#define LED_ID_FN .id2 = 131072 // FN Alone Key

// border = range(88,120)
#define LED_IDS_BORDER .id2 = 4286578688, .id3 = 8388607
// border_light_grey = [105,106,107,108,111,112,113,114]
#define LED_IDS_BORDER_LIGHT_GREY .id3 = 249600
// border_dark_grey = [91,92,93,98,99,100,101,102,103,109,110,115,116,117,118]
#define LED_IDS_BORDER_DARK_GREY .id2 = 469762048, .id3 = 3944574
// border_accent = [88,89,90,94,95,96,97,104,119]
#define LED_IDS_BORDER_ACCENT .id2 = 3816816640, .id3 = 4194433

// Bespoke, Highly Mutable Key Sets
// layout_selectors = range(18, 28)
#define LED_IDS_LAYOUT_SELECTORS .id0 = 134086656
// layout_shifters = range(28, 30)
#define LED_IDS_LAYOUT_SHIFTERS .id0 = 402653184
// style_selectors = range(40, 45)
#define LED_IDS_STYLE_SELECTORS .id1 = 3968
// style_shifters = range(45, 47)
#define LED_IDS_STYLE_SHIFTERS .id1 = 12288

// system_controls = [30,63]
#define LED_IDS_SYSTEM_CONTROLS .id0 = 536870912, .id1 = 1073741824
// media_controls = [31,32,33,48,49,50]
#define LED_IDS_MEDIA_CONTROLS .id0 = 3221225472, .id1 = 229377
// led_controls = [34,35,36,37,38,51,52,53,54,55,65,66,68,76,85,86,87]
#define LED_IDS_LED_CONTROLS .id1 = 8126526, .id2 = 7342091
// qmk_controls = [1,69,70,71]
#define LED_IDS_QMK_CONTROLS .id2 = 112
// debug_controls = [1,35,36,37]
#define LED_IDS_DEBUG_CONTROLS .id0 = 1, .id1 = 28

// git_keys = [36, 37, 38, 39, 42, 45, 46, 52, 53, 54, 55, 60, 66, 67, 68, 69, 70, 71, 72]
#define LED_IDS_GIT_KEYS .id1 = 142094968, .id2 = 254

// vim_leader_keys = [47, 79]
#define LED_IDS_VIM_LEADER_KEYS .id1 = 16384, .id2 = 16384
// vim_command_keys = [29, 35, 38, 40, 41, 42, 43, 44, 52, 53, 66, 67, 68, 72, 73]
#define LED_IDS_VIM_COMMAND_KEYS .id0 = 268435456, .id1 = 1576868, .id2 = 398
// vim_arrow_keys = range(57, 61)
#define LED_IDS_VIM_ARROW_KEYS .id1 = 251658240
// vim_important_keys = [1, 51, 61]
#define LED_IDS_VIM_IMPORTANT_KEYS .id0 = 1, .id1 = 268697600

// Converting Layer Indexes to Binary Flags
#define B_D1 (1<<_D1)
#define B_D2 (1<<_D2)
#define B_ML (1<<_ML)
#define B_UL (1<<_UL)

led_instruction_t led_instructions[] = {
    // All LEDs use the user's selected pattern (this is the factory default)
    //  { .flags = LED_FLAG_USE_ROTATE_PATTERN },

    // Per Layer Instructions
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _QW},
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _DV},
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _CM},

    // OS Layout Instructions
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _ML },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _UL },

    // Shortcut Layer Instructions
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _GL, LED_IDS_GIT_KEYS, ORANGE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _GL, LED_IDS_BORDER, ORANGE },

     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _VL, LED_IDS_VIM_COMMAND_KEYS, YELLOW },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _VL, LED_IDS_VIM_ARROW_KEYS, GREEN },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _VL, LED_IDS_VIM_IMPORTANT_KEYS, RED },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _VL, LED_IDS_VIM_LEADER_KEYS, TEAL },

    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_PATTERN, .layer = _L7, .pattern_id = 4 },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_PATTERN, .layer = _L8, .pattern_id = 9 },

    // Display Layer Instructions
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D1, LED_IDS_LIGHT_GREY,        LIGHT_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D1, LED_IDS_DARK_GREY,         DARK_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D1, LED_IDS_ACCENT,            ORANGE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D1, LED_IDS_BORDER_LIGHT_GREY, LIGHT_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D1, LED_IDS_BORDER_DARK_GREY,  DARK_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D1, LED_IDS_BORDER_ACCENT,     ORANGE },
    // D1 Overrides Based on lower layer matches (not working)
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_ML), LED_IDS_ACCENT,        RED },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_ML), LED_IDS_BORDER_ACCENT, RED },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_UL), LED_IDS_ACCENT,        YELLOW },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_UL), LED_IDS_BORDER_ACCENT, YELLOW },

     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D2, LED_IDS_LIGHT_GREY,        LIGHT_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D2, LED_IDS_DARK_GREY,         DARK_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D2, LED_IDS_ACCENT,            ORANGE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D2, LED_IDS_WASD,              ORANGE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D2, LED_IDS_BORDER_LIGHT_GREY, LIGHT_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D2, LED_IDS_BORDER_DARK_GREY,  DARK_GREY },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = _D2, LED_IDS_BORDER_ACCENT,     ORANGE },
    // D2 Overrides Based on lower layer matches (not working)
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_ML), LED_IDS_ACCENT,        RED },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_ML), LED_IDS_BORDER_ACCENT, RED },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D2 | B_ML), LED_IDS_WASD,          RED},
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_UL), LED_IDS_ACCENT,        YELLOW },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D1 | B_UL), LED_IDS_BORDER_ACCENT, YELLOW },
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .layer = (B_D2 | B_UL), LED_IDS_WASD,          YELLOW },

    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _D3},
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _D4},
    //  { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_USE_ROTATE_PATTERN, .layer = _D5},

    //  Function Layer
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = _FN, LED_IDS_FN_DEBUG,        .pattern_id = 0 },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = _FN, LED_IDS_STYLE_SELECTORS, .pattern_id = 0 },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_STYLE_SHIFTERS,   PURPLE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_FUNCTION,         WHITE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_LAYOUT_SELECTORS, GREEN },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_LAYOUT_SHIFTERS,  PURPLE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_LED_CONTROLS,     BLUE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_MEDIA_CONTROLS,   TEAL },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_SYSTEM_CONTROLS,  ORANGE },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _FN, LED_IDS_QMK_CONTROLS,     RED },

     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .layer = _DB, LED_IDS_FN_DEBUG,        .pattern_id = 0 },
     { .flags = LED_FLAG_MATCH_LAYER | LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB,     .layer = _DB, LED_IDS_DEBUG_CONTROLS,  RED},

    // end must be set to 1 to indicate end of instruction set
     { .end = 1 }
};
