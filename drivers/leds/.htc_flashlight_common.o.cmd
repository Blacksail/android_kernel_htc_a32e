cmd_drivers/leds/htc_flashlight_common.o := /home/anas/android/device/a32e/scripts/gcc-wrapper.py /home/anas/android/Toolchains/prebuilts/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,drivers/leds/.htc_flashlight_common.o.d  -nostdinc -isystem /home/anas/android/Toolchains/prebuilts/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/home/anas/android/device/a32e/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/anas/android/device/a32e/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/anas/android/device/a32e/include/uapi -Iinclude/generated/uapi -include /home/anas/android/device/a32e/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=2048 -fstack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(htc_flashlight_common)"  -D"KBUILD_MODNAME=KBUILD_STR(htc_flashlight_common)" -c -o drivers/leds/.tmp_htc_flashlight_common.o drivers/leds/htc_flashlight_common.c

source_drivers/leds/htc_flashlight_common.o := drivers/leds/htc_flashlight_common.c

deps_drivers/leds/htc_flashlight_common.o := \

drivers/leds/htc_flashlight_common.o: $(deps_drivers/leds/htc_flashlight_common.o)

$(deps_drivers/leds/htc_flashlight_common.o):
