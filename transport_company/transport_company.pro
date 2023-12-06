TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    table.cpp \
    mainmenu.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    table.h \
    tablerow.h \
    mainmenu.h

