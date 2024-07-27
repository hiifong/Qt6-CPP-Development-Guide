/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_Font;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox_Color;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnExit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(370, 248);
        QFont font;
        font.setPointSize(10);
        Dialog->setFont(font);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_Font = new QGroupBox(Dialog);
        groupBox_Font->setObjectName("groupBox_Font");
        horizontalLayout = new QHBoxLayout(groupBox_Font);
        horizontalLayout->setObjectName("horizontalLayout");
        chkBoxUnder = new QCheckBox(groupBox_Font);
        chkBoxUnder->setObjectName("chkBoxUnder");

        horizontalLayout->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(groupBox_Font);
        chkBoxItalic->setObjectName("chkBoxItalic");

        horizontalLayout->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(groupBox_Font);
        chkBoxBold->setObjectName("chkBoxBold");

        horizontalLayout->addWidget(chkBoxBold);


        verticalLayout->addWidget(groupBox_Font);

        groupBox_Color = new QGroupBox(Dialog);
        groupBox_Color->setObjectName("groupBox_Color");
        horizontalLayout_2 = new QHBoxLayout(groupBox_Color);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioBlack = new QRadioButton(groupBox_Color);
        radioBlack->setObjectName("radioBlack");
        radioBlack->setChecked(true);

        horizontalLayout_2->addWidget(radioBlack);

        radioRed = new QRadioButton(groupBox_Color);
        radioRed->setObjectName("radioRed");

        horizontalLayout_2->addWidget(radioRed);

        radioBlue = new QRadioButton(groupBox_Color);
        radioBlue->setObjectName("radioBlue");

        horizontalLayout_2->addWidget(radioBlue);


        verticalLayout->addWidget(groupBox_Color);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font1;
        font1.setPointSize(20);
        plainTextEdit->setFont(font1);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(-1, 5, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName("btnClear");

        horizontalLayout_3->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName("btnOK");

        horizontalLayout_3->addWidget(btnOK);

        btnExit = new QPushButton(Dialog);
        btnExit->setObjectName("btnExit");

        horizontalLayout_3->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Dialog);
        QObject::connect(btnExit, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));
        QObject::connect(btnOK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "CMake\346\236\204\345\273\272", nullptr));
        groupBox_Font->setTitle(QString());
        chkBoxUnder->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        chkBoxItalic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        chkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        groupBox_Color->setTitle(QString());
        radioBlack->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        radioRed->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        radioBlue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "\347\224\261CMake\346\236\204\345\273\272", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btnExit->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
