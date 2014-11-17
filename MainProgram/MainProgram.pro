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
        LoginWindow.cpp \
        maindisplay.cpp \
        AdminWindow.cpp \
    ProductClass.cpp \
    ProductListClass.cpp \
    customeraddressbook.cpp

HEADERS += MainProgramWindow.h \
        adminclass.h \
        userclass.h \
        customerlistclass.h \
        customerclass.h \
        genericnodeclass.h \
        ExceptionHandlers.h \
        Header.h \
        newactivatedlist.h\
        LoginWindow.h \
        maindisplay.h \
        AdminWindow.h \
    ProductClass.h \
    ProductListClass.h \
    customeraddressbook.h

FORMS   += mainprogramwindow.ui \
        newactivatedlist.ui \
        LoginWindow.ui\
        maindisplay.ui \
        AdminWindow.ui\
    customeraddressbook.ui

RESOURCES += \
    TextFilesFolder.qrc

