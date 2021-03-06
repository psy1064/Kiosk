#-------------------------------------------------
#
# Project created by QtCreator 2020-04-10T01:09:33
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kiosk
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
QTPLUGIN += qtslibplugin

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    mymenu.cpp \
    basket.cpp \
    popup.cpp \
    kakaopopup.cpp \
    checklist.cpp

HEADERS += \
        mainwindow.h \
    mymenu.h \
    basket.h \
    popup.h \
    kakaopopup.h \
    checklist.h

FORMS += \
        mainwindow.ui \
    mymenu.ui \
    basket.ui \
    popup.ui \
    kakaopopup.ui \
    checklist.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../usr/lib/release/ -lwiringPi
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../usr/lib/debug/ -lwiringPi
else:unix: LIBS += -L$$PWD/../../../../usr/lib/ -lwiringPi

