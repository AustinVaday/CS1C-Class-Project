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
        maindisplay.cpp \
        AdminWindow.cpp \
        ProductClass.cpp \
        ProductListClass.cpp \
        login.cpp \
        errorlogin.cpp\
        helpwindow.cpp \
        firstdialog.cpp \
        orderproduct.cpp \
        requestbrochure.cpp \
        loginhelp.cpp \
        navigatingapp.cpp

HEADERS += MainProgramWindow.h \
        adminclass.h \
        userclass.h \
        customerlistclass.h \
        customerclass.h \
        genericnodeclass.h \
        ExceptionHandlers.h \
        Header.h \
        newactivatedlist.h\
        maindisplay.h \
        AdminWindow.h \
        ProductClass.h \
        ProductListClass.h \
        login.h \
        errorlogin.h\
        helpwindow.h \
        firstdialog.h \
        orderproduct.h \
        requestbrochure.h \
        loginhelp.h \
        navigatingapp.h

FORMS   += mainprogramwindow.ui \
        newactivatedlist.ui \
        maindisplay.ui \
        AdminWindow.ui\
        login.ui \
        errorlogin.ui\
        helpwindow.ui \
        firstdialog.ui \
        orderproduct.ui \
        requestbrochure.ui \
        LoginHelp.ui \
        loginhelp.ui \
        navigatingapp.ui


RESOURCES += \
    TextFilesFolder.qrc

OTHER_FILES += \
    AdminFile.txt

