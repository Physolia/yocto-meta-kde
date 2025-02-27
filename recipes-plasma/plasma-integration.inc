# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Integration"
HOMEPAGE = ""
LICENSE = "LGPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.0-only.txt;md5=da48810c4ddf8e49efa031294a26b98c"
PR = "r0"

DEPENDS = " \
    qtx11extras \
    qtquickcontrols2 \
    qtwayland-native \
    kconfig \
    kconfigwidgets \
    kiconthemes \
    kio \
    knotifications \
    kwayland \
    kwidgetsaddons \
    kwindowsystem \
    breeze \
    libxcursor \
"

inherit cmake_plasma

RDEPENDS:${PN} += " \
    perl \
    qtquickcontrols \
"
