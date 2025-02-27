# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Breeze Style"
HOMEPAGE = ""
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=93e64b4a83c7e441e48bbdeeea05c977"
PR = "r0"

DEPENDS = " \
    fftw \
    kconfigwidgets \
    kcoreaddons \
    kdecoration \
    kguiaddons \
    kirigami \
    kpackage \
    kwayland \
    kwindowsystem \
"

inherit cmake_plasma

FILES:${PN} += " \
    ${libdir}/qml/QtQuick/Controls/Styles \
    ${datadir}/kstyle/themes \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/color-schemes \
    ${datadir}/icons \
    ${datadir}/QtCurve/*.qtcurve \
    ${datadir}/wallpapers \
"

RDEPENDS:${PN} += " \
    breeze-icons \
"
