#ifndef MAINPROGRAMWINDOW_H
#define MAINPROGRAMWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainProgramWindow;
}

class MainProgramWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainProgramWindow(QWidget *parent = 0);
    ~MainProgramWindow();

private slots:

    void on_pushButton_clicked();

private:
    Ui::MainProgramWindow *ui;
};

#endif // MAINPROGRAMWINDOW_H
