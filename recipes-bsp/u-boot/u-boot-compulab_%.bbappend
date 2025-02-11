require recipes-bsp/u-boot/u-boot-compulab-mender-common.inc
require recipes-bsp/u-boot/u-boot-mender.inc

MENDER_UBOOT_AUTO_CONFIGURE:iotdin-imx8p = "0"

DEPENDS:append = " bc-native "
B = "${WORKDIR}/build"
do_configure[cleandirs] = "${B}"
