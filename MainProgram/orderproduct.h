#ifndef ORDERPRODUCT_H
#define ORDERPRODUCT_H

#include <QDialog>

namespace Ui {
class OrderProduct;
}

class OrderProduct : public QDialog
{
    Q_OBJECT

public:
    explicit OrderProduct(QWidget *parent = 0);
    ~OrderProduct();

private:
    Ui::OrderProduct *ui;
};

#endif // ORDERPRODUCT_H
