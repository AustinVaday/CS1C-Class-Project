#-------------------------------------------------
#
# Project created by QtCreator 2014-11-14T15:41:36
#
#-------------------------------------------------

QT       += core gui
QT       += printsupport

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
        ProductListClass.cpp\
        customeraddressbook.cpp\
        errorlogin.cpp\
        editHelpText.cpp\
        firstdialog.cpp \
        helpwindow.cpp \
        login.cpp \
        loginhelp.cpp \
        navigatingapp.cpp \
        requestbrochure.cpp\
        orderproduct.cpp \
    BrochureWindow.cpp \
    CustomerPlaceOrder.cpp \
    ViewProducts.cpp\
    find.cpp \
    customeraccountwindow.cpp \
    ImageViewer.cpp

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
        customeraddressbook.h\
        errorlogin.h\
        editHelpText.h\
        firstdialog.h\
        helpwindow.h\
        login.h\
        loginhelp.h\
        navigatingapp.h\
        requestbrochure.h\
        orderproduct.h \
    BrochureWindow.h \
    CustomerPlaceOrder.h \
    ViewProducts.h\
    find.h \
    customeraccountwindow.h \
    ImageViewer.h

FORMS   += mainprogramwindow.ui \
        newactivatedlist.ui \
        maindisplay.ui \
        AdminWindow.ui\
        customeraddressbook.ui\
        errorlogin.ui\
        editHelpText.ui\
        firstdialog.ui\
        helpwindow.ui\
        login.ui\
        loginhelp.ui\
        navigatingapp.ui\
        requestbrochure.ui\
        orderproduct.ui \
    BrochureWindow.ui \
    CustomerPlaceOrder.ui \
    ViewProducts.ui\
    find.ui \
    customeraccountwindow.ui \
    ImageViewer.ui

RESOURCES += \
    TextFilesFolder.qrc \
    Images.qrc

OTHER_FILES +=

