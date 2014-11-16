#include "MainProgramWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainProgramWindow AdminWindow;

    AdminWindow.show();
    return a.exec();
}
