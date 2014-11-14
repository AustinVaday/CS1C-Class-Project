#-------------------------------------------------
#
# Project created by QtCreator 2014-11-13T21:50:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AdministratorWidget
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    adminclass.cpp \
    userclass.cpp \
    customerlistclass.cpp \
    customerclass.cpp \
    ReadCustomerFile.cpp \
    newactivatedlist.cpp

HEADERS  += mainwindow.h \
    adminclass.h \
    userclass.h \
    customerlistclass.h \
    customerclass.h \
    genericnodeclass.h \
    ExceptionHandlers.h \
    Header.h \
    newactivatedlist.h

FORMS    += mainwindow.ui \
    newactivatedlist.ui

OTHER_FILES +=

RESOURCES += \
    TextFilesFolder.qrc
