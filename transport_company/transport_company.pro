TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    tablestring.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    tablestring.h

