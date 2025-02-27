# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plank Player"
HOMEPAGE = "https://invent.kde.org/plasma-bigscreen/plank-player/"
LICENSE = "GPL-2.0+"
LIC_FILES_CHKSUM = " \
    file://LICENSES/GPL-2.0-or-later.txt;md5=9e2385fe012386d34dcc5c9863070881 \
"
PR = "r0"

DEPENDS = " \
    kirigami \
    qtdeclarative \
    qtquickcontrols2 \
    qtmultimedia \
"

inherit cmake_plasma
inherit mime-xdg
