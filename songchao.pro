#-------------------------------------------------
#
# Project created by QtCreator 2018-12-05T15:17:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
qtHaveModule(printsupport): QT += printsupport
TARGET = songchao
TEMPLATE = app


SOURCES += main.cpp\
        myword.cpp \
    mychild.cpp

HEADERS  += myword.h \
    mychild.h

RESOURCES += \
    myword.qrc
