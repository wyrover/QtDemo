#include "Demo03_UI01_Dlg.h"


Demo03_UI01_Dlg::Demo03_UI01_Dlg(QWidget *parent) : QDialog(parent)
{
	// setupUi 函数会自动将符合 on_objectName_signalName 命名的任意槽与相对于的 objectName 和 signalName 信号连接
	// 所以 setupUi 函数将会自动建立如下所以的信号与槽的连接关系
	// connect(lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(on_lineEdit_textChanged()));
	this->setupUi(this);

	// Qt 提供了三个内置的检验器类：QIntValidator，QDoubleValidator，QRegExpValidator
	// 将 this 传递给 QRegExpValidator 的构造函数，从而使 QRegExpValidator 成为 Demo03_UI01_Dlg 的子对象
	// 从而无需处理删除 QRegExpValidator 了，因为在父对象删除时，其所有的子对象将会被自动删除
	QRegExp regExp("[A-Za-z][0-9]{0,2}");
	this->lineEdit->setValidator(new QRegExpValidator(regExp, this));

	// 将 OK 按钮连接到 QDialog 的 accept() 槽
	// 将 Cacnel 按钮连接到 QDialog 的 reject() 槽
	// accept 槽和 reject 槽都可以关闭对话框
	// accept 槽可以将对话框返回的结果变量设置为 QDialog:Accepted
	// 而 reject 槽会把对话框的值设置为 QDialog::Rejected
	// 当使用这个对话框时，可以利用这个结果变量判断用户是否单击了 OK 按钮
	connect(this->okBtn, SIGNAL(clicked()), this, SLOT(accept()));
	connect(this->cancelBtn, SIGNAL(clicked()), this, SLOT(reject()));
}


void Demo03_UI01_Dlg::on_lineEdit_textChanged()
{
	// 根据行编辑器中是否包含了有效的单元格位置坐标来决定是否启用 OK 按钮
	this->okBtn->setEnabled(this->lineEdit->hasAcceptableInput());
}