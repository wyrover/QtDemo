/********************************************************************************
** Form generated from reading UI file 'Demo03_UI01_Dlg.ui'
**
** Created: Fri Aug 3 17:32:04 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO03_UI01_DLG_H
#define UI_DEMO03_UI01_DLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Demo03_UI01_Dlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *Demo03_UI01_Dlg)
    {
        if (Demo03_UI01_Dlg->objectName().isEmpty())
            Demo03_UI01_Dlg->setObjectName(QString::fromUtf8("Demo03_UI01_Dlg"));
        Demo03_UI01_Dlg->resize(243, 71);
        verticalLayout = new QVBoxLayout(Demo03_UI01_Dlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl = new QLabel(Demo03_UI01_Dlg);
        lbl->setObjectName(QString::fromUtf8("lbl"));

        horizontalLayout->addWidget(lbl);

        lineEdit = new QLineEdit(Demo03_UI01_Dlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okBtn = new QPushButton(Demo03_UI01_Dlg);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setEnabled(false);
        okBtn->setDefault(true);

        horizontalLayout_2->addWidget(okBtn);

        cancelBtn = new QPushButton(Demo03_UI01_Dlg);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout_2->addWidget(cancelBtn);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        lbl->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, okBtn);
        QWidget::setTabOrder(okBtn, cancelBtn);

        retranslateUi(Demo03_UI01_Dlg);
        QObject::connect(cancelBtn, SIGNAL(clicked()), Demo03_UI01_Dlg, SLOT(accept()));

        QMetaObject::connectSlotsByName(Demo03_UI01_Dlg);
    } // setupUi

    void retranslateUi(QDialog *Demo03_UI01_Dlg)
    {
        Demo03_UI01_Dlg->setWindowTitle(QApplication::translate("Demo03_UI01_Dlg", "Go To Cell", 0, QApplication::UnicodeUTF8));
        lbl->setText(QApplication::translate("Demo03_UI01_Dlg", "&Cell Location:", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("Demo03_UI01_Dlg", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("Demo03_UI01_Dlg", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Demo03_UI01_Dlg: public Ui_Demo03_UI01_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO03_UI01_DLG_H
