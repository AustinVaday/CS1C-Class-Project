#ifndef SHOPPINGCARTWINDOWNEW_H
#define SHOPPINGCARTWINDOWNEW_H

#include <QDialog>
#include "ProductListClass.h"

namespace Ui {
class ShoppingCartWindowNew;
}

class ShoppingCartWindowNew : public QDialog
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
//    Product robo1;
//    Product robo2;
//    Product robo3;
};

#endif // SHOPPINGCARTWINDOWNEW_H
