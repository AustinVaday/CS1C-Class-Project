#include "contactus.h"
#include "ui_contactus.h"

ContactUs::ContactUs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactUs)
{
    ui->setupUi(this);
    ui->chatTypeLine->setFocus();
    ui->chatBox->setReadOnly(true);

    // initial popup
    ui->chatBox->setText("Admin: How may I help you?");

}

ContactUs::~ContactUs()
{
    delete ui;

}

void ContactUs::on_sendButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString text;

    if (name.length() > 10)
    {
        name.resize(10);
    }
    name.append(": ");

    // user text
    text = name + ui->chatTypeLine->text();
    ui->chatBox->append(text);


    ui->chatTypeLine->clear();
}
