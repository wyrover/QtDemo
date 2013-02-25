/********************************************************************************
** Form generated from reading UI file 'Demo05_UI01_Dlg.ui'
**
** Created: Fri Aug 3 17:32:04 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO05_UI01_DLG_H
#define UI_DEMO05_UI01_DLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Demo05_UI01_Dlg
{
public:
    QPushButton *pushBtnExit;

    void setupUi(QDialog *Demo05_UI01_Dlg)
    {
        if (Demo05_UI01_Dlg->objectName().isEmpty())
            Demo05_UI01_Dlg->setObjectName(QString::fromUtf8("Demo05_UI01_Dlg"));
        Demo05_UI01_Dlg->resize(206, 74);
        pushBtnExit = new QPushButton(Demo05_UI01_Dlg);
        pushBtnExit->setObjectName(QString::fromUtf8("pushBtnExit"));
        pushBtnExit->setGeometry(QRect(40, 20, 121, 31));

        retranslateUi(Demo05_UI01_Dlg);
        QObject::connect(pushBtnExit, SIGNAL(clicked()), Demo05_UI01_Dlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(Demo05_UI01_Dlg);
    } // setupUi

    void retranslateUi(QDialog *Demo05_UI01_Dlg)
    {
        Demo05_UI01_Dlg->setWindowTitle(QApplication::translate("Demo05_UI01_Dlg", "Dialog", 0, QApplication::UnicodeUTF8));
        pushBtnExit->setText(QApplication::translate("Demo05_UI01_Dlg", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Demo05_UI01_Dlg: public Ui_Demo05_UI01_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO05_UI01_DLG_H
