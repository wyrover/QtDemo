#include "Demo02.h"

#include <QApplication>
#include <QDialog>

#include "../ui_Demo02_UI01_Dlg.h"


int Demo02Main(int argc, char ** argv)
{
	QApplication application(argc, argv);

	// 由于针对 .ui 文件生成的类是没有任何基类的，
	// 所以在使用窗体的时候，需要创建一个 QDialog 对象，将其传递给 setupUi 函数
	QDialog *parentDlg = new QDialog();

	// 初始化 QT 设计师生成的窗体
	Ui::Demo02_UI01_Dlg ui01Dlg;
	ui01Dlg.setupUi(parentDlg);

	// 显示窗体
	parentDlg->show();

	return application.exec();
}