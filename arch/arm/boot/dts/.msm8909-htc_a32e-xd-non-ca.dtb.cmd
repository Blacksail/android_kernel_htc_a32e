cmd_arch/arm/boot/dts/qcom/../msm8909-htc_a32e-xd-non-ca.dtb := /home/anas/android/device/a32e/scripts/gcc-wrapper.py /home/anas/android/Toolchains/prebuilts/arm-eabi-4.8/bin/arm-eabi-gcc -E -Wp,-MD,arch/arm/boot/dts/qcom/../.msm8909-htc_a32e-xd-non-ca.dtb.d.pre.tmp -nostdinc -I/home/anas/android/device/a32e/arch/arm/boot/dts -I/home/anas/android/device/a32e/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/qcom/../.msm8909-htc_a32e-xd-non-ca.dtb.dts.tmp arch/arm/boot/dts/qcom/msm8909-htc_a32e-xd-non-ca.dts ; /home/anas/android/device/a32e/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/qcom/../msm8909-htc_a32e-xd-non-ca.dtb -b 0 -i arch/arm/boot/dts/qcom/  -d arch/arm/boot/dts/qcom/../.msm8909-htc_a32e-xd-non-ca.dtb.d.dtc.tmp arch/arm/boot/dts/qcom/../.msm8909-htc_a32e-xd-non-ca.dtb.dts.tmp ; cat arch/arm/boot/dts/qcom/../.msm8909-htc_a32e-xd-non-ca.dtb.d.pre.tmp arch/arm/boot/dts/qcom/../.msm8909-htc_a32e-xd-non-ca.dtb.d.dtc.tmp > arch/arm/boot/dts/qcom/../.msm8909-htc_a32e-xd-non-ca.dtb.d

source_arch/arm/boot/dts/qcom/../msm8909-htc_a32e-xd-non-ca.dtb := arch/arm/boot/dts/qcom/msm8909-htc_a32e-xd-non-ca.dts

deps_arch/arm/boot/dts/qcom/../msm8909-htc_a32e-xd-non-ca.dtb := \
  arch/arm/boot/dts/qcom/msm8909-htc_a32e-xd-non-ca.dtsi \
  arch/arm/boot/dts/qcom/msm8909.dtsi \
  arch/arm/boot/dts/qcom/skeleton64.dtsi \
  /home/anas/android/device/a32e/arch/arm/boot/dts/include/dt-bindings/clock/msm-clocks-8909.h \
  /home/anas/android/device/a32e/arch/arm/boot/dts/include/dt-bindings/clock/msm-clocks-a7.h \
  arch/arm/boot/dts/qcom/msm8909-ion.dtsi \
  arch/arm/boot/dts/qcom/msm8909-smp2p.dtsi \
  arch/arm/boot/dts/qcom/msm8909-camera.dtsi \
  arch/arm/boot/dts/qcom/msm8909-ipcrouter.dtsi \
  arch/arm/boot/dts/qcom/msm-gdsc-8916.dtsi \
  arch/arm/boot/dts/qcom/msm8909-iommu.dtsi \
  arch/arm/boot/dts/qcom/msm-iommu-v2.dtsi \
  arch/arm/boot/dts/qcom/msm8909-iommu-domains.dtsi \
  arch/arm/boot/dts/qcom/msm8909-gpu.dtsi \
  arch/arm/boot/dts/qcom/msm8909-coresight.dtsi \
  arch/arm/boot/dts/qcom/msm8909-bus.dtsi \
  /home/anas/android/device/a32e/arch/arm/boot/dts/include/dt-bindings/msm/msm-bus-ids.h \
    $(wildcard include/config/noc.h) \
  /home/anas/android/device/a32e/arch/arm/boot/dts/include/dt-bindings/msm/msm-bus-rule-ops.h \
  arch/arm/boot/dts/qcom/msm8909-mdss.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-sim-video.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-sim-cmd.dtsi \
  arch/arm/boot/dts/qcom/msm8909-mdss-pll.dtsi \
  arch/arm/boot/dts/qcom/msm-pm8909-vreg-dump.dtsi \
  arch/arm/boot/dts/qcom/msm8909-htc-common.dtsi \
  arch/arm/boot/dts/qcom/msm8909-pinctrl-htc_a32e-xd-non-ca.dtsi \
  /home/anas/android/device/a32e/arch/arm/boot/dts/msm8909-ncp6924.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-a32e.dtsi \
  arch/arm/boot/dts/qcom/msm8909-touch-a32e-config.dtsi \
  arch/arm/boot/dts/qcom/batterydata-a32e-id1.dtsi \
  arch/arm/boot/dts/qcom/batterydata-a32e-id2.dtsi \
  arch/arm/boot/dts/qcom/batterydata-a32e-unknown-id.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-hx8394d-720p-video.dtsi \
  arch/arm/boot/dts/qcom/dsi-panel-hx8394d-qhd-video.dtsi \
  arch/arm/boot/dts/qcom/msm8909-pm8909.dtsi \
  arch/arm/boot/dts/qcom/msm-pm8909-rpm-regulator.dtsi \
  arch/arm/boot/dts/qcom/msm-pm8909.dtsi \
  arch/arm/boot/dts/qcom/msm8909-regulator.dtsi \
  arch/arm/boot/dts/qcom/msm8909-pm8909-pm.dtsi \
  arch/arm/boot/dts/qcom/msm8909-pm8909-htc_a32e.dtsi \
  arch/arm/boot/dts/qcom/msm8909-camera-sensor-A32e-xd-non-ca.dtsi \

arch/arm/boot/dts/qcom/../msm8909-htc_a32e-xd-non-ca.dtb: $(deps_arch/arm/boot/dts/qcom/../msm8909-htc_a32e-xd-non-ca.dtb)

$(deps_arch/arm/boot/dts/qcom/../msm8909-htc_a32e-xd-non-ca.dtb):
