/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *menuimage;
    QLabel *menuname;
    QLabel *menuprice;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(400, 300);
        Form->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(Form);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        menuimage = new QLabel(Form);
        menuimage->setObjectName(QStringLiteral("menuimage"));

        verticalLayout->addWidget(menuimage);

        menuname = new QLabel(Form);
        menuname->setObjectName(QStringLiteral("menuname"));

        verticalLayout->addWidget(menuname);

        menuprice = new QLabel(Form);
        menuprice->setObjectName(QStringLiteral("menuprice"));

        verticalLayout->addWidget(menuprice);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        menuimage->setText(QApplication::translate("Form", "\354\235\264\353\257\270\354\247\200", nullptr));
        menuname->setText(QApplication::translate("Form", "\354\235\264\353\246\204", nullptr));
        menuprice->setText(QApplication::translate("Form", "\352\260\200\352\262\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
