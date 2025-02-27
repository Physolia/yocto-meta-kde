# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Plasma Workspace"
HOMEPAGE = ""
LICENSE = "GPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSES/GPL-2.0-only.txt;md5=9e2385fe012386d34dcc5c9863070881"
PR = "r0"

SRC_URI:append:visionfive2 = " \
    file://0001-Use-VisionFive2-specific-MESA-Fork.patch \
"

DEPENDS = " \
    baloo \
    breeze \
    kactivities \
    kactivitiesstats \
    kcoreaddons \
    kcrash \
    kdbusaddons \
    kdeclarative \
    kded \
    kdesu \
    kholidays \
    kidletime \
    kitemmodels \
    kjsembed \
    knewstuff \
    knotifications \
    knotifyconfig \
    kpackage \
    kpeople \
    kquickcharts \
    krunner \
    kscreen \
    kscreenlocker \
    ktexteditor \
    kunitconversion \
    kuserfeedback \
    kwallet \
    kwayland \
    kwin \
    kpipewire \
    libkscreen \
    libksysguard \
    libqalculate \
    libxft \
    networkmanager-qt \
    phonon \
    plasma-framework \
    prison \
    qtdeclarative \
    qtwayland-native \
    solid \
"

inherit cmake_plasma
inherit mime-xdg

EXTRA_OECMAKE += " -DBUILD_xembed-sni-proxy=OFF"

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${datadir}/desktop-directories/*.directory \
    ${datadir}/kcontrol \
    ${datadir}/kdisplay \
    ${datadir}/kfontinst \
    ${datadir}/kglobalaccel \
    ${datadir}/kio_desktop \
    ${datadir}/konqsidebartng \
    ${datadir}/kpackage \
    ${datadir}/krunner \
    ${datadir}/kservices5 \
    ${datadir}/ksmserver/themes \
    ${datadir}/ksplash/Themes \
    ${datadir}/kstyle/themes/*.themerc \
    ${datadir}/plasma/look-and-feel \
    ${datadir}/plasma/avatars \
    ${datadir}/plasma/nightcolor \
    ${datadir}/plasma/plasmoids \
    ${datadir}/plasma/services/*.operations \
    ${datadir}/plasma/shareprovider \
    ${datadir}/plasma/wallpapers \
    ${datadir}/sddm/themes \
    ${datadir}/solid/actions/*.desktop \
    ${datadir}/wayland-sessions/*.desktop \
    ${datadir}/xsessions/*.desktop \
    ${datadir}/kio/servicemenus \
    ${datadir}/zsh/site-functions/* \
    ${libdir}/libkrdb.so \
    ${libdir}/plugins/plasmacalendarplugins \
    ${libdir}/plugins/kf5/krunner/kcms/kcm_krunner_kill.so \
    ${libdir}/plugins/plasma/kcms/systemsettings/*.so \
    ${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/kcm_fontinst.so \
    ${libdir}/qml/org/kde \
"

FILES:${PN}-dev += " \
    ${libdir}/libcolorcorrect.so \
    ${libdir}/libnotificationmanager.so \
    ${libdir}/libkfontinst.so \
    ${libdir}/libkfontinstui.so \
    ${libdir}/libtaskmanager.so \
    ${libdir}/libkworkspace5.so \
    ${libdir}/libplasma-geolocation-interface.so \
    ${libdir}/libweather_ion.so \
"

INSANE_SKIP:${PN} = "dev-so"

RDEPENDS:${PN} += " \
    kinit \
    kquickcharts \
    milou \
    xprop \
    xset \
    qttools-tools \
"
