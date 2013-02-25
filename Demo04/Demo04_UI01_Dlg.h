#ifndef __DEMO_04_UI_01_DLG_H__
#define __DEMO_04_UI_01_DLG_H__


#include <QDialog>

#include "../ui_Demo04_UI01_Dlg.h"


class Demo04_UI01_Dlg : public QDialog, public Ui::Demo04_UI01_Dlg
{
	Q_OBJECT

public:
	Demo04_UI01_Dlg(QWidget *parent = NULL);
	void setColumnRange(QChar cFirst, QChar cLast);

private slots:

};

#endif	// end of __DEMO_04_UI_01_DLG_H__