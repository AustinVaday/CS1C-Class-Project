#include "MainProgramWindow.h"
#include <QApplication>
#include <QString>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

int main(int argc, char *argv[])
{
	// DECLARATIONS BEFORE APPLICATION STARTS
	QApplication a(argc, argv);
	QDir			  dir = QDir::home();
	QString			  resourcePath;
	QMessageBox		  noDir;



qDebug() << "Current directory: " << dir.dirName();

    // Combines current home path and default program path this determines
    //  if the path directory required for data persistence exists, if it /
    //  doesn't it will create it.
	resourcePath = "/CS_PROJECT_RESOURCES";
	dir.cd("Documents");

qDebug() << "Current directory: " << dir.dirName();

	if(!dir.cd(resourcePath))
    {
        // Sets text for message box then displays
        noDir.setText("Directory not found.\n Initiating....");
        noDir.exec();

        qWarning("Cannot find the Project directory.");
		dir.mkdir(resourcePath);
		dir.mkpath(resourcePath);

		dir.cd(resourcePath);


qDebug() << "Current directory: " << dir.dirName();

        // Reads Default Database text file from binary file.
        //  Default database cannot be modified once compile and executed.
        //  Application will read and write from the set directory path

        noDir.setText("Initiating Database...");
        noDir.exec();

    }

qDebug() << "Current directory: " << dir.dirName();

	// MAIN WINDOW HAS TO STAY DOWN HERE
	MainProgramWindow MainProgramWindow;


    MainProgramWindow.show();


    return a.exec();
}
