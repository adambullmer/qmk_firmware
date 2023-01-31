#pragma once

#include QMK_KEYBOARD_H
#include "layout_macros.h"

// Use to define friendly layer number names
enum ctrl_layers {
    // Key Layouts
    _QW = 0,     // Qwerty Layout: The main keyboard layout that has all the characters
    _DV,         // Dvorak Layout: Because Experimentation is Good
    _CM,         // Colemak Layout: Because Pain is Good

    // Modifier Layouts. Default is Windows
    _ML,         // Mac Layout: Customize Function Row and Modifier Row
    _UL,         // Ubunutu Layout: Customize Function Row and Modifier Row

    // LED Display Layouts -- Custom Coloring, no custom key codes
    _D1,         // Display Layer 1: Gaming
    _D2,         // Display Layer 2:
    _D3,         // Display Layer 3
    _D4,         // Display Layer 4
    _D5,         // Display Layer 5: Default Pattern Rotation

    // Shortcut Layouts
    _GL,         // Git Shortcut Layout: Git CLI
    _VL,         // Vim Shortcut Layout: VIM
    _L3,         // ___ Shortcut Layout
    _L4,         // ___ Shortcut Layout

    // Function / Meta Layouts
    _FN,         // Function Layout: The function key activated layout with default functions and some added ones
    _DB,         // Debug Layout: Debugging Layout, or emergency Top Layer
    /****************************************
     *           No More Layers!!           *
     ****************************************/
};

// Basic keycodes to be sure to include, like debug and bootloader
enum basic_keycodes {
    BEGIN = SAFE_RANGE, // Burn an enum member for allowing iteration
    MD_BOOT,            // Restart into bootloader after hold timeout
    DBG_TOG,            // DEBUG Toggle On / Off
    DBG_MTRX,           // DEBUG Toggle Matrix Prints
    DBG_KBD,            // DEBUG Toggle Keyboard Prints
    DBG_MOU,            // DEBUG Toggle Mouse Prints
    DBG_FAC,            // DEBUG Factory light testing (All on white)
    END,                // Empty enum member, can be repeated
};

// MassDrop Keyboard custom keycodes
enum md_keycodes {
    MD_BEGIN = END,     // Burn an enum member for allowing iteration
    L_BRI,              // LED Brightness Increase
    L_BRD,              // LED Brightness Decrease
    L_EDG_I,            // LED Edge Brightness Increase
    L_EDG_D,            // LED Edge Brightness Decrease
    L_EDG_M,            // LED Edge lighting mode
    L_PTN,              // LED Pattern Select Next
    L_PTP,              // LED Pattern Select Previous
    L_PSI,              // LED Pattern Speed Increase
    L_PSD,              // LED Pattern Speed Decrease
    L_RATIOD,
    L_RATIOI,
    L_T_MD,             // LED Toggle Mode
    L_T_ONF,            // LED Toggle On / Off
    L_ON,               // LED On
    L_OFF,              // LED Off
    L_T_BR,             // LED Toggle Breath Effect
    L_T_PTD,            // LED Toggle Scrolling Pattern Direction and effect
    U_T_AUTO,           // USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,           // USB Toggle Automatic GCR control
    MD_END,             // Empty enum member, can be repeated
};

// adambullmer custom keycodes
enum ab_keycodes {
    AB_BEGIN = MD_END,  // Burn an enum member for allowing iteration
    AB_T_WL,            // Focus Windows Layout and all other layouts off
    AB_T_ML,            // Focus Mac Layout and all other layouts off
    AB_T_UL,            // Focus Ubuntu Layout and all other layouts off
    AB_T_D0,            // Unfocus All Display Layers
    AB_T_D1,            // Focus Display layer 1 and all other displays off
    AB_T_D2,            // Focus Display layer 2 and all other displays off
    AB_T_D3,            // Focus Display layer 3 and all other displays off
    AB_T_D4,            // Focus Display layer 4 and all other displays off
    AB_T_D5,            // Focus Display layer 5 and all other displays off
    AB_S_DU,            // Shift Display Layer Up
    AB_S_DD,            // Shift Display Layer Down
    AB_T_GL,            // Toggle Focus Git Shortcut Layer and all other shortcuts off
    AB_T_VL,            // Toggle Focus Vim Shortcut Layer and all other shortcuts off
    AB_T_L3,            // Toggle Focus __ Shortcut Layer and all other shortcuts off
    AB_T_L4,            // Toggle Focus __ Shortcut Layer and all other shortcuts off
    AB_S_LU,            // Shift Shortcut Layer Up
    AB_S_LD,            // Shift Shortcut Layer Down
    AB_END,             // Empty enum member, can be repeated
};

// GIT custom keycodes
enum git_macro_keycodes {
    G_BEGIN = AB_END,   // Burn an enum member for allowing iteration
    G_INIT,             // git init
    G_CLONE,            // git clone + paste
    G_CONF,             // git config --global
    G_ADD,              // git add -p
    G_DIFF,             // git diff
    G_RESET,            // git reset
    G_REBAS,            // git rebase
    G_BRANH,            // git branch
    G_CHECK,            // git checkout
    G_MERGE,            // git merge
    G_REMTE,            // git remote add
    G_FETCH,            // git fetch
    G_PULL,             // git pull
    G_PUSH,             // git push
    G_COMM,             // git commit
    G_STAT,             // git status
    G_LOG,              // git log
    G_TREE,             // git tree
    G_NBRAN,            // git checkout -b
    G_FIXUP,            // git fixup
    G_END,
};

enum vim_macro_keycodes {
    V_BEGIN = G_END,
    V_LEADR,
    V_END,
};

// Terminate commands that have no need for more inputs with `\n` to automatically submit
#define git_macro_keycodes_length G_END - G_BEGIN - 1
const char * sendstring_commands[git_macro_keycodes_length];

#define RED        .r = 255, .g = 0,   .b = 0   // #ff0000
#define ORANGE     .r = 255, .g = 103, .b = 0   // #ff6700
#define YELLOW     .r = 255, .g = 255, .b = 0   // #ffff00
#define GREEN      .r = 71,  .g = 225, .b = 12  // #47e10c
#define TEAL       .r = 0,   .g = 221, .b = 255 // #00ddff
#define BLUE       .r = 0,   .g = 0,   .b = 255 // #0000ff
#define PURPLE     .r = 119, .g = 0,   .b = 153 // #770099
#define WHITE      .r = 255, .g = 255, .b = 255 // #ffffff
#define LIGHT_GREY .r = 230, .g = 228, .b = 215 // #cccabe
#define DARK_GREY  .r = 128, .g = 128, .b = 128 // #666666

#define MONOKAI_MAGENTA    .r = 248, .g = 37,  .b = 112 // #f82570
#define MONOKAI_ORANGE     .r = 252, .g = 150, .b = 31  // #fc961f
#define MONOKAI_YELLOW     .r = 228, .g = 219, .b = 115 // #e4db73
#define MONOKAI_GREEN      .r = 166, .g = 225, .b = 45  // #a6e12d
#define MONOKAI_CYAN       .r = 102, .g = 217, .b = 238 // #66d9ee
#define MONOKAI_PURPLE     .r = 174, .g = 129, .b = 255 // #ae81ff
#define MONOKAI_WHITE      .r = 253, .g = 255, .b = 241 // #fdfff1
#define MONOKAI_LIGHT_GREY .r = 145, .g = 146, .b = 136 // #919288
#define MONOKAI_DARK_GREY  .r = 59,  .g = 60,  .b = 53  // #3b3c35

#define MONOKAI_S_MAGENTA    .r = 255, .g = 0,   .b = 89  // #ff0059 HSV s+15% v+3%
#define MONOKAI_S_ORANGE     .r = 252, .g = 143, .b = 0   // #fc8600 HSV s+12%
#define MONOKAI_S_YELLOW     .r = 227, .g = 208, .b = 0   // #e3d000 HSV s+50%
#define MONOKAI_S_GREEN      .r = 150, .g = 224, .b = 0   // #96e000 HSV s+20%
#define MONOKAI_S_CYAN       .r = 0  , .g = 201, .b = 237 // #00c9ed HSV s+43%
#define MONOKAI_S_PURPLE     .r = 89,  .g = 0,   .b = 255 // #5900ff HSV s+51%
#define MONOKAI_S_WHITE      .r = 253, .g = 255, .b = 241 // #ffffff HSV s-5%
#define MONOKAI_S_LIGHT_GREY .r = 145, .g = 145, .b = 145 // #919191 HSV s-7%
#define MONOKAI_S_DARK_GREY  .r = 61,  .g = 61,  .b = 61  // #3d3d3d HSV s-12%

// DROP Keyboard Keycap Themes
#define DWARVISH_LIGHT_GREY     .r = 229, .g = 227, .b = 211 // #e5e3d3
#define DWARVISH_DARK_GREY      .r = 165, .g = 160, .b = 150 // #a5a096
#define DWARVISH_DURIN          .r = 230, .g = 145, .b = 68  // #e69244
#define DWARVISH_S_DURIN        .r = 245, .g = 53,  .b = 0   // #f53500 EVANSTAR HSV S+52%

#define ELVISH_LIGHT_GREY       .r = 244, .g = 236, .b = 216 // #f4ecd8
#define ELVISH_DARK_GREY        .r = 164, .g = 200, .b = 131 // #a4c883
#define ELVISH_S_DARK_GREY      .r = 96,  .g = 199, .b = 0   // #60c700 HSV S+65%
#define ELVISH_AUTUMN           .r = 250, .g = 186, .b = 123 // #faba7b
#define ELVISH_S_AUTUMN         .r = 250, .g = 125, .b = 0   // #fa7d00 HSV S+39%
#define ELVISH_EVANSTAR         .r = 246, .g = 152, .b = 127 // #f6997f
#define ELVISH_S_EVANSTAR       .r = 201, .g = 13,  .b = 10  // #c90d0a MAGMA HSV S+52%

#define BLACK_SPEECH_LIGHT_GREY .r = 130, .g = 130, .b = 130 // #828282
#define BLACK_SPEECH_DARK_GREY  .r = 74 , .g = 76,  .b = 87  // #4a4c57
#define BLACK_SPEECH_MAGMA      .r = 202, .g = 46,  .b = 43  // #ca2e2b
#define BLACK_SPEECH_S_MAGMA    .r = 201, .g = 3,   .b = 0   // #c90300 HSV S+21%
