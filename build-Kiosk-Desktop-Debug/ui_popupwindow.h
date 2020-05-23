/********************************************************************************
** Form generated from reading UI file 'popupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPWINDOW_H
#define UI_POPUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "mymenu.h"

QT_BEGIN_NAMESPACE

class Ui_popupwindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QPushButton *setbutton;
    QPushButton *singlebutton;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    MyMenu *pmenu_4;
    MyMenu *pmenu_6;
    MyMenu *pmenu_5;
    MyMenu *pmenu_1;
    MyMenu *pmenu_2;
    MyMenu *pmenu_3;
    QWidget *page_3;

    void setupUi(QWidget *popupwindow)
    {
        if (popupwindow->objectName().isEmpty())
            popupwindow->setObjectName(QStringLiteral("popupwindow"));
        popupwindow->resize(900, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(popupwindow->sizePolicy().hasHeightForWidth());
        popupwindow->setSizePolicy(sizePolicy);
        popupwindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 247, 0);"));
        gridLayout = new QGridLayout(popupwindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(popupwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(popupwindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        setbutton = new QPushButton(page);
        setbutton->setObjectName(QStringLiteral("setbutton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setbutton->sizePolicy().hasHeightForWidth());
        setbutton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(setbutton, 1, 1, 1, 1);

        singlebutton = new QPushButton(page);
        singlebutton->setObjectName(QStringLiteral("singlebutton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(singlebutton->sizePolicy().hasHeightForWidth());
        singlebutton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(singlebutton, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pmenu_4 = new MyMenu(page_2);
        pmenu_4->setObjectName(QStringLiteral("pmenu_4"));

        gridLayout_3->addWidget(pmenu_4, 1, 0, 1, 1);

        pmenu_6 = new MyMenu(page_2);
        pmenu_6->setObjectName(QStringLiteral("pmenu_6"));

        gridLayout_3->addWidget(pmenu_6, 1, 2, 1, 1);

        pmenu_5 = new MyMenu(page_2);
        pmenu_5->setObjectName(QStringLiteral("pmenu_5"));

        gridLayout_3->addWidget(pmenu_5, 1, 1, 1, 1);

        pmenu_1 = new MyMenu(page_2);
        pmenu_1->setObjectName(QStringLiteral("pmenu_1"));

        gridLayout_3->addWidget(pmenu_1, 0, 0, 1, 1);

        pmenu_2 = new MyMenu(page_2);
        pmenu_2->setObjectName(QStringLiteral("pmenu_2"));

        gridLayout_3->addWidget(pmenu_2, 0, 1, 1, 1);

        pmenu_3 = new MyMenu(page_2);
        pmenu_3->setObjectName(QStringLiteral("pmenu_3"));

        gridLayout_3->addWidget(pmenu_3, 0, 2, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(popupwindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(popupwindow);
    } // setupUi

    void retranslateUi(QWidget *popupwindow)
    {
        popupwindow->setWindowTitle(QApplication::translate("popupwindow", "Form", nullptr));
        label->setText(QApplication::translate("popupwindow", "TextLabel", nullptr));
        setbutton->setText(QApplication::translate("popupwindow", "\354\204\270\355\212\270", nullptr));
        singlebutton->setText(QApplication::translate("popupwindow", "\353\213\250\355\222\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popupwindow: public Ui_popupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPWINDOW_H
