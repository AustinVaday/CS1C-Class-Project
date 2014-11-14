#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_user_name_label_linkActivated(const QString &link);

    void on_back_button_clicked();

    void on_view_activated_customers_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
