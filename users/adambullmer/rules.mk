# Include custom code
SRC += adambullmer.c

# Compatible only with the Massdrop feature/riot_xap branch
# lib/led_framework files copied from users/default_md/lib/led_framework
ifeq ($(strip $(MD_RIOT_RGBLIGHT_ENABLE)), yes)
	RGB_MATRIX_CUSTOM_USER = yes
	SRC += lib/led_framework/md_rgb_matrix.c lib/led_framework/md_rgb_matrix_programs.c
endif
