#ifndef VIEWPRODUCTS_H
#define VIEWPRODUCTS_H

#include <QWidget>
#include "ProductClass.h"
#include "ProductListClass.h"
#include "ImageViewer.h"
#include "maintplan.h"
<<<<<<< HEAD
#include "shoppingcartwindownew.h"
=======
#include "ShoppingCartWindowNew.h"
>>>>>>> master

namespace Ui {
class ViewProducts;
}

class ViewProducts : public QWidget
{
    Q_OBJECT

public:
    explicit ViewProducts(QWidget *parent = 0);
<<<<<<< HEAD
    ViewProducts(QWidget *parent, ProductList &shoppingCartList);
=======
    ViewProducts(QWidget *parent, ProductList &robotList, ProductList &shoppingCartList);

>>>>>>> master


    ~ViewProducts();
signals:

<<<<<<< HEAD
signals:
    void signal_updated_shopping_list(ProductList& prodolist);
=======
    void signal_updated_shopping_list(ProductList &shoppingCartList);

public slots:
    void on_updated_shopping_list(ProductList &ShoppingCartList);
>>>>>>> master

public slots:
    void on_updated_shopping_list(ProductList & updatedList);

private slots:

    void on_MaintPlan_clicked();

<<<<<<< HEAD
    void on_addProductOne_clicked();

    void on_addProductTwo_clicked();

    void on_addProductThree_clicked();

    void on_checkOutButton_clicked();

    void on_pushButton_clicked();
=======
    void on_product_One_clicked();

    void on_product_Two_clicked();

    void on_product_Three_clicked();

    void on_checkout_button_clicked();
>>>>>>> master

private:
    Ui::ViewProducts *ui;
    ImageViewer* image1;
<<<<<<< HEAD
    ShoppingCartWindowNew* scWindow;
    ProductList            productList;
    ProductList            shoppingCart;
    Product product1;
    Product product2;
    Product product3;
=======
    ProductList shoppingCartList;
    ProductList roboList;
    ShoppingCartWindowNew *scWindow;
>>>>>>> master

};

#endif // VIEWPRODUCTS_H
