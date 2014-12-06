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
    MainProgramWindow MainProgramWindow;
    QDir dir = QDir::home();
    QString projectPath;
    QString defaultPath = "/ERCK";
    QMessageBox noDir;


    // Combines current home path and default program path this determines
    //  if the path directory required for data persistence exists, if it /
    //  doesn't it will create it.
    projectPath = dir.path() + defaultPath;
    dir         = projectPath;

    if(!dir.exists())
    {
        // Sets text for message box then displays
        noDir.setText("Directory not found.\n Initiating....");
        noDir.exec();

        qWarning("Cannot find the Project directory.");
        dir.mkpath(projectPath);

        // Reads Default Database text file from binary file.
        //  Default database cannot be modified once compile and executed.
        //  Application will read and write from the set directory path

        noDir.setText("Initiating Database...");
        noDir.exec();

    }


    MainProgramWindow.show();


    return a.exec();
}
