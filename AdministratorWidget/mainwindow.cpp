#include "mainwindow.h"
#include "newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "ui_mainwindow.h"
#include "Header.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // FOR PROJECT MAIN WINDOW
//    CustomerList activatedList;
//    CustomerList deactivatedList;

//    ReadCustomerFile(activatedList, "ActivatedListFile.txt");

//    ReadCustomerFile(deactivatedList, "DeactivatedListFile.txt");


    // FOR ADMIN WINDOW
    on_user_name_label_linkActivated("Austin Vaday");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_user_name_label_linkActivated(const QString &link)
{

    ui->user_name_label->setText(link);

    QFont font("Arial", 28, QFont::Bold);

    ui->user_name_label->setFont(font);
}

void MainWindow::on_back_button_clicked()
{
    qApp->quit();
}
void MainWindow::on_view_activated_customers_clicked()
{
//    QWidget *viewActivatedCustomers = new QWidget;

//    viewActivatedCustomers->show();

    NewActivatedList viewList;

    viewList.setModal(true);
    viewList.exec();
}
