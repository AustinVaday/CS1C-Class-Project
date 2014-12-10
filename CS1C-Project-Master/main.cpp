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
	QDir	directory = QDir::current();

	while(directory.dirName() != "Class-Project")
	{
		directory.cdUp();
	}

	if(!directory.cd("Database-Files"))
	{
		directory.mkpath("Database-Files");
		directory.cd("Database-Files");
	}

	qDebug() << "Current Directory : " << directory.path();

	QFile::copy(":/CustomerDatabase.txt",(directory.path() +  "/CustomerList.txt"));
	QFile::copy(":/ProductDatabase.txt",(directory.path() +  "/ProductList.txt"));
	QFile::copy(":/Testimonials.txt",(directory.path()) + "/Testimonials.txt");

	// MAIN WINDOW HAS TO STAY DOWN HERE OR IT WILL TRY TO INITIALIZE BEFORE
	//	CHECKING FOR DIRECTORY
	MainProgramWindow MainProgramWindow;
	MainProgramWindow.setDatabaseStatus(false);
	// DISPLAYS MAIN WINDOW
    MainProgramWindow.show();

    return a.exec();
}
