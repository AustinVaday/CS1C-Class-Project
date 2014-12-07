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
    WriteToCustomerFile.cpp \
    customeraccountwindow.cpp \
    ImageViewer.cpp \
    sellpoint.cpp \
    guarantee.cpp \
    guestwindow.cpp \
    maintplan.cpp \
    environments.cpp \
    signupwindow.cpp \
    contactus.cpp \
    shoppingcartwindownew.cpp \
    ExceptionHandlers.cpp

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
    ImageViewer.h \
    sellpoint.h \
    guarantee.h \
    guestwindow.h \
    maintplan.h \
    environments.h \
    signupwindow.h \
    contactus.h \
    shoppingcartwindownew.h

FORMS   += mainprogramwindow.ui \
	newactivatedlist.ui \
	maindisplay.ui \
	AdminWindow.ui\
	customeraddressbook.ui\
	errorlogin.ui\
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
    ImageViewer.ui \
    sellpoint.ui \
    guarantee.ui \
    guestwindow.ui \
    maintplan.ui \
    environments.ui \
    signupwindow.ui \
    contactus.ui \
    shoppingcartwindownew.ui

RESOURCES += \
    TextFilesFolder.qrc \
    Images.qrc

OTHER_FILES += \
    ProductDatabase.txt

