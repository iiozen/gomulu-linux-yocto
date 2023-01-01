DESCRIPTION = "A command-line system information tool written in bash 3.2+"
HOMEPAGE = "https://github.com/dylanaraps/neofetch"
SECTION = "tools"
SRC_URI = "https://github.com/dylanaraps/${BPN}/archive/refs/tags/${PV}.tar.gz"

DEPENDS = "bash (>= 3.2)"

do_install() {
	install -d ${D}${bindir}
	install -m 0755 neofetch ${D}${bindir}
}




