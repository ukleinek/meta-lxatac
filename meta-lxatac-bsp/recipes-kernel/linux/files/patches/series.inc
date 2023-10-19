# umpf-base: v6.5
# umpf-name: 6.5/customers/lxa/lxatac
# umpf-version: 6.5/customers/lxa/lxatac/20231019-1
# umpf-topic: v6.5/customers/lxa/lxatac
# umpf-hashinfo: 00cc91ff4ae50fe60f09e43b8760ca71d93f03f5
# umpf-topic-range: 2dde18cd1d8fac735875f2e4987f11817cc0bc2c..b87c8b6a72317760fdf1c466e6bfb65b0d0ad524
SRC_URI += "\
  file://patches/0001-dt-bindings-can-m_can-change-from-additional-to-unev.patch \
  file://patches/0002-dt-bindings-net-dsa-microchip-add-interrupts-propert.patch \
  file://patches/0003-ARM-dts-stm32-Add-pinmux-groups-for-Linux-Automation.patch \
  file://patches/0004-dt-bindings-arm-stm32-Add-compatible-string-for-Linu.patch \
  file://patches/0005-ARM-dts-stm32-lxa-tac-add-Linux-Automation-GmbH-TAC.patch \
  file://patches/0006-ARM-dts-stm32-lxa-tac-adjust-USB-gadget-fifo-sizes-f.patch \
  file://patches/0007-net-dsa-microchip-HACK-in-drive-strength-settings-to.patch \
  file://patches/0008-ARM-dts-stm32-lxa-tac-drive-powerboard-lines-as-open.patch \
  "
# umpf-topic: v6.5/topic/pwm-stm32
# umpf-hashinfo: 07fe27cf29637b1f01c05597d2cf26622623647b
# umpf-topic-range: b87c8b6a72317760fdf1c466e6bfb65b0d0ad524..39153b14b6f4d61eb10d4e3e147dad8da8f0db40
SRC_URI += "\
  file://patches/0101-pwm-stm32-Replace-write_ccrx-with-regmap_write.patch \
  file://patches/0102-pwm-stm32-Make-ch-parameter-unsigned.patch \
  file://patches/0103-pwm-stm32-Use-hweight32-in-stm32_pwm_detect_channels.patch \
  file://patches/0104-pwm-stm32-Implement-.get_state.patch \
  file://patches/0105-pwm-stm32-Fix-enable-count-for-clk-in-.probe.patch \
  "
# umpf-topic: v6.5/topic/pwm-backlight
# umpf-hashinfo: b2fbd4752f683d1c231d85417d61e1fa9671d6f2
# umpf-topic-range: 39153b14b6f4d61eb10d4e3e147dad8da8f0db40..3b7246f393877933b62134a0b150aeeb4e15f39a
SRC_URI += "\
  file://patches/0201-backlight-pwm_bl-Avoid-backlight-flicker-applying-in.patch \
  "
# umpf-topic: v6.5/topic/lmp92064
# umpf-hashinfo: 587ee9faac20ce4e140d0d0e4103f4902167eb39
# umpf-topic-range: 3b7246f393877933b62134a0b150aeeb4e15f39a..5d268842a571262a1a19b5218f7415b608d46fba
SRC_URI += "\
  file://patches/0301-iio-adc-add-buffering-support-to-the-TI-LMP92064-ADC.patch \
  "
# umpf-topic: v6.5/topic/tty-trigger
# umpf-hashinfo: d3c10f9f59bcbe48740453bc85949e3315668db7
# umpf-topic-range: 5d268842a571262a1a19b5218f7415b608d46fba..1e0dab9f902dd54f8f54d450bc86e65e904ebc17
SRC_URI += "\
  file://patches/0401-leds-trigger-tty-Do-not-use-LED_ON-OFF-constants-use.patch \
  file://patches/0402-tty-whitespaces-in-descriptions-corrected-by-replaci.patch \
  file://patches/0403-tty-add-new-helper-function-tty_get_tiocm.patch \
  file://patches/0404-leds-ledtrig-tty-add-new-line-mode-evaluation.patch \
  "
# umpf-release: 6.5/customers/lxa/lxatac/20231019-1
# umpf-topic-range: 1e0dab9f902dd54f8f54d450bc86e65e904ebc17..3f3187acaad5241a48aca79cb6c648664ecde54e
SRC_URI += "\
  file://patches/0501-Release-6.5-customers-lxa-lxatac-20231019-1.patch \
  "
# umpf-end
