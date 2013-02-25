#include "Demo04.h"

#include <QApplication>
#include <QDialog>

#include "Demo04_UI01_Dlg.h"


int Demo04Main(int argc, char ** argv)
{
	QApplication application(argc, argv);

	Demo04_UI01_Dlg ui01Dlg;

	ui01Dlg.show();

	return application.exec();
}