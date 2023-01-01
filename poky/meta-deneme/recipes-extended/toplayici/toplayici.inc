DESCRIPTION = "Yocto recipe'de denemek için yazılmış deneme programı."
HOMEPAGE = "https://github.com/iiozen/bb-ornek"
SECTION = "tools"
SRC_URI = "git://github.com/iiozen/bb-ornek.git;protocol=https;branch=master"

DEPENDS = ""

do_compile() {
	oe_runmake CC="${CC}"
}

do_install() {
	install -d ${D}${bindir}
	install -m 0755 toplayici ${D}${bindir}
}




