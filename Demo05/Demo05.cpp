#include "Demo05.h"

#include <QApplication>
#include <QDialog>

#include "Demo05_UI01_Dlg.h"


int Demo05Main(int argc, char ** argv)
{
	QApplication application(argc, argv);

	Demo05_UI01_Dlg ui01Dlg;
	ui01Dlg.show();

	return application.exec();
}