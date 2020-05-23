/********************************************************************************
** Form generated from reading UI file 'mymenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMENU_H
#define UI_MYMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMenu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *MyMenu)
    {
        if (MyMenu->objectName().isEmpty())
            MyMenu->setObjectName(QStringLiteral("MyMenu"));
        MyMenu->resize(400, 300);
        MyMenu->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(MyMenu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MyMenu);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QStringLiteral("border : 0px solid black;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(MyMenu);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("border : 0px solid black;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(10);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(MyMenu);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("border : 0px solid black;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(10);

        verticalLayout->addWidget(label_3);


        retranslateUi(MyMenu);

        QMetaObject::connectSlotsByName(MyMenu);
    } // setupUi

    void retranslateUi(QWidget *MyMenu)
    {
        MyMenu->setWindowTitle(QApplication::translate("MyMenu", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyMenu: public Ui_MyMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMENU_H
