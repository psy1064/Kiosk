/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mymenu.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *loading;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *young;
    QWidget *middle;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *main_logo;
    QLabel *label_5;
    QPushButton *finishButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *hambugerpushbutton;
    QPushButton *sidepushbutton;
    QPushButton *beveragepushbutton;
    QGridLayout *gridLayout_3;
    MyMenu *mid_menu_4;
    MyMenu *mid_menu_2;
    MyMenu *mid_menu_3;
    MyMenu *mid_menu_1;
    MyMenu *mid_menu_5;
    MyMenu *mid_menu_6;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *basketlayout;
    QSpacerItem *verticalSpacer;
    QWidget *old;
    QWidget *checkpage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QVBoxLayout *checklayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *pricelabel;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *showkakaobutton;
    QPushButton *returnbutton;
    QWidget *finish;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLabel *ordernumber;
    QLabel *callannounce;
    QLabel *countlabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(660, 968);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        loading = new QWidget();
        loading->setObjectName(QStringLiteral("loading"));
        verticalLayout = new QVBoxLayout(loading);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(loading);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFrameShape(QFrame::NoFrame);
        label->setPixmap(QPixmap(QString::fromUtf8("../image/dju_logo.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(loading);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setFrameShape(QFrame::NoFrame);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(48);

        verticalLayout->addWidget(label_2);

        stackedWidget->addWidget(loading);
        young = new QWidget();
        young->setObjectName(QStringLiteral("young"));
        stackedWidget->addWidget(young);
        middle = new QWidget();
        middle->setObjectName(QStringLiteral("middle"));
        gridLayout_2 = new QGridLayout(middle);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        main_logo = new QLabel(middle);
        main_logo->setObjectName(QStringLiteral("main_logo"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(main_logo->sizePolicy().hasHeightForWidth());
        main_logo->setSizePolicy(sizePolicy3);
        main_logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(main_logo);

        label_5 = new QLabel(middle);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        finishButton = new QPushButton(middle);
        finishButton->setObjectName(QStringLiteral("finishButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(finishButton->sizePolicy().hasHeightForWidth());
        finishButton->setSizePolicy(sizePolicy5);
        finishButton->setStyleSheet(QLatin1String("background-color: green;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 3em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_2->addWidget(finishButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(70);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(-1, 70, -1, 70);
        hambugerpushbutton = new QPushButton(middle);
        hambugerpushbutton->setObjectName(QStringLiteral("hambugerpushbutton"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(hambugerpushbutton->sizePolicy().hasHeightForWidth());
        hambugerpushbutton->setSizePolicy(sizePolicy6);
        hambugerpushbutton->setMinimumSize(QSize(200, 0));
        hambugerpushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/hambugerButton.png\"); \n"
""));

        verticalLayout_3->addWidget(hambugerpushbutton);

        sidepushbutton = new QPushButton(middle);
        sidepushbutton->setObjectName(QStringLiteral("sidepushbutton"));
        sizePolicy6.setHeightForWidth(sidepushbutton->sizePolicy().hasHeightForWidth());
        sidepushbutton->setSizePolicy(sizePolicy6);
        sidepushbutton->setMinimumSize(QSize(0, 0));
        sidepushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/sideMenuButton.png\"); \n"
""));

        verticalLayout_3->addWidget(sidepushbutton);

        beveragepushbutton = new QPushButton(middle);
        beveragepushbutton->setObjectName(QStringLiteral("beveragepushbutton"));
        sizePolicy6.setHeightForWidth(beveragepushbutton->sizePolicy().hasHeightForWidth());
        beveragepushbutton->setSizePolicy(sizePolicy6);
        beveragepushbutton->setMinimumSize(QSize(0, 0));
        beveragepushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/beverageButton.png\"); \n"
""));

        verticalLayout_3->addWidget(beveragepushbutton);


        horizontalLayout->addLayout(verticalLayout_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        mid_menu_4 = new MyMenu(middle);
        mid_menu_4->setObjectName(QStringLiteral("mid_menu_4"));
        sizePolicy6.setHeightForWidth(mid_menu_4->sizePolicy().hasHeightForWidth());
        mid_menu_4->setSizePolicy(sizePolicy6);
        mid_menu_4->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(mid_menu_4, 1, 0, 1, 1);

        mid_menu_2 = new MyMenu(middle);
        mid_menu_2->setObjectName(QStringLiteral("mid_menu_2"));
        sizePolicy6.setHeightForWidth(mid_menu_2->sizePolicy().hasHeightForWidth());
        mid_menu_2->setSizePolicy(sizePolicy6);
        mid_menu_2->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(mid_menu_2, 0, 2, 1, 1);

        mid_menu_3 = new MyMenu(middle);
        mid_menu_3->setObjectName(QStringLiteral("mid_menu_3"));
        sizePolicy6.setHeightForWidth(mid_menu_3->sizePolicy().hasHeightForWidth());
        mid_menu_3->setSizePolicy(sizePolicy6);
        mid_menu_3->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(mid_menu_3, 1, 2, 1, 1);

        mid_menu_1 = new MyMenu(middle);
        mid_menu_1->setObjectName(QStringLiteral("mid_menu_1"));
        sizePolicy6.setHeightForWidth(mid_menu_1->sizePolicy().hasHeightForWidth());
        mid_menu_1->setSizePolicy(sizePolicy6);
        mid_menu_1->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(mid_menu_1, 0, 0, 1, 1);

        mid_menu_5 = new MyMenu(middle);
        mid_menu_5->setObjectName(QStringLiteral("mid_menu_5"));
        sizePolicy6.setHeightForWidth(mid_menu_5->sizePolicy().hasHeightForWidth());
        mid_menu_5->setSizePolicy(sizePolicy6);
        mid_menu_5->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(mid_menu_5, 2, 0, 1, 1);

        mid_menu_6 = new MyMenu(middle);
        mid_menu_6->setObjectName(QStringLiteral("mid_menu_6"));
        sizePolicy6.setHeightForWidth(mid_menu_6->sizePolicy().hasHeightForWidth());
        mid_menu_6->setSizePolicy(sizePolicy6);
        mid_menu_6->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(mid_menu_6, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);


        verticalLayout_2->addLayout(horizontalLayout);

        label_4 = new QLabel(middle);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy7);
        QFont font2;
        font2.setPointSize(24);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("background : green;"));

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        basketlayout = new QVBoxLayout();
        basketlayout->setSpacing(0);
        basketlayout->setObjectName(QStringLiteral("basketlayout"));
        basketlayout->setContentsMargins(-1, -1, -1, 380);

        horizontalLayout_3->addLayout(basketlayout);

        verticalSpacer = new QSpacerItem(1, 410, QSizePolicy::Minimum, QSizePolicy::Fixed);

        horizontalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        stackedWidget->addWidget(middle);
        old = new QWidget();
        old->setObjectName(QStringLiteral("old"));
        stackedWidget->addWidget(old);
        checkpage = new QWidget();
        checkpage->setObjectName(QStringLiteral("checkpage"));
        verticalLayout_4 = new QVBoxLayout(checkpage);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(checkpage);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy8);
        label_3->setMinimumSize(QSize(0, 100));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        pushButton = new QPushButton(checkpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy9);
        pushButton->setMinimumSize(QSize(93, 100));
        pushButton->setStyleSheet(QLatin1String("background-color: red;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 3em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_4);

        checklayout = new QVBoxLayout();
        checklayout->setSpacing(0);
        checklayout->setObjectName(QStringLiteral("checklayout"));
        checklayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addLayout(checklayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pricelabel = new QLabel(checkpage);
        pricelabel->setObjectName(QStringLiteral("pricelabel"));
        sizePolicy8.setHeightForWidth(pricelabel->sizePolicy().hasHeightForWidth());
        pricelabel->setSizePolicy(sizePolicy8);
        pricelabel->setMinimumSize(QSize(0, 100));
        pricelabel->setFont(font1);

        horizontalLayout_5->addWidget(pricelabel);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        showkakaobutton = new QPushButton(checkpage);
        showkakaobutton->setObjectName(QStringLiteral("showkakaobutton"));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        showkakaobutton->setFont(font3);
        showkakaobutton->setStyleSheet(QLatin1String("background-color: green;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_6->addWidget(showkakaobutton);

        returnbutton = new QPushButton(checkpage);
        returnbutton->setObjectName(QStringLiteral("returnbutton"));
        returnbutton->setFont(font3);
        returnbutton->setStyleSheet(QLatin1String("background-color: red;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 10em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_6->addWidget(returnbutton);


        verticalLayout_4->addLayout(horizontalLayout_6);

        stackedWidget->addWidget(checkpage);
        finish = new QWidget();
        finish->setObjectName(QStringLiteral("finish"));
        gridLayout_4 = new QGridLayout(finish);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_6 = new QLabel(finish);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy6.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy6);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        ordernumber = new QLabel(finish);
        ordernumber->setObjectName(QStringLiteral("ordernumber"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(ordernumber->sizePolicy().hasHeightForWidth());
        ordernumber->setSizePolicy(sizePolicy10);
        QFont font4;
        font4.setPointSize(30);
        ordernumber->setFont(font4);
        ordernumber->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(ordernumber, 2, 0, 1, 1);

        callannounce = new QLabel(finish);
        callannounce->setObjectName(QStringLiteral("callannounce"));
        sizePolicy5.setHeightForWidth(callannounce->sizePolicy().hasHeightForWidth());
        callannounce->setSizePolicy(sizePolicy5);
        callannounce->setFont(font1);
        callannounce->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(callannounce, 3, 0, 1, 1);

        countlabel = new QLabel(finish);
        countlabel->setObjectName(QStringLiteral("countlabel"));
        countlabel->setFont(font1);
        countlabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(countlabel, 4, 0, 1, 1);

        stackedWidget->addWidget(finish);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\353\247\244\354\236\245\354\227\220 \354\230\244\354\213\240\352\262\203\354\235\204 \355\231\230\354\230\201\355\225\251\353\213\210\353\213\244.", nullptr));
        main_logo->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\354\233\220\355\225\230\353\212\224 \354\235\214\354\213\235\354\235\204 \353\210\214\353\237\254\354\243\274\354\204\270\354\232\224", nullptr));
        finishButton->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270 \354\231\204\353\243\214", nullptr));
        hambugerpushbutton->setText(QString());
        sidepushbutton->setText(QString());
        beveragepushbutton->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270\353\202\264\354\227\255", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270\355\225\230\354\213\240 \354\235\214\354\213\235\354\235\264 \353\247\236\353\202\230\354\232\224?", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\353\213\253\352\270\260", nullptr));
        pricelabel->setText(QApplication::translate("MainWindow", "\354\264\235 \352\270\210\354\225\241 : ", nullptr));
        showkakaobutton->setText(QApplication::translate("MainWindow", "\353\247\236\354\212\265\353\213\210\353\213\244", nullptr));
        returnbutton->setText(QApplication::translate("MainWindow", "\353\213\244\354\213\234 \354\204\240\355\203\235", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270\354\235\264 \354\231\204\353\243\214\353\220\230\354\227\210\354\212\265\353\213\210\353\213\244!\n"
"\n"
"\n"
"\354\243\274\353\254\270\353\262\210\355\230\270\353\212\224", nullptr));
        ordernumber->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        callannounce->setText(QApplication::translate("MainWindow", "\353\262\210\354\236\205\353\213\210\353\213\244.\n"
"\n"
"\354\235\214\354\213\235\354\235\264 \354\231\204\353\243\214\353\220\230\353\251\264 \354\243\274\353\254\270\353\262\210\355\230\270\353\245\274 \353\266\210\353\237\254\353\223\234\353\246\254\352\262\240\354\212\265\353\213\210\353\213\244!", nullptr));
        countlabel->setText(QApplication::translate("MainWindow", "3 \354\264\210\353\222\244\354\227\220 \354\236\220\353\217\231\354\234\274\353\241\234 \354\242\205\353\243\214\353\220\251\353\213\210\353\213\244!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
