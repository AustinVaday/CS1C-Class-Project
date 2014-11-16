#include "MainProgramWindow.h"
#include "ui_mainprogramwindow.h"
#include "WelcomeWidget.h"
#include "newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "ui_AdminWindow.h"
#include "Header.h"
#include "LoginWindow.h"

MainProgramWindow::MainProgramWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainProgramWindow)
{

    ui->setupUi(this);


    // Shows the main program buttons when first logging in

}

MainProgramWindow::~MainProgramWindow()
{
    delete ui;
}

void MainProgramWindow::on_pushButton_clicked()
{
    LoginWindow login;

    login.setModal(true);
    login.exec();
}



void MainProgramWindow::on_exitProgram_clicked()
{
    QApplication::quit();
}
