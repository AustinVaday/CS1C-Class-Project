#include "MainProgramWindow.h"
#include <QApplication>
#include <QString>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    // DECLARATIONS
    QApplication a(argc, argv);
    QDir dir = QDir::home();
    QString projectPath;
    QString defaultPath = "/E.R.C.K";
    QMessageBox noDir;

    // This determines if the path directory required for data persistence exist, if it doesn't it will create it
    projectPath = dir.path() + defaultPath;
    dir = projectPath;

    if(!dir.exists())
    {
        // Sets text for message box then displays
        noDir.setText("Directory not found.\n Initiating....");
        noDir.exec();

        qWarning("Cannot find the Project directory.");

        dir.mkpath(projectPath);

    }


    MainProgramWindow MainProgramWindow;



    MainProgramWindow.show();
    return a.exec();
}
