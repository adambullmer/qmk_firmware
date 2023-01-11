#include QMK_KEYBOARD_H
#include "adambullmer.h"

const char * sendstring_commands[git_macro_keycodes_length] = {
    "git init\n",
    "git clone ",
    "git config --global ",
    "git add -p\n",
    "git diff ",
    "git reset\n",
    "git rsq\n", // rebase -i --autosquash
    "git branch ",
    "git checkout ",
    "git merge ",
    "git remote add ",
    "git fetch ",
    "git pull ",
    "git push ",
    "git commit -m \"",
    "git status\n",
    "git log\n",
    "git tree\n",
    "git checkout -b ",
};
