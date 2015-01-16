TARGET = simple-testcase
TEMPLATE = app
QT += testlib
CONFIG += console testcase
CONFIG -= app_bundle

HEADERS += \
    MyClass.h \
    MyClassTest.h

SOURCES += \
    MyClass.cpp \
    MyClassTest.cpp \
    main.cpp
