#include "MainProgramWindow.h"
#include "AdminWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainProgramWindow mainWindow;
    AdminWindow       admin;

    admin.show();
    return a.exec();
}
