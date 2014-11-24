#ifndef BROCHUREWINDOW_H
#define BROCHUREWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_actionHELP_triggered();

//    void on_pushButton_2_clicked();

//    void on_button_viewProducts_clicked();

private:
    Ui::BrochureWindow *ui;
};

#endif // BROCHUREWINDOW_H
