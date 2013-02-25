/********************************************************************************
** Form generated from reading UI file 'Demo04_UI01_Dlg.ui'
**
** Created: Fri Aug 3 17:32:04 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO04_UI01_DLG_H
#define UI_DEMO04_UI01_DLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Demo04_UI01_Dlg
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *primaryGroupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *primaryColumnComboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *primaryOrderComboBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *secondaryGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QComboBox *secondaryColumnComboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QComboBox *secondaryOrderComboBox;
    QGroupBox *tertiaryGroupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QComboBox *tertiaryColumnComboBox;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_8;
    QComboBox *tertiaryOrderComboBox;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;

    void setupUi(QDialog *Demo04_UI01_Dlg)
    {
        if (Demo04_UI01_Dlg->objectName().isEmpty())
            Demo04_UI01_Dlg->setObjectName(QString::fromUtf8("Demo04_UI01_Dlg"));
        Demo04_UI01_Dlg->resize(307, 275);
        gridLayout_5 = new QGridLayout(Demo04_UI01_Dlg);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        primaryGroupBox = new QGroupBox(Demo04_UI01_Dlg);
        primaryGroupBox->setObjectName(QString::fromUtf8("primaryGroupBox"));
        gridLayout = new QGridLayout(primaryGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(primaryGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        primaryColumnComboBox = new QComboBox(primaryGroupBox);
        primaryColumnComboBox->setObjectName(QString::fromUtf8("primaryColumnComboBox"));

        gridLayout->addWidget(primaryColumnComboBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_2 = new QLabel(primaryGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        primaryOrderComboBox = new QComboBox(primaryGroupBox);
        primaryOrderComboBox->setObjectName(QString::fromUtf8("primaryOrderComboBox"));

        gridLayout->addWidget(primaryOrderComboBox, 1, 1, 1, 2);


        gridLayout_5->addWidget(primaryGroupBox, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(Demo04_UI01_Dlg);
        secondaryGroupBox->setObjectName(QString::fromUtf8("secondaryGroupBox"));
        gridLayout_2 = new QGridLayout(secondaryGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(secondaryGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        secondaryColumnComboBox = new QComboBox(secondaryGroupBox);
        secondaryColumnComboBox->setObjectName(QString::fromUtf8("secondaryColumnComboBox"));

        gridLayout_2->addWidget(secondaryColumnComboBox, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        label_4 = new QLabel(secondaryGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        secondaryOrderComboBox = new QComboBox(secondaryGroupBox);
        secondaryOrderComboBox->setObjectName(QString::fromUtf8("secondaryOrderComboBox"));

        gridLayout_2->addWidget(secondaryOrderComboBox, 1, 1, 1, 2);


        gridLayout_5->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(Demo04_UI01_Dlg);
        tertiaryGroupBox->setObjectName(QString::fromUtf8("tertiaryGroupBox"));
        gridLayout_4 = new QGridLayout(tertiaryGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_7 = new QLabel(tertiaryGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 0, 1, 1);

        tertiaryColumnComboBox = new QComboBox(tertiaryGroupBox);
        tertiaryColumnComboBox->setObjectName(QString::fromUtf8("tertiaryColumnComboBox"));

        gridLayout_4->addWidget(tertiaryColumnComboBox, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(56, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        label_8 = new QLabel(tertiaryGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        tertiaryOrderComboBox = new QComboBox(tertiaryGroupBox);
        tertiaryOrderComboBox->setObjectName(QString::fromUtf8("tertiaryOrderComboBox"));

        gridLayout_4->addWidget(tertiaryOrderComboBox, 1, 1, 1, 2);


        gridLayout_5->addWidget(tertiaryGroupBox, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        okButton = new QPushButton(Demo04_UI01_Dlg);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        verticalLayout->addWidget(okButton);

        cancelButton = new QPushButton(Demo04_UI01_Dlg);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        moreButton = new QPushButton(Demo04_UI01_Dlg);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));
        moreButton->setCheckable(true);

        verticalLayout->addWidget(moreButton);


        gridLayout_5->addLayout(verticalLayout, 0, 1, 2, 1);

        primaryGroupBox->raise();
        secondaryGroupBox->raise();
        tertiaryGroupBox->raise();
        QWidget::setTabOrder(primaryColumnComboBox, primaryOrderComboBox);
        QWidget::setTabOrder(primaryOrderComboBox, secondaryColumnComboBox);
        QWidget::setTabOrder(secondaryColumnComboBox, secondaryOrderComboBox);
        QWidget::setTabOrder(secondaryOrderComboBox, tertiaryColumnComboBox);
        QWidget::setTabOrder(tertiaryColumnComboBox, tertiaryOrderComboBox);
        QWidget::setTabOrder(tertiaryOrderComboBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(Demo04_UI01_Dlg);
        QObject::connect(okButton, SIGNAL(clicked()), Demo04_UI01_Dlg, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Demo04_UI01_Dlg, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(Demo04_UI01_Dlg);
    } // setupUi

    void retranslateUi(QDialog *Demo04_UI01_Dlg)
    {
        Demo04_UI01_Dlg->setWindowTitle(QApplication::translate("Demo04_UI01_Dlg", "Dialog", 0, QApplication::UnicodeUTF8));
        primaryGroupBox->setTitle(QApplication::translate("Demo04_UI01_Dlg", "&Primary Key", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Demo04_UI01_Dlg", "Column:", 0, QApplication::UnicodeUTF8));
        primaryColumnComboBox->clear();
        primaryColumnComboBox->insertItems(0, QStringList()
         << QApplication::translate("Demo04_UI01_Dlg", "None", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Demo04_UI01_Dlg", "Order:", 0, QApplication::UnicodeUTF8));
        primaryOrderComboBox->clear();
        primaryOrderComboBox->insertItems(0, QStringList()
         << QApplication::translate("Demo04_UI01_Dlg", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Demo04_UI01_Dlg", "Descending", 0, QApplication::UnicodeUTF8)
        );
        secondaryGroupBox->setTitle(QApplication::translate("Demo04_UI01_Dlg", "&Secondary Key", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Demo04_UI01_Dlg", "Column:", 0, QApplication::UnicodeUTF8));
        secondaryColumnComboBox->clear();
        secondaryColumnComboBox->insertItems(0, QStringList()
         << QApplication::translate("Demo04_UI01_Dlg", "None", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("Demo04_UI01_Dlg", "Order:", 0, QApplication::UnicodeUTF8));
        secondaryOrderComboBox->clear();
        secondaryOrderComboBox->insertItems(0, QStringList()
         << QApplication::translate("Demo04_UI01_Dlg", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Demo04_UI01_Dlg", "Descending", 0, QApplication::UnicodeUTF8)
        );
        tertiaryGroupBox->setTitle(QApplication::translate("Demo04_UI01_Dlg", "&Tertiary Key", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Demo04_UI01_Dlg", "Column:", 0, QApplication::UnicodeUTF8));
        tertiaryColumnComboBox->clear();
        tertiaryColumnComboBox->insertItems(0, QStringList()
         << QApplication::translate("Demo04_UI01_Dlg", "None", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("Demo04_UI01_Dlg", "Order:", 0, QApplication::UnicodeUTF8));
        tertiaryOrderComboBox->clear();
        tertiaryOrderComboBox->insertItems(0, QStringList()
         << QApplication::translate("Demo04_UI01_Dlg", "Ascending", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Demo04_UI01_Dlg", "Descending", 0, QApplication::UnicodeUTF8)
        );
        okButton->setText(QApplication::translate("Demo04_UI01_Dlg", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Demo04_UI01_Dlg", "Cancel", 0, QApplication::UnicodeUTF8));
        moreButton->setText(QApplication::translate("Demo04_UI01_Dlg", "&More", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Demo04_UI01_Dlg: public Ui_Demo04_UI01_Dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO04_UI01_DLG_H
