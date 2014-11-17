#include "MainProgramWindow.h"
#include "AdminWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainProgramWindow program;

    program.show();
    return a.exec();
}
