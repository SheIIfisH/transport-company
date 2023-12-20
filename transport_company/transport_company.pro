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
    global.cpp \
    expenserow.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    table.h \
    tablerow.h \
    mainmenu.h \
    orderrow.h \
    reportscreen.h \
    transportrow.h \
    premisesrow.h \
    employeerow.h \
    global.h \
    expenserow.h
