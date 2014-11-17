#ifndef MAINPROGRAMWINDOW_H
#define MAINPROGRAMWINDOW_H

#include <QMainWindow>
#include "AdminWindow.h"

namespace Ui {
class MainProgramWindow;
}

class MainProgramWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainProgramWindow(QWidget *parent = 0);
    ~MainProgramWindow();

signals:

private slots:

    void on_pushButton_clicked();

    void on_exitProgram_clicked();

private:
    Ui::MainProgramWindow *ui;
    AdminWindow *aWindow;
};

#endif // MAINPROGRAMWINDOW_H
