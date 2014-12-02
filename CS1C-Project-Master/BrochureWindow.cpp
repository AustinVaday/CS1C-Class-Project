#include "BrochureWindow.h"
#include "ui_BrochureWindow.h"


BrochureWindow::BrochureWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrochureWindow)
{
    image    = new ImageViewer;
    vpWindow = new ViewProducts;
    ui->setupUi(this);
}

BrochureWindow::~BrochureWindow()
{
    delete ui;
}

void BrochureWindow::on_actionHELP_triggered()
{
    emit clicked();
}

void BrochureWindow::on_button_viewProducts_clicked()
{
    image->show();
    vpWindow->show();
}
