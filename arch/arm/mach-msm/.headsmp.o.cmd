cmd_arch/arm/mach-msm/headsmp.o := /home/anas/android/device/a32e/scripts/gcc-wrapper.py /home/anas/android/Toolchains/prebuilts/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.headsmp.o.d  -nostdinc -isystem /home/anas/android/Toolchains/prebuilts/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/home/anas/android/device/a32e/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/home/anas/android/device/a32e/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/anas/android/device/a32e/include/uapi -Iinclude/generated/uapi -include /home/anas/android/device/a32e/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2         -c -o arch/arm/mach-msm/headsmp.o arch/arm/mach-msm/headsmp.S

source_arch/arm/mach-msm/headsmp.o := arch/arm/mach-msm/headsmp.S

deps_arch/arm/mach-msm/headsmp.o := \
    $(wildcard include/config/htc/debug/footprint.h) \
  /home/anas/android/device/a32e/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/anas/android/device/a32e/arch/arm/include/asm/linkage.h \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /home/anas/android/device/a32e/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/htc_debug/mnemosyne/htc_footprint.h \
  include/htc_debug/mnemosyne/htc_mnemosyne.h \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/anas/android/device/a32e/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/anas/android/device/a32e/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/anas/android/device/a32e/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/anas/android/device/a32e/arch/arm/include/asm/hwcap.h \
  /home/anas/android/device/a32e/arch/arm/include/uapi/asm/hwcap.h \
  /home/anas/android/device/a32e/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
  /home/anas/android/device/a32e/arch/arm/include/asm/opcodes-virt.h \
  /home/anas/android/device/a32e/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  include/htc_debug/mnemosyne/htc_mnemosyne_footprint.inc \

arch/arm/mach-msm/headsmp.o: $(deps_arch/arm/mach-msm/headsmp.o)

$(deps_arch/arm/mach-msm/headsmp.o):
