#ifndef __DEMO_03_UI_01_DLG_H__
#define __DEMO_03_UI_01_DLG_H__

#include <QDialog>

#include "../ui_Demo03_UI01_Dlg.h"

// 注意类需要以 ; 结尾
// 继承自 QDialog 以及 Demo03_UI-1_Dlg.ui 所生成的 Ui::Demo03_II01_Dlg 子类
// 如果要在类中使用信号与槽的话，必须在类的最开始出定义 Q_OBJECT 宏

class Demo03_UI01_Dlg : public QDialog, public Ui::Demo03_UI01_Dlg
{
	Q_OBJECT

public:
	Demo03_UI01_Dlg(QWidget *parent = NULL);

private slots:
	void on_lineEdit_textChanged();

};


#endif	// end of __DEMO_03_UI_01_DLG_H__