#-------------------------------------------------
#
# Project created by QtCreator 2014-11-14T15:41:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainProgram
TEMPLATE = app


SOURCES += main.cpp\
        MainProgramWindow.cpp \
        adminclass.cpp \
        userclass.cpp \
        customerlistclass.cpp \
        customerclass.cpp \
        ReadCustomerFile.cpp \
        newactivatedlist.cpp\
        mainwindow.cpp \
        LoginWindow.cpp \
    maindisplay.cpp

HEADERS += MainProgramWindow.h \
        adminclass.h \
        userclass.h \
        customerlistclass.h \
        customerclass.h \
        genericnodeclass.h \
        ExceptionHandlers.h \
        Header.h \
        newactivatedlist.h\
        mainwindow.h \
        LoginWindow.h \
    maindisplay.h

FORMS   += mainprogramwindow.ui \
        newactivatedlist.ui \
        mainwindow.ui \
        LoginWindow.ui\
    maindisplay.ui

RESOURCES += \
    TextFilesFolder.qrc

