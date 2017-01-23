cmd_arch/arm/boot/compressed/piggy.gzip.o := /home/anas/android/device/a32e/scripts/gcc-wrapper.py /home/anas/android/Toolchains/prebuilts/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/boot/compressed/.piggy.gzip.o.d  -nostdinc -isystem /home/anas/android/Toolchains/prebuilts/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/home/anas/android/device/a32e/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/anas/android/device/a32e/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/anas/android/device/a32e/include/uapi -Iinclude/generated/uapi -include /home/anas/android/device/a32e/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2     -DZIMAGE     -c -o arch/arm/boot/compressed/piggy.gzip.o arch/arm/boot/compressed/piggy.gzip.S

source_arch/arm/boot/compressed/piggy.gzip.o := arch/arm/boot/compressed/piggy.gzip.S

deps_arch/arm/boot/compressed/piggy.gzip.o := \
  /home/anas/android/device/a32e/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/boot/compressed/piggy.gzip.o: $(deps_arch/arm/boot/compressed/piggy.gzip.o)

$(deps_arch/arm/boot/compressed/piggy.gzip.o):
