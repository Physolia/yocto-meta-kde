# SPDX-FileCopyrightText: 2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Kirigami-based RSS reader"
HOMEPAGE = "https://invent.kde.org/plasma-mobile/alligator"
LICENSE = "GPL-3.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-3.0-only.txt;md5=1c76c4cc354acaac30ed4d5eefea7245"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    syndication \
    kirigami \
    kirigami-addons \
    ki18n \
    plasma-framework \
"

inherit cmake_kdeapp
inherit kconfig
inherit kcoreaddons
