/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(495, 327);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(12);
        Dialog->setFont(font);
        Dialog->setStyleSheet(QString::fromUtf8("QComboBox::drop-down{\n"
"	image: url(:/images/images/down.bmp);\n"
"}\n"
"\n"
"QSpinBox::up-button{\n"
"	image: url(:/images/images/up.bmp);\n"
"}\n"
"\n"
"QSpinBox::down-button{\n"
"	image: url(:/images/images/down.bmp);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked{\n"
" image: url(:/images/images/checked.bmp);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked{\n"
"image: url(:/images/images/unchecked.bmp);\n"
"}\n"
""));
        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(105, 105, 106, 26));
        QFont font1;
        font1.setPointSize(10);
        comboBox->setFont(font1);
        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(235, 105, 91, 26));
        spinBox->setFont(font1);
        spinBox->setMaximum(1000);
        spinBox->setValue(100);
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(115, 200, 86, 24));
        QFont font2;
        font2.setPointSize(11);
        checkBox->setFont(font2);
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(Dialog);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(220, 200, 103, 20));
        checkBox_2->setFont(font2);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "New Item", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "New Item", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "New Item", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Dialog", "New Item", nullptr));

        checkBox->setText(QCoreApplication::translate("Dialog", "Checked", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dialog", "Unchecked", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
