QT += core
QT -= gui

CONFIG += c++11

TARGET = gitconsole
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    utils/cibprueba.cpp

HEADERS += \
    utils/cibprueba.h
