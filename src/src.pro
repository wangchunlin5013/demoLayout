#-------------------------------------------------
#
# Project created by QtCreator 2018-11-07T21:46:28
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UserInfo
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
    content.cpp \
    baseinfo.cpp \
    contact.cpp \
    detail.cpp

HEADERS += \
    content.h \
    baseinfo.h \
    contact.h \
    detail.h

TRANSLATIONS += zh_CN.ts

target.path = ../debug/
TARGETPATH = ../debug/

images.files += $$PWD/images/*
images.path = $$TARGETPATH/images/

language.files += $$PWD/*.qm
language.path = $$TARGETPATH/languages/

INSTALLS += target language images

