QT += widgets

TEMPLATE = lib
DEFINES += MYSHAREDLIB_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    tpendialog.cpp

HEADERS += \
    MySharedLib_global.h \
    tpendialog.h

FORMS += \
    tpendialog.ui

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
