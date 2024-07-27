/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(375, 238);
        Widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(0, 85, 127);\n"
"	color: rgb(255, 255, 0);\n"
"	font: 14pt \"\351\273\221\344\275\223\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"     border: 2px groove gray;\n"
"     border-radius: 10px;\n"
"     padding: 2px 4px;\n"
" 	 color: rgb(255, 255, 0);\n"
"     border-color: rgb(0,255,0);\n"
"}"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(105, 55, 156, 41));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(105, 125, 156, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "Hello", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Widget", "Qt\346\240\267\345\274\217\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
