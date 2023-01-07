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

    // Shortcut Layouts
    _GL,         // Git Shortcut Layout: Git CLI
    _VL,         // Vim Shortcut Layout: VIM
    _L7,         // ___ Shortcut Layout
    _L8,         // ___ Shortcut Layout

    // LED Display Layouts -- Custom Coloring
    _D1,         // Display Layer 1: Dwarvish/Durin Coloring
    _D2,         // Display Layer 2: Gaming
    _D3,         // Display Layer 3
    _D4,         // Display Layer 4
    _D5,         // Display Layer 5

    // Function / Meta Layouts
    _FN,         // Function Layout: The function key activated layout with default functions and some added ones
    _DB,         // Debug Layout: Debugging Layout, or emergency Top Layer
    /****************************************
     *           No More Layers!!           *
     ****************************************/
};

enum ctrl_keycodes {
    L_BRI = SAFE_RANGE, // LED Brightness Increase
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
    DBG_TOG,            // DEBUG Toggle On / Off
    DBG_MTRX,           // DEBUG Toggle Matrix Prints
    DBG_KBD,            // DEBUG Toggle Keyboard Prints
    DBG_MOU,            // DEBUG Toggle Mouse Prints
    DBG_FAC,            // DEBUG Factory light testing (All on white)
    MD_BOOT,            // Restart into bootloader after hold timeout
    // adambullmer custom keycodes
    AB_T_WL,            // Focus Windows Layout and all other layouts off
    AB_T_ML,            // Focus Mac Layout and all other layouts off
    AB_T_UL,            // Focus Ubuntu Layout and all other layouts off
    AB_T_GL,            // Toggle Focus Git Shortcut Layer and all other shortcuts off
    AB_T_VL,            // Toggle Focus Vim Shortcut Layer and all other shortcuts off
    AB_T_L7,            // Toggle Focus __ Shortcut Layer and all other shortcuts off
    AB_T_L8,            // Toggle Focus __ Shortcut Layer and all other shortcuts off
    AB_S_LU,            // Shift Shortcut Layer Up
    AB_S_LD,            // Shift Shortcut Layer Down
    AB_T_D0,            // Unfocus All Display Layers
    AB_T_D1,            // Focus Display layer 1 and all other displays off
    AB_T_D2,            // Focus Display layer 2 and all other displays off
    AB_T_D3,            // Focus Display layer 3 and all other displays off
    AB_T_D4,            // Focus Display layer 4 and all other displays off
    AB_T_D5,            // Focus Display layer 5 and all other displays off
    AB_S_DU,            // Shift Display Layer Up
    AB_S_DD,            // Shift Display Layer Down
};

#define RED        .r = 255, .g = 0,   .b = 0   // #ff0000
#define ORANGE     .r = 255, .g = 103, .b = 0   // #ff6700
#define YELLOW     .r = 255, .g = 255, .b = 0   // #ffff00
#define GREEN      .r = 71,  .g = 225, .b = 12  // #47e10c
#define TEAL       .r = 0,   .g = 221, .b = 255 // #00ddff
#define BLUE       .r = 0,   .g = 0,   .b = 255 // #0000ff
#define PURPLE     .r = 119, .g = 0,   .b = 153 // #770099
#define WHITE      .r = 255, .g = 255, .b = 255 // #ffffff
#define LIGHT_GREY .r = 230, .g = 228, .b = 215 // #e6e4d7
#define DARK_GREY  .r = 128, .g = 128, .b = 128 // #666666

#define MONOKAI_MAGENTA    .r = 248, .g = 37,  .b = 112 // #f82570
#define MONOKAI_ORANGE     .r = 252, .g = 150, .b = 31  // #fc961f
#define MONOKAI_YELLOW     .r = 228, .g = 219, .b = 115 // #e4db73
#define MONOKAI_GREEN      .r = 166, .g = 225, .b = 45  // #a6e12d
#define MONOKAI_BLUE       .r = 102, .g = 217, .b = 238 // #66d9ee
#define MONOKAI_PURPLE     .r = 174, .g = 129, .b = 255 // #ae81ff
#define MONOKAI_WHITE      .r = 253, .g = 255, .b = 241 // #fdfff1
#define MONOKAI_LIGHT_GREY .r = 145, .g = 146, .b = 136 // #919288
#define MONOKAI_DARK_GREY  .r = 59,  .g = 60,  .b = 53  // #3b3c35


