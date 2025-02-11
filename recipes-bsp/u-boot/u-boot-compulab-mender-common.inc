FILESEXTRAPATHS:prepend := "${THISDIR}/patches:"

SRC_URI:remove:mender-uboot = " file://0002-Integration-of-Mender-boot-code-into-U-Boot.patch"

SRC_URI:append:iotdin-imx8p = " \
    file://0001-Integration-of-Mender-boot-code-into-U-Boot.patch \
    file://0001-conf-for-iotdin-imx8p-board-for-Mender-support.patch \
    file://0001-uboot-cmds-modifications-to-use-Mender-variables.patch \
"

MENDER_UBOOT_CONFIG_SYS_MMC_ENV_PART:iotdin-imx8p = "0"
BOOTENV_SIZE:iotdin-imx8p = "0x4000"

MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET:iotdin-imx8p = "0x3F0000"
MENDER_UBOOT_ENV_STORAGE_DEVICE_OFFSET_2:iotdin-imx8p = "0x3F4000"
#MENDER_BOOTENV_TOTAL_ALIGNED_SIZE:iotdin-imx8p = "524288"
