# umpf-base: v2023.03.0
# umpf-name: 2023.03.0/customers/lxa/tac
# umpf-version: 2023.03.0/customers/lxa/tac/20231026-1
# umpf-topic: v2023.03.0/topic/tlv
# umpf-hashinfo: c92c752b6c0a5a4dae5dfe10e11a9aac456c6f49
# umpf-topic-range: e068bbf6a3608351484567af19da68e0e382fa0f..38b8fee43cee4153ec2f487e7addcaeff576b827
SRC_URI += "\
  file://patches/0001-scripts-implement-slurp-a-read_file-with-fd-as-argum.patch \
  file://patches/0002-of_path-support-phandles-in-of_find_path.patch \
  file://patches/0003-net-add-ethaddr-sequence-handling.patch \
  file://patches/0004-common-add-optional-systemd.hostname-generation.patch \
  file://patches/0005-net-factor-out-eth_of_get_fixup_node.patch \
  file://patches/0006-net-export-list-of-registered-ethernet-addresses.patch \
  file://patches/0007-net-implement-ethaddr_string_cmp.patch \
  file://patches/0008-common-add-barebox-TLV-support.patch \
  file://patches/0009-commands-add-TLV-debugging-command.patch \
  file://patches/0010-scripts-add-bareboxtlv-host-target-tool.patch \
  "
# umpf-topic: v2023.03.0/topic/panel-mipi-dbi-spi
# umpf-hashinfo: e8c0eb795c2f898664f6abc7b9a80bdab83d341e
# umpf-topic-range: 38b8fee43cee4153ec2f487e7addcaeff576b827..137ff9adc1e6846bf7d1c48c0dcd1b0acece283c
SRC_URI += "\
  file://patches/0101-firmware-Add-request-release_firmware-calls.patch \
  file://patches/0102-video-Add-of_get_display_timing.patch \
  file://patches/0103-video-add-MIPI-DBI-framebuffer-helpers.patch \
  file://patches/0104-video-Add-MIPI-DBI-compatible-SPI-driver.patch \
  file://patches/0105-spi-add-per-driver-bits-per-word-mask.patch \
  file://patches/0106-spi-stm32-support-per-transfer-bits-per-word-switchi.patch \
  file://patches/0107-video-mipi_dbi-disable-byte-swapping-if-16-bit-SPI-t.patch \
  file://patches/0108-spi-update-spi_board_info-FIXME-comment.patch \
  file://patches/0109-video-fb-add-optional-damage-tracking.patch \
  file://patches/0110-graphic_utils-add-optional-damage-tracking.patch \
  file://patches/0111-video-mipi_dbi-add-damage-tracking-and-partial-updat.patch \
  file://patches/0112-video-fbconsole-implement-non-fullscreen-fbconsole.patch \
  "
# umpf-topic: v2023.03.0/customers/lxa/tac
# umpf-hashinfo: e3322355e0322b467b53db440eab6a8aad08ae4e
# umpf-topic-range: 137ff9adc1e6846bf7d1c48c0dcd1b0acece283c..7d0510628dc409f8bff33bb8e59111d140456743
SRC_URI += "\
  file://patches/0201-ARM-stm32mp-add-Linux-Automation-TAC-board.patch \
  file://patches/0202-boards-add-decoder-for-LXA-TLV-v1-format.patch \
  file://patches/0203-ARM-lxatac-register-TLV-decoder-and-print-out-serial.patch \
  "
# umpf-release: 2023.03.0/customers/lxa/tac/20231026-1
# umpf-topic-range: 7d0510628dc409f8bff33bb8e59111d140456743..53e2a02ac31d787ca2e42deb42695f4a4313e3c3
SRC_URI += "\
  file://patches/0301-Release-2023.03.0-customers-lxa-tac-20231026-1.patch \
  "
# umpf-end
