#include "MainProgramWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainProgramWindow MainProgramWindow;

    MainProgramWindow.show();
    return a.exec();
}
