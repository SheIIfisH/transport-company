TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    table.cpp \
    mainmenu.cpp \
    orderrow.cpp \
    reportscreen.cpp \ 
    premisesrow.cpp \
    transportrow.cpp \
    employeerow.cpp \
    expencerow.cpp \
    global.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    table.h \
    tablerow.h \
    mainmenu.h \
    orderrow.h \
    reportscreen.h \
    expencerow.h \
    transportrow.h \
    premisesrow.h \
    employeerow.h \
    global.h
