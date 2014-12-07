#ifndef VIEWPRODUCTS_H
#define VIEWPRODUCTS_H

#include <QWidget>
#include "ProductClass.h"
#include "ProductListClass.h"
#include "ImageViewer.h"
#include "maintplan.h"
#include "shoppingcartwindownew.h"

namespace Ui {
class ViewProducts;
}

class ViewProducts : public QWidget
{
    Q_OBJECT

public:
    explicit ViewProducts(QWidget *parent = 0);
    ViewProducts(QWidget *parent, ProductList &shoppingCartList);


    ~ViewProducts();

signals:
    void signal_updated_shopping_list(ProductList& prodolist);

public slots:
    void on_updated_shopping_list(ProductList & updatedList);

private slots:

    void on_MaintPlan_clicked();

    void on_addProductOne_clicked();

    void on_addProductTwo_clicked();

    void on_addProductThree_clicked();

    void on_checkOutButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::ViewProducts *ui;
    ImageViewer* image1;
    ShoppingCartWindowNew* scWindow;
    ProductList            productList;
    ProductList            shoppingCart;
    Product product1;
    Product product2;
    Product product3;

};

#endif // VIEWPRODUCTS_H
