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
	ViewProducts(QWidget *parent, ProductList &robotList, ProductList &shoppingCartList);
	ViewProducts(QWidget *parent, ProductList &shoppingCartList);



    ~ViewProducts();
signals:

	void signal_updated_shopping_list(ProductList &ProductList);

public slots:
	void on_updated_shopping_list(ProductList &updatedList);

private slots:


    void on_MaintPlan_clicked();

    void on_product_One_clicked();

    void on_product_Two_clicked();

    void on_product_Three_clicked();

    void on_checkout_button_clicked();

	void on_backButton_clicked();

private:
    Ui::ViewProducts *ui;
    ImageViewer* image1;
	ProductList shoppingCart;
	ProductList roboList;
	ShoppingCartWindowNew *scWindow;

};

#endif // VIEWPRODUCTS_H
