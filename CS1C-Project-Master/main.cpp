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
	QDir		 dir = QDir::homePath();
	QString		 resourcePath;
	QMessageBox	initStatus;
	bool		resourcesFound;

	resourcesFound = false;

//*Checking each directory path and seeing what outputs what
//
	dir = QDir::homePath();
	qDebug() << "Home Path: " << dir.currentPath();

	qDebug() << "Absolute Path: " << dir.absolutePath();

	qDebug() << "Path : " << dir.path();


qDebug() << "Line 17 - Current directory: " << dir.dirName();
qWarning("Line 18 - The File CustomerDatabase path is: ");
qWarning() << "Line 19 - "<< dir.absoluteFilePath("CustomerDatabase.txt");
    // Combines current home path and default program path this determines
    //  if the path directory required for data persistence exists, if it /
    //  doesn't it will create it.
	resourcePath = "/CS-PROJECT-RESOURCES/";
	while(!QDir(QDir::homePath() + resourcePath).exists() && !resourcesFound)
    {
		// Sets text for message box then displays
		initStatus.setText("Directory not found.\n Initiating....");
		initStatus.exec();

		if(QDir().mkdir(dir.path() + resourcePath))
		{
			initStatus.setText("Directory Created");
			initStatus.setModal(true);
			initStatus.exec();


			if(!QFile::copy(":/CustomerDatabase.txt",
							dir.path()
							+ resourcePath
							+ "CustomerDatabase.txt"))
			{
				Q_ASSERT("Customer Database Failed");
			}

			if(!QFile::copy(":/ProductDatabase.txt",
							dir.path()
							+ resourcePath
							+ "ProductDatabase.txt"))
			{
				Q_ASSERT("Product Database Failed");
			}
		}


qDebug() << "Line 54: Current directory : " << dir.dirName();

        // Reads Default Database text file from binary file.
        //  Default database cannot be modified once compile and executed.
        //  Application will read and write from the set directory path

		initStatus.setText("Initiating Database...");
		initStatus.exec();

    }

qDebug() << "Current directory: " << dir.dirName();

	// MAIN WINDOW HAS TO STAY DOWN HERE
	MainProgramWindow MainProgramWindow;


    MainProgramWindow.show();


    return a.exec();
}
