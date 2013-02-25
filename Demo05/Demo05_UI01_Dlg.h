#ifndef __DEMO_05_UI_01_DLG_H__
#define __DEMO_05_UI_01_DLG_H__


#include <QDialog>

#include "../ui_Demo05_UI01_Dlg.h"


// 单一继承法显示 Qt 设计师所设计的窗口

class Demo05_UI01_Dlg : public QDialog
{
public:
	Ui::Demo05_UI01_Dlg ui01Dlg;

	Demo05_UI01_Dlg();
};


#endif	// end of __DEMO_05_UI_01_DLG_H__