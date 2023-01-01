require toplayici.inc
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=5a4bd406d66eb40422fa36de41318328"
PV = "1.0+git${SRCPV}"
SRCREV = "${AUTOREV}"
TARGET_CC_ARCH += "${LDFLAGS}"

S = "${WORKDIR}/git"