/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "mymenu.h"

QT_BEGIN_NAMESPACE

class Ui_popup
{
public:
    QGridLayout *gridLayout;
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
    QGridLayout *gridLayout_4;
    MyMenu *checkmenu_3;
    MyMenu *checkmenu_2;
    QPushButton *rightbutton;
    QPushButton *rollbackbutton;
    MyMenu *checkmenu_1;
    QWidget *page_4;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QPushButton *okbutton;
    QLabel *label;

    void setupUi(QWidget *popup)
    {
        if (popup->objectName().isEmpty())
            popup->setObjectName(QStringLiteral("popup"));
        popup->resize(800, 751);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(popup->sizePolicy().hasHeightForWidth());
        popup->setSizePolicy(sizePolicy);
        popup->setStyleSheet(QStringLiteral("background-color: rgb(255, 247, 0);"));
        gridLayout = new QGridLayout(popup);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(popup);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        setbutton = new QPushButton(page);
        setbutton->setObjectName(QStringLiteral("setbutton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setbutton->sizePolicy().hasHeightForWidth());
        setbutton->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(setbutton, 1, 1, 1, 1);

        singlebutton = new QPushButton(page);
        singlebutton->setObjectName(QStringLiteral("singlebutton"));
        sizePolicy1.setHeightForWidth(singlebutton->sizePolicy().hasHeightForWidth());
        singlebutton->setSizePolicy(sizePolicy1);

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
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        checkmenu_3 = new MyMenu(page_3);
        checkmenu_3->setObjectName(QStringLiteral("checkmenu_3"));

        gridLayout_4->addWidget(checkmenu_3, 0, 3, 1, 1);

        checkmenu_2 = new MyMenu(page_3);
        checkmenu_2->setObjectName(QStringLiteral("checkmenu_2"));

        gridLayout_4->addWidget(checkmenu_2, 0, 0, 1, 1);

        rightbutton = new QPushButton(page_3);
        rightbutton->setObjectName(QStringLiteral("rightbutton"));

        gridLayout_4->addWidget(rightbutton, 1, 0, 1, 2);

        rollbackbutton = new QPushButton(page_3);
        rollbackbutton->setObjectName(QStringLiteral("rollbackbutton"));

        gridLayout_4->addWidget(rollbackbutton, 1, 2, 1, 2);

        checkmenu_1 = new MyMenu(page_3);
        checkmenu_1->setObjectName(QStringLiteral("checkmenu_1"));

        gridLayout_4->addWidget(checkmenu_1, 0, 1, 1, 2);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 2);

        okbutton = new QPushButton(page_4);
        okbutton->setObjectName(QStringLiteral("okbutton"));
        QFont font1;
        font1.setPointSize(15);
        okbutton->setFont(font1);

        gridLayout_5->addWidget(okbutton, 1, 0, 1, 2);

        stackedWidget->addWidget(page_4);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);

        label = new QLabel(popup);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(popup);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(popup);
    } // setupUi

    void retranslateUi(QWidget *popup)
    {
        popup->setWindowTitle(QApplication::translate("popup", "Form", nullptr));
        setbutton->setText(QApplication::translate("popup", "\354\204\270\355\212\270", nullptr));
        singlebutton->setText(QApplication::translate("popup", "\353\213\250\355\222\210", nullptr));
        rightbutton->setText(QApplication::translate("popup", "\353\247\236\354\225\204\354\232\224", nullptr));
        rollbackbutton->setText(QApplication::translate("popup", "\353\213\244\354\213\234 \352\263\240\353\245\274\353\236\230", nullptr));
        label_3->setText(QApplication::translate("popup", "\354\243\274\353\254\270 \353\202\264\354\227\255\354\235\200 5\352\260\234\353\245\274 \353\204\230\352\270\270 \354\210\230 \354\227\206\354\212\265\353\213\210\353\213\244.", nullptr));
        okbutton->setText(QApplication::translate("popup", "\354\225\214\352\262\240\354\212\265\353\213\210\353\213\244", nullptr));
        label->setText(QApplication::translate("popup", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popup: public Ui_popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
