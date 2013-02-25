#include "Demo04_UI01_Dlg.h"


Demo04_UI01_Dlg::Demo04_UI01_Dlg(QWidget *parent) : QDialog(parent)
{
	this->setupUi(this);

	// 隐藏两个组合框
	this->secondaryGroupBox->hide();
	this->tertiaryGroupBox->hide();

	// 设置不允许用户改变对话框窗体的大小
	// 布局会复制对话框重新定义大小的指针
	// 并且也会在现实或者隐藏子窗口的时候自动重新定义这个对话框的大小
	// congenial确保对话框总是能以最佳的尺寸显示出来
	layout()->setSizeConstraint(QLayout::SetFixedSize);
}


void Demo04_UI01_Dlg::setColumnRange(QChar cFirst, QChar cLast)
{
	primaryOrderComboBox->clear();
	secondaryColumnComboBox->clear();
	tertiaryColumnComboBox->clear();

	secondaryColumnComboBox->addItem(tr("None"));
	tertiaryColumnComboBox->addItem(tr("None"));
	primaryOrderComboBox->setMinimumSize(secondaryColumnComboBox->sizeHint());

	QChar c = cFirst;
	while(c <= cLast)
	{
		primaryOrderComboBox->addItem(QString(c));
		secondaryColumnComboBox->addItem(QString(c));
		tertiaryColumnComboBox->addItem(QString(c));

		c = c.unicode() + 1;
	}
}