#ifndef CUSTOMERPLACEORDER_H
#define CUSTOMERPLACEORDER_H

#include <QDialog>

namespace Ui {
class CustomerPlaceOrder;
}

class CustomerPlaceOrder : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerPlaceOrder(QWidget *parent = 0);
    ~CustomerPlaceOrder();

private:
    Ui::CustomerPlaceOrder *ui;
};

#endif // CUSTOMERPLACEORDER_H
