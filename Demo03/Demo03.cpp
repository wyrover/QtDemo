#include "Demo03.h"

#include <QApplication>
#include <QDialog>

#include "Demo03_UI01_Dlg.h"


// Demo03 会根据 Demo03_UI01_Dlg.ui 来生成一个 ui_Demo03_UI01_Dlg.h，
// 由于在 Demo03_UI01_Dlg.ui 中已经定义了窗口 Demo03_UI01_Dlg，
// 所以在 ui_Demo03_UI01_Dlg.h 中的 Ui 命名空间下会生成 Ui::Demo03_UI01_Dlg 的类

int Demo03Main(int argc, char ** argv)
{
	QApplication application(argc, argv);

	Demo03_UI01_Dlg ui01Dlg;
	ui01Dlg.show();
	
	return application.exec();
}