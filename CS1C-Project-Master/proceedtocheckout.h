#ifndef PROCEEDTOCHECKOUT_H
#define PROCEEDTOCHECKOUT_H

#include <QWidget>
#include "ProductListClass.h"

namespace Ui {
class ProceedToCheckout;
}

class ProceedToCheckout : public QWidget
{
    Q_OBJECT

public:
    explicit ProceedToCheckout(QWidget *parent = 0);

    ProceedToCheckout(QWidget *parent,const ProductList& shoppingCartList, QString total);

    ~ProceedToCheckout();

private slots:
    void on_on_sumbitPayment_clicked_clicked();


private:
    Ui::ProceedToCheckout *ui;

    ProductList displayList;
    QString     totalCost;
};

#endif // PROCEEDTOCHECKOUT_H
