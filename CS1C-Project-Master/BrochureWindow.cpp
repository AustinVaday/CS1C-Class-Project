#include "BrochureWindow.h"
#include "ui_BrochureWindow.h"

BrochureWindow::BrochureWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BrochureWindow)
{
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
