TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

DISTFILES += \
    NNW.txt

HEADERS += \
    Layer.h \
    Function.h \
    DeepNueralNetwork.h
