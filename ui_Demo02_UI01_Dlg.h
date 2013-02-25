/********************************************************************************
** Form generated from reading UI file 'Demo02_UI01_Dlg.ui'
**
** Created: Fri Aug 3 17:32:04 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO02_UI01_DLG_H
#define UI_DEMO02_UI01_DLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Demo02_UI01_Dlg
{
public:
    QPushButton *pushBtnExit;

    void setupUi(QDialog *Demo02_UI01_Dlg)
    {
        if (Demo02_UI01_Dlg->objectName().isEmpty())
            Demo02_UI01_Dlg->setObjectName(QString::fromUtf8("Demo02_UI01_Dlg"));
        Demo02_UI01_Dlg->resize(249, 77);
        pushBtnExit = new QPushButton(Demo02_UI01_Dlg);
        pushBtnExit->setObjectName(QString::fromUtf8("pushBtnExit"));
        pushBtnExit->setGeometry(QRect(70, 20, 121, 31));

        retranslateUi(Demo02_UI01_Dlg);
        QObject::connect(pushBtnExit, SIGNAL(clicked()), Demo02_UI01_Dlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(Demo02_UI01_Dlg);
    } // setupUi

    void retranslateUi(QDialog *Demo02_UI01_Dlg)
    {
        Demo02_UI01_Dlg->setWindowTitle(QApplication::translate("Demo02_UI01_Dlg", "Dialog", 0, QApplication::UnicodeUTF8));
        pushBtnExit->setText(QApplication::translate("Demo02_UI01_Dlg", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Demo02_UI01_Dlg: public Ui_Demo02_UI01_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO02_UI01_DLG_H
