#include QMK_KEYBOARD_H

// Use to define friendly layer number names
enum ctrl_layers {
    // Key Layouts
    _QW = 0,     // Qwerty Layout: The main keyboard layout that has all the characters
    _DV,         // Dvorak Layout: Because Experimentation is Good
    _CM,         // Colemak Layout: Because Pain is Good

    // Modifier Layouts. Default is Windows
    _ML,         // Mac Layout: Mouse Keys and mouse movement
    _UL,         // Ubunutu Layout: Shortcuts for Ubuntu Desktop

    // Shortcut Layouts
    _GL,         // Git Layout: Shortcuts for Git CLI
    _VL,         // Vim Layout: Shortcuts for VIM
    // _L7,      // Layout
    // _L8,      // Layout
    // _L9,      // Layout

    // LED Display Layouts -- Custom Coloring
    _D1,         // Display Layer 1: Dwarf Coloring
    _D2,         // Display Layer 2: Gaming
    // _D3,      // Display Layer 3
    // _D4,      // Display Layer 4

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
    MD_BOOT             // Restart into bootloader after hold timeout
};
