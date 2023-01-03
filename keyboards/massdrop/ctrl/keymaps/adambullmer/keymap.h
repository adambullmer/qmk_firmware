#include QMK_KEYBOARD_H

// Use to define friendly layer number names
enum ctrl_layers {
	_QWERTY,
	_MAC,
	_FN
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
    U_T_AGCR,           // USB Toggle Automatic GCR control
    DBG_TOG,            // DEBUG Toggle On / Off
    DBG_MTRX,           // DEBUG Toggle Matrix Prints
    DBG_KBD,            // DEBUG Toggle Keyboard Prints
    DBG_MOU,            // DEBUG Toggle Mouse Prints
    DBG_FAC,            // DEBUG Factory light testing (All on white)
    MD_BOOT             // Restart into bootloader after hold timeout
};
