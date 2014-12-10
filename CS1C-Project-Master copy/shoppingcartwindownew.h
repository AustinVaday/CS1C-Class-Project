#ifndef SHOPPINGCARTWINDOWNEW_H
#define SHOPPINGCARTWINDOWNEW_H

#include <QWidget>
#include "ProductListClass.h"
#include "proceedtocheckout.h"

namespace Ui {
class ShoppingCartWindowNew;
}

class ShoppingCartWindowNew : public QWidget
{
    Q_OBJECT

public:
    explicit ShoppingCartWindowNew(QWidget *parent = 0);
	ShoppingCartWindowNew(QWidget *parent, ProductList &ShoppingCartList);

    ~ShoppingCartWindowNew();
    void DisplayTheList();

signals:
   void signal_updated_shopping_list(ProductList& ShoppingCartList);

private slots:
   void on_remove_button_clicked();
   void on_checkout_button_clicked();
   void on_back_button_clicked();

private:
    Ui::ShoppingCartWindowNew *ui;
    ProductList roboList;
    ProductList shoppingCartList;
	ProceedToCheckout *checkoutWindow;
};

#endif // SHOPPINGCARTWINDOWNEW_H
