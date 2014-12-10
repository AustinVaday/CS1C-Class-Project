#include "proceedtocheckout.h"
#include "ui_proceedtocheckout.h"
#include <QMessageBox>

ProceedToCheckout::ProceedToCheckout(QWidget *parent):
	QWidget(parent),
	ui(new Ui::ProceedToCheckout)
{
	ui->setupUi(this);
}

ProceedToCheckout::ProceedToCheckout(QWidget *parent, const ProductList& shoppingCartList, QString total) :
    QWidget(parent),
    ui(new Ui::ProceedToCheckout)
{

    ui->setupUi(this);

    displayList = shoppingCartList;
    totalCost = total;

    ui->displayShoppingCart->insertPlainText(displayList.OutputList());
    ui->totalCost_Browser->insertPlainText(totalCost);

    ui->creditCardNumber_line->clear();
    ui->cvcNumber_line->clear();



}

ProceedToCheckout::~ProceedToCheckout()
{
    delete ui;
}

void ProceedToCheckout::on_on_sumbitPayment_clicked_clicked()
{
    QString creditCardNumber;
    QString cvcNumber;

    creditCardNumber = ui->creditCardNumber_line->text();
    cvcNumber        = ui->cvcNumber_line->text();


     if(creditCardNumber.isEmpty() && cvcNumber.isEmpty())
     {
       QMessageBox::information(this, "Error", "Credit Card and CVC number fields empty");
     }
     else if(creditCardNumber.isEmpty())
     {
         QMessageBox::information(this, "Error", "Credit Card field empty");

     }
     else if(cvcNumber.isEmpty())
     {
         QMessageBox::information(this, "Error",  "CVC number field empty");

     }
     else
     {
         QMessageBox::information(this, "Thank You","Your payment is being processed. THank you for your pruchase");
         this->hide();

     }



}

