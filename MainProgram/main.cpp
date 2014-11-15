#include "MainProgramWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainProgramWindow mainWindow;

    mainWindow.show();
    return a.exec();
}
