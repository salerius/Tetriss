#-------------------------------------------------
#
# Project created by QtCreator 2015-12-02T14:18:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tetriss
TEMPLATE = app


SOURCES += main.cpp\
        tetris.cpp \
    rectangleinfo.cpp \
    frame.cpp

HEADERS  += tetris.h \
    rectangleinfo.h \
    frame.h

FORMS    += tetris.ui
