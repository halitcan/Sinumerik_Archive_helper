#-------------------------------------------------
#
# Project created by QtCreator 2017-03-15T14:02:40
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sinumerik_archive_helper
TEMPLATE = app


SOURCES += \
        program/main.cpp\
        dialoge/mainwindow.cpp \
        maschinendaten/maschinendatum.cpp \
        maschinendaten/allgemeinmaschinendaten.cpp \
        maschinendaten/kanalmaschinendaten.cpp \
        maschinendaten/achsmaschinendaten.cpp \
        misc/loader.cpp

HEADERS  += \
    dialoge/mainwindow.h \
    maschinendaten/maschinendatum.h \
    maschinendaten/allgemeinmaschinendaten.h \
    maschinendaten/kanalmaschinendaten.h \
    maschinendaten/achsmaschinendaten.h \
    misc/loader.h

FORMS    += \
    ui/mainwindow.ui

CONFIG += c++11
