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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mymenu.h"

QT_BEGIN_NAMESPACE

class Ui_popup
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QPushButton *setbutton;
    QPushButton *singlebutton;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    MyMenu *pmenu_4;
    MyMenu *pmenu_6;
    MyMenu *pmenu_5;
    MyMenu *pmenu_1;
    MyMenu *pmenu_2;
    MyMenu *pmenu_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    MyMenu *checkmenu_1;
    MyMenu *checkmenu_2;
    MyMenu *checkmenu_3;
    QLabel *label_2;
    QStackedWidget *selectCount;
    QWidget *page_7;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *minusButton;
    QLabel *countLabel;
    QPushButton *plusButton;
    QWidget *page_8;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *count1button;
    QPushButton *count2button;
    QPushButton *count3button;
    QPushButton *count4button;
    QPushButton *count5button;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *rightbutton;
    QPushButton *rollbackbutton;
    QWidget *page_4;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QPushButton *okbutton;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *ordercancel;

    void setupUi(QWidget *popup)
    {
        if (popup->objectName().isEmpty())
            popup->setObjectName(QStringLiteral("popup"));
        popup->resize(800, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(popup->sizePolicy().hasHeightForWidth());
        popup->setSizePolicy(sizePolicy);
        popup->setStyleSheet(QStringLiteral("background-color:beige;"));
        gridLayout = new QGridLayout(popup);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(popup);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(popup);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        setbutton = new QPushButton(page);
        setbutton->setObjectName(QStringLiteral("setbutton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setbutton->sizePolicy().hasHeightForWidth());
        setbutton->setSizePolicy(sizePolicy1);
        setbutton->setMinimumSize(QSize(0, 500));

        gridLayout_2->addWidget(setbutton, 1, 1, 1, 1);

        singlebutton = new QPushButton(page);
        singlebutton->setObjectName(QStringLiteral("singlebutton"));
        sizePolicy1.setHeightForWidth(singlebutton->sizePolicy().hasHeightForWidth());
        singlebutton->setSizePolicy(sizePolicy1);
        singlebutton->setMinimumSize(QSize(0, 500));

        gridLayout_2->addWidget(singlebutton, 1, 0, 1, 1);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 1, 1, 1);

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
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkmenu_1 = new MyMenu(page_3);
        checkmenu_1->setObjectName(QStringLiteral("checkmenu_1"));

        horizontalLayout->addWidget(checkmenu_1);

        checkmenu_2 = new MyMenu(page_3);
        checkmenu_2->setObjectName(QStringLiteral("checkmenu_2"));

        horizontalLayout->addWidget(checkmenu_2);

        checkmenu_3 = new MyMenu(page_3);
        checkmenu_3->setObjectName(QStringLiteral("checkmenu_3"));

        horizontalLayout->addWidget(checkmenu_3);


        verticalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        selectCount = new QStackedWidget(page_3);
        selectCount->setObjectName(QStringLiteral("selectCount"));
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        gridLayout_4 = new QGridLayout(page_7);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minusButton = new QPushButton(page_7);
        minusButton->setObjectName(QStringLiteral("minusButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(minusButton->sizePolicy().hasHeightForWidth());
        minusButton->setSizePolicy(sizePolicy3);
        minusButton->setMinimumSize(QSize(50, 50));
        minusButton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/minusicon.png\")\n"
""));

        horizontalLayout_2->addWidget(minusButton);

        countLabel = new QLabel(page_7);
        countLabel->setObjectName(QStringLiteral("countLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(countLabel->sizePolicy().hasHeightForWidth());
        countLabel->setSizePolicy(sizePolicy4);
        countLabel->setMinimumSize(QSize(30, 0));
        countLabel->setFont(font);
        countLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(countLabel);

        plusButton = new QPushButton(page_7);
        plusButton->setObjectName(QStringLiteral("plusButton"));
        sizePolicy3.setHeightForWidth(plusButton->sizePolicy().hasHeightForWidth());
        plusButton->setSizePolicy(sizePolicy3);
        plusButton->setMinimumSize(QSize(50, 50));
        plusButton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/plusicon.png\")\n"
""));

        horizontalLayout_2->addWidget(plusButton);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        selectCount->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        horizontalLayout_4 = new QHBoxLayout(page_8);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        count1button = new QPushButton(page_8);
        count1button->setObjectName(QStringLiteral("count1button"));
        count1button->setStyleSheet(QLatin1String("background-color: white;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"padding: 6px;\n"
"color:black;\n"
"border: 2px solid black;\n"
"font: 75 28pt \"PibotoLt\";"));

        horizontalLayout_4->addWidget(count1button);

        count2button = new QPushButton(page_8);
        count2button->setObjectName(QStringLiteral("count2button"));
        count2button->setStyleSheet(QLatin1String("background-color: white;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"padding: 6px;\n"
"color:black;\n"
"border: 2px solid black;\n"
"font: 75 28pt \"PibotoLt\";"));

        horizontalLayout_4->addWidget(count2button);

        count3button = new QPushButton(page_8);
        count3button->setObjectName(QStringLiteral("count3button"));
        count3button->setStyleSheet(QLatin1String("background-color: white;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"padding: 6px;\n"
"color:black;\n"
"border: 2px solid black;\n"
"font: 75 28pt \"PibotoLt\";"));

        horizontalLayout_4->addWidget(count3button);

        count4button = new QPushButton(page_8);
        count4button->setObjectName(QStringLiteral("count4button"));
        count4button->setStyleSheet(QLatin1String("background-color: white;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"padding: 6px;\n"
"color:black;\n"
"border: 2px solid black;\n"
"font: 75 28pt \"PibotoLt\";"));

        horizontalLayout_4->addWidget(count4button);

        count5button = new QPushButton(page_8);
        count5button->setObjectName(QStringLiteral("count5button"));
        count5button->setStyleSheet(QLatin1String("background-color: white;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"padding: 6px;\n"
"color:black;\n"
"border: 2px solid black;\n"
"font: 75 28pt \"PibotoLt\";"));

        horizontalLayout_4->addWidget(count5button);

        selectCount->addWidget(page_8);

        verticalLayout_2->addWidget(selectCount);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rightbutton = new QPushButton(page_3);
        rightbutton->setObjectName(QStringLiteral("rightbutton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(rightbutton->sizePolicy().hasHeightForWidth());
        rightbutton->setSizePolicy(sizePolicy5);
        rightbutton->setMinimumSize(QSize(282, 20));
        rightbutton->setStyleSheet(QLatin1String("background-color: green;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_3->addWidget(rightbutton);

        rollbackbutton = new QPushButton(page_3);
        rollbackbutton->setObjectName(QStringLiteral("rollbackbutton"));
        sizePolicy5.setHeightForWidth(rollbackbutton->sizePolicy().hasHeightForWidth());
        rollbackbutton->setSizePolicy(sizePolicy5);
        rollbackbutton->setMinimumSize(QSize(282, 20));
        rollbackbutton->setStyleSheet(QLatin1String("background-color: red;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_3->addWidget(rollbackbutton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_5 = new QGridLayout(page_4);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 2);

        okbutton = new QPushButton(page_4);
        okbutton->setObjectName(QStringLiteral("okbutton"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        okbutton->setFont(font1);
        okbutton->setStyleSheet(QLatin1String("background-color: green;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"color:white;"));

        gridLayout_5->addWidget(okbutton, 1, 0, 1, 2);

        stackedWidget->addWidget(page_4);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        ordercancel = new QPushButton(popup);
        ordercancel->setObjectName(QStringLiteral("ordercancel"));
        ordercancel->setStyleSheet(QLatin1String("background-color: red;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 5em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_5->addWidget(ordercancel);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        retranslateUi(popup);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(popup);
    } // setupUi

    void retranslateUi(QWidget *popup)
    {
        popup->setWindowTitle(QApplication::translate("popup", "Form", nullptr));
        label->setText(QApplication::translate("popup", "TextLabel", nullptr));
        setbutton->setText(QString());
        singlebutton->setText(QString());
        label_4->setText(QApplication::translate("popup", "\353\213\250\355\222\210", nullptr));
        label_5->setText(QApplication::translate("popup", "\354\204\270\355\212\270", nullptr));
        label_2->setText(QApplication::translate("popup", "\354\210\230\353\237\211 \354\204\240\355\203\235", nullptr));
        minusButton->setText(QString());
        countLabel->setText(QApplication::translate("popup", "1", nullptr));
        plusButton->setText(QString());
        count1button->setText(QApplication::translate("popup", "1\352\260\234", nullptr));
        count2button->setText(QApplication::translate("popup", "2\352\260\234", nullptr));
        count3button->setText(QApplication::translate("popup", "3\352\260\234", nullptr));
        count4button->setText(QApplication::translate("popup", "4\352\260\234", nullptr));
        count5button->setText(QApplication::translate("popup", "5\352\260\234", nullptr));
        rightbutton->setText(QApplication::translate("popup", "\353\247\236\354\225\204\354\232\224", nullptr));
        rollbackbutton->setText(QApplication::translate("popup", "\353\213\244\354\213\234 \354\204\240\355\203\235", nullptr));
        label_3->setText(QApplication::translate("popup", "\354\243\274\353\254\270 \353\202\264\354\227\255\354\235\200 5\352\260\234\353\245\274 \353\204\230\352\270\270 \354\210\230 \354\227\206\354\212\265\353\213\210\353\213\244.", nullptr));
        okbutton->setText(QApplication::translate("popup", "\354\225\214\352\262\240\354\212\265\353\213\210\353\213\244", nullptr));
        ordercancel->setText(QApplication::translate("popup", "\354\243\274\353\254\270 \354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popup: public Ui_popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
