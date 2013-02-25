#include "Demo01.h"
#include <QApplication>
#include <QLabel>

int Demo01Main(int argc, char ** argv)
{
	QApplication application(argc, argv);
	
	// Qlabel 部件支持 HTML 风格的显示
	QLabel *lbl = new QLabel("<h2><i>Hello </i>""<font color=red>world!</font></h2>");
	lbl->show();

	return application.exec();
}