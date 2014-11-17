#include "AdminWindow.h"
#include "newactivatedlist.h"
#include "customerclass.h"
#include "customerlistclass.h"
#include "ui_AdminWindow.h"
#include "Header.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    // FOR PROJECT MAIN WINDOWx
//    CustomerList activatedList;
//    CustomerList deactivatedList;

//    ReadCustomerFile(activatedList, "ActivatedListFile.txt");

//    ReadCustomerFile(deactivatedList, "DeactivatedListFile.txt");


    // FOR ADMIN WINDOW
    on_user_name_label_linkActivated("Austin Vaday");
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_user_name_label_linkActivated(const QString &link)
{

    ui->user_name_label->setText(link);

    QFont font("Arial", 28, QFont::Bold);

    ui->user_name_label->setFont(font);
}

void AdminWindow::on_back_button_clicked()
{
    this->hide();
}
void AdminWindow::on_view_activated_customers_clicked()
{
//    QWidget *viewActivatedCustomers = new QWidget;

//    viewActivatedCustomers->show();

    NewActivatedList viewList;

    viewList.setModal(true);
    viewList.exec();
}
