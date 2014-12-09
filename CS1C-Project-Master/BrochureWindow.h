#ifndef BROCHUREWINDOW_H
#define BROCHUREWINDOW_H

#include <QMainWindow>
#include "ProductClass.h"
#include "ProductListClass.h"
#include "ViewProducts.h"
#include "ImageViewer.h"

namespace Ui {
class BrochureWindow;
}

class BrochureWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BrochureWindow(QWidget *parent = 0);
    ~BrochureWindow();

signals:
    void clicked();

    void viewProducts();

public slots:
    void on_updated_shopping_list(ProductList & updatedList);


private slots:
    void on_actionHELP_triggered();

    void on_button_viewProducts_clicked();

    void on_button_logout_clicked();

private:
    ProductList            robotList;
    Ui::BrochureWindow*    ui;
    ViewProducts*          vpWindow;
    ShoppingCartWindowNew* scWindow;
    ImageViewer*           image;
    ProductList            shoppingCartList;
};

#endif // BROCHUREWINDOW_H
