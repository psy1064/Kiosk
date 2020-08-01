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
    QWidget *display;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *main_logo;
    QLabel *label_5;
    QPushButton *finishButton;
    QStackedWidget *menudisplaywidget;
    QWidget *young;
    QGridLayout *gridLayout_6;
    MyMenu *young_menu_2;
    QPushButton *young_beveragepushbutton;
    QPushButton *young_sidepushbutton;
    QPushButton *young_hambugerpushbutton;
    MyMenu *young_menu_6;
    MyMenu *young_menu_1;
    MyMenu *young_menu_4;
    MyMenu *young_menu_5;
    MyMenu *young_menu_3;
    MyMenu *young_menu_7;
    MyMenu *young_menu_8;
    MyMenu *young_menu_9;
    QWidget *middle;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *mid_hambugerpushbutton;
    QPushButton *mid_sidepushbutton;
    QPushButton *mid_beveragepushbutton;
    QGridLayout *gridLayout_7;
    MyMenu *mid_menu_3;
    MyMenu *mid_menu_1;
    MyMenu *mid_menu_6;
    MyMenu *mid_menu_2;
    MyMenu *mid_menu_4;
    MyMenu *mid_menu_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *basketlayout;
    QWidget *old;
    QGridLayout *gridLayout_3;
    QLabel *old_title;
    QStackedWidget *old_select;
    QWidget *main;
    QGridLayout *gridLayout_8;
    QPushButton *old_sidepushbutton;
    QPushButton *old_beveragepushbutton;
    QPushButton *old_hambugerpushbutton;
    QWidget *menu;
    QGridLayout *gridLayout_9;
    MyMenu *old_menu_6;
    QPushButton *old_finishpushbutton;
    QPushButton *prepushbutton;
    MyMenu *old_menu_4;
    MyMenu *old_menu_5;
    MyMenu *old_menu_3;
    MyMenu *old_menu_1;
    MyMenu *old_menu_2;
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
        MainWindow->resize(734, 923);
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
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
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
        display = new QWidget();
        display->setObjectName(QStringLiteral("display"));
        gridLayout_2 = new QGridLayout(display);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        main_logo = new QLabel(display);
        main_logo->setObjectName(QStringLiteral("main_logo"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(main_logo->sizePolicy().hasHeightForWidth());
        main_logo->setSizePolicy(sizePolicy3);
        main_logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(main_logo);

        label_5 = new QLabel(display);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setMinimumSize(QSize(0, 100));
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        finishButton = new QPushButton(display);
        finishButton->setObjectName(QStringLiteral("finishButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(finishButton->sizePolicy().hasHeightForWidth());
        finishButton->setSizePolicy(sizePolicy5);
        finishButton->setMinimumSize(QSize(93, 100));
        finishButton->setStyleSheet(QLatin1String("background-color: green;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"min-width: 3em;\n"
"padding: 6px;\n"
"color:white;"));

        horizontalLayout_2->addWidget(finishButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        menudisplaywidget = new QStackedWidget(display);
        menudisplaywidget->setObjectName(QStringLiteral("menudisplaywidget"));
        young = new QWidget();
        young->setObjectName(QStringLiteral("young"));
        gridLayout_6 = new QGridLayout(young);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        young_menu_2 = new MyMenu(young);
        young_menu_2->setObjectName(QStringLiteral("young_menu_2"));

        gridLayout_6->addWidget(young_menu_2, 1, 4, 1, 1);

        young_beveragepushbutton = new QPushButton(young);
        young_beveragepushbutton->setObjectName(QStringLiteral("young_beveragepushbutton"));
        young_beveragepushbutton->setStyleSheet(QLatin1String("border-style:outset;\n"
"border-color: black;\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"font: bold 20px;\n"
"padding:5px;\n"
""));

        gridLayout_6->addWidget(young_beveragepushbutton, 0, 4, 1, 1);

        young_sidepushbutton = new QPushButton(young);
        young_sidepushbutton->setObjectName(QStringLiteral("young_sidepushbutton"));
        young_sidepushbutton->setStyleSheet(QLatin1String("border-style:outset;\n"
"border-color: black;\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"font: bold 20px;\n"
"padding:5px;\n"
""));

        gridLayout_6->addWidget(young_sidepushbutton, 0, 2, 1, 1);

        young_hambugerpushbutton = new QPushButton(young);
        young_hambugerpushbutton->setObjectName(QStringLiteral("young_hambugerpushbutton"));
        young_hambugerpushbutton->setStyleSheet(QLatin1String("border-style:outset;\n"
"border-color: black;\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"font: bold 20px;\n"
"padding:5px;\n"
""));

        gridLayout_6->addWidget(young_hambugerpushbutton, 0, 0, 1, 1);

        young_menu_6 = new MyMenu(young);
        young_menu_6->setObjectName(QStringLiteral("young_menu_6"));

        gridLayout_6->addWidget(young_menu_6, 3, 4, 1, 1);

        young_menu_1 = new MyMenu(young);
        young_menu_1->setObjectName(QStringLiteral("young_menu_1"));

        gridLayout_6->addWidget(young_menu_1, 1, 0, 1, 1);

        young_menu_4 = new MyMenu(young);
        young_menu_4->setObjectName(QStringLiteral("young_menu_4"));

        gridLayout_6->addWidget(young_menu_4, 3, 0, 1, 1);

        young_menu_5 = new MyMenu(young);
        young_menu_5->setObjectName(QStringLiteral("young_menu_5"));

        gridLayout_6->addWidget(young_menu_5, 1, 2, 1, 1);

        young_menu_3 = new MyMenu(young);
        young_menu_3->setObjectName(QStringLiteral("young_menu_3"));

        gridLayout_6->addWidget(young_menu_3, 3, 2, 1, 1);

        young_menu_7 = new MyMenu(young);
        young_menu_7->setObjectName(QStringLiteral("young_menu_7"));

        gridLayout_6->addWidget(young_menu_7, 4, 0, 1, 1);

        young_menu_8 = new MyMenu(young);
        young_menu_8->setObjectName(QStringLiteral("young_menu_8"));

        gridLayout_6->addWidget(young_menu_8, 4, 2, 1, 1);

        young_menu_9 = new MyMenu(young);
        young_menu_9->setObjectName(QStringLiteral("young_menu_9"));

        gridLayout_6->addWidget(young_menu_9, 4, 4, 1, 1);

        menudisplaywidget->addWidget(young);
        middle = new QWidget();
        middle->setObjectName(QStringLiteral("middle"));
        gridLayout_5 = new QGridLayout(middle);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(70);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(-1, 70, -1, 70);
        mid_hambugerpushbutton = new QPushButton(middle);
        mid_hambugerpushbutton->setObjectName(QStringLiteral("mid_hambugerpushbutton"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mid_hambugerpushbutton->sizePolicy().hasHeightForWidth());
        mid_hambugerpushbutton->setSizePolicy(sizePolicy6);
        mid_hambugerpushbutton->setMinimumSize(QSize(200, 0));
        mid_hambugerpushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/hambugerButton.png\"); \n"
""));

        verticalLayout_3->addWidget(mid_hambugerpushbutton);

        mid_sidepushbutton = new QPushButton(middle);
        mid_sidepushbutton->setObjectName(QStringLiteral("mid_sidepushbutton"));
        sizePolicy6.setHeightForWidth(mid_sidepushbutton->sizePolicy().hasHeightForWidth());
        mid_sidepushbutton->setSizePolicy(sizePolicy6);
        mid_sidepushbutton->setMinimumSize(QSize(0, 0));
        mid_sidepushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/sideMenuButton.png\"); \n"
""));

        verticalLayout_3->addWidget(mid_sidepushbutton);

        mid_beveragepushbutton = new QPushButton(middle);
        mid_beveragepushbutton->setObjectName(QStringLiteral("mid_beveragepushbutton"));
        sizePolicy6.setHeightForWidth(mid_beveragepushbutton->sizePolicy().hasHeightForWidth());
        mid_beveragepushbutton->setSizePolicy(sizePolicy6);
        mid_beveragepushbutton->setMinimumSize(QSize(0, 0));
        mid_beveragepushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/beverageButton.png\"); \n"
""));

        verticalLayout_3->addWidget(mid_beveragepushbutton);


        horizontalLayout->addLayout(verticalLayout_3);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(0);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        mid_menu_3 = new MyMenu(middle);
        mid_menu_3->setObjectName(QStringLiteral("mid_menu_3"));
        sizePolicy6.setHeightForWidth(mid_menu_3->sizePolicy().hasHeightForWidth());
        mid_menu_3->setSizePolicy(sizePolicy6);
        mid_menu_3->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(mid_menu_3, 1, 0, 1, 1);

        mid_menu_1 = new MyMenu(middle);
        mid_menu_1->setObjectName(QStringLiteral("mid_menu_1"));
        sizePolicy6.setHeightForWidth(mid_menu_1->sizePolicy().hasHeightForWidth());
        mid_menu_1->setSizePolicy(sizePolicy6);
        mid_menu_1->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(mid_menu_1, 0, 0, 1, 1);

        mid_menu_6 = new MyMenu(middle);
        mid_menu_6->setObjectName(QStringLiteral("mid_menu_6"));
        sizePolicy6.setHeightForWidth(mid_menu_6->sizePolicy().hasHeightForWidth());
        mid_menu_6->setSizePolicy(sizePolicy6);
        mid_menu_6->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(mid_menu_6, 2, 1, 1, 1);

        mid_menu_2 = new MyMenu(middle);
        mid_menu_2->setObjectName(QStringLiteral("mid_menu_2"));
        sizePolicy6.setHeightForWidth(mid_menu_2->sizePolicy().hasHeightForWidth());
        mid_menu_2->setSizePolicy(sizePolicy6);
        mid_menu_2->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(mid_menu_2, 0, 1, 1, 1);

        mid_menu_4 = new MyMenu(middle);
        mid_menu_4->setObjectName(QStringLiteral("mid_menu_4"));
        sizePolicy6.setHeightForWidth(mid_menu_4->sizePolicy().hasHeightForWidth());
        mid_menu_4->setSizePolicy(sizePolicy6);
        mid_menu_4->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(mid_menu_4, 1, 1, 1, 1);

        mid_menu_5 = new MyMenu(middle);
        mid_menu_5->setObjectName(QStringLiteral("mid_menu_5"));
        sizePolicy6.setHeightForWidth(mid_menu_5->sizePolicy().hasHeightForWidth());
        mid_menu_5->setSizePolicy(sizePolicy6);
        mid_menu_5->setStyleSheet(QStringLiteral(""));

        gridLayout_7->addWidget(mid_menu_5, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_7);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        menudisplaywidget->addWidget(middle);

        verticalLayout_2->addWidget(menudisplaywidget);

        label_4 = new QLabel(display);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy7);
        label_4->setMinimumSize(QSize(0, 50));
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
        basketlayout->setContentsMargins(-1, -1, -1, 400);

        horizontalLayout_3->addLayout(basketlayout);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        stackedWidget->addWidget(display);
        old = new QWidget();
        old->setObjectName(QStringLiteral("old"));
        gridLayout_3 = new QGridLayout(old);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        old_title = new QLabel(old);
        old_title->setObjectName(QStringLiteral("old_title"));
        sizePolicy6.setHeightForWidth(old_title->sizePolicy().hasHeightForWidth());
        old_title->setSizePolicy(sizePolicy6);
        old_title->setMinimumSize(QSize(0, 80));
        QFont font3;
        font3.setPointSize(28);
        old_title->setFont(font3);
        old_title->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(old_title, 0, 0, 1, 1);

        old_select = new QStackedWidget(old);
        old_select->setObjectName(QStringLiteral("old_select"));
        main = new QWidget();
        main->setObjectName(QStringLiteral("main"));
        gridLayout_8 = new QGridLayout(main);
        gridLayout_8->setSpacing(30);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(30, 30, 30, 30);
        old_sidepushbutton = new QPushButton(main);
        old_sidepushbutton->setObjectName(QStringLiteral("old_sidepushbutton"));
        sizePolicy5.setHeightForWidth(old_sidepushbutton->sizePolicy().hasHeightForWidth());
        old_sidepushbutton->setSizePolicy(sizePolicy5);
        old_sidepushbutton->setMinimumSize(QSize(0, 800));
        old_sidepushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/sideMenuButton_kor.png\"); \n"
""));

        gridLayout_8->addWidget(old_sidepushbutton, 3, 1, 1, 1);

        old_beveragepushbutton = new QPushButton(main);
        old_beveragepushbutton->setObjectName(QStringLiteral("old_beveragepushbutton"));
        sizePolicy5.setHeightForWidth(old_beveragepushbutton->sizePolicy().hasHeightForWidth());
        old_beveragepushbutton->setSizePolicy(sizePolicy5);
        old_beveragepushbutton->setMinimumSize(QSize(0, 800));
        old_beveragepushbutton->setStyleSheet(QStringLiteral("border-image:url(\"/home/pi/kiosk/image/beverageButton.png\"); "));

        gridLayout_8->addWidget(old_beveragepushbutton, 3, 2, 1, 1);

        old_hambugerpushbutton = new QPushButton(main);
        old_hambugerpushbutton->setObjectName(QStringLiteral("old_hambugerpushbutton"));
        sizePolicy5.setHeightForWidth(old_hambugerpushbutton->sizePolicy().hasHeightForWidth());
        old_hambugerpushbutton->setSizePolicy(sizePolicy5);
        old_hambugerpushbutton->setMinimumSize(QSize(0, 800));
        old_hambugerpushbutton->setStyleSheet(QLatin1String("border-image:url(\"/home/pi/kiosk/image/hambugerButton.png\"); \n"
""));

        gridLayout_8->addWidget(old_hambugerpushbutton, 3, 0, 1, 1);

        old_select->addWidget(main);
        menu = new QWidget();
        menu->setObjectName(QStringLiteral("menu"));
        gridLayout_9 = new QGridLayout(menu);
        gridLayout_9->setSpacing(0);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        old_menu_6 = new MyMenu(menu);
        old_menu_6->setObjectName(QStringLiteral("old_menu_6"));

        gridLayout_9->addWidget(old_menu_6, 3, 1, 1, 1);

        old_finishpushbutton = new QPushButton(menu);
        old_finishpushbutton->setObjectName(QStringLiteral("old_finishpushbutton"));
        old_finishpushbutton->setStyleSheet(QLatin1String("background-color: green;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 30px;\n"
"min-width: 3em;\n"
"padding: 6px;\n"
"color:white;"));

        gridLayout_9->addWidget(old_finishpushbutton, 4, 1, 1, 1);

        prepushbutton = new QPushButton(menu);
        prepushbutton->setObjectName(QStringLiteral("prepushbutton"));
        prepushbutton->setStyleSheet(QLatin1String("background-color: red;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 30px;\n"
"min-width: 3em;\n"
"padding: 6px;\n"
"color:white;"));

        gridLayout_9->addWidget(prepushbutton, 4, 0, 1, 1);

        old_menu_4 = new MyMenu(menu);
        old_menu_4->setObjectName(QStringLiteral("old_menu_4"));

        gridLayout_9->addWidget(old_menu_4, 2, 1, 1, 1);

        old_menu_5 = new MyMenu(menu);
        old_menu_5->setObjectName(QStringLiteral("old_menu_5"));

        gridLayout_9->addWidget(old_menu_5, 3, 0, 1, 1);

        old_menu_3 = new MyMenu(menu);
        old_menu_3->setObjectName(QStringLiteral("old_menu_3"));

        gridLayout_9->addWidget(old_menu_3, 2, 0, 1, 1);

        old_menu_1 = new MyMenu(menu);
        old_menu_1->setObjectName(QStringLiteral("old_menu_1"));

        gridLayout_9->addWidget(old_menu_1, 1, 0, 1, 1);

        old_menu_2 = new MyMenu(menu);
        old_menu_2->setObjectName(QStringLiteral("old_menu_2"));

        gridLayout_9->addWidget(old_menu_2, 1, 1, 1, 1);

        old_select->addWidget(menu);

        gridLayout_3->addWidget(old_select, 1, 0, 1, 1);

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
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setMinimumSize(QSize(0, 100));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        pushButton = new QPushButton(checkpage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy5.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy5);
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
        sizePolicy4.setHeightForWidth(pricelabel->sizePolicy().hasHeightForWidth());
        pricelabel->setSizePolicy(sizePolicy4);
        pricelabel->setMinimumSize(QSize(0, 100));
        pricelabel->setFont(font1);

        horizontalLayout_5->addWidget(pricelabel);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        showkakaobutton = new QPushButton(checkpage);
        showkakaobutton->setObjectName(QStringLiteral("showkakaobutton"));
        QFont font4;
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        showkakaobutton->setFont(font4);
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
        returnbutton->setFont(font4);
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
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(ordernumber->sizePolicy().hasHeightForWidth());
        ordernumber->setSizePolicy(sizePolicy8);
        QFont font5;
        font5.setPointSize(50);
        ordernumber->setFont(font5);
        ordernumber->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(ordernumber, 2, 0, 1, 1);

        callannounce = new QLabel(finish);
        callannounce->setObjectName(QStringLiteral("callannounce"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(callannounce->sizePolicy().hasHeightForWidth());
        callannounce->setSizePolicy(sizePolicy9);
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
        menudisplaywidget->setCurrentIndex(1);


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
        young_beveragepushbutton->setText(QApplication::translate("MainWindow", "\354\235\214\353\243\214", nullptr));
        young_sidepushbutton->setText(QApplication::translate("MainWindow", "\354\202\254\354\235\264\353\223\234 \353\251\224\353\211\264", nullptr));
        young_hambugerpushbutton->setText(QApplication::translate("MainWindow", "\355\226\204\353\262\204\352\261\260", nullptr));
        mid_hambugerpushbutton->setText(QString());
        mid_sidepushbutton->setText(QString());
        mid_beveragepushbutton->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270\353\202\264\354\227\255", nullptr));
        old_title->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270\355\225\230\353\240\244\353\212\224 \353\251\224\353\211\264\354\235\230 \354\242\205\353\245\230\353\245\274 \354\204\240\355\203\235\355\225\264\354\243\274\354\204\270\354\232\224", nullptr));
        old_sidepushbutton->setText(QString());
        old_beveragepushbutton->setText(QString());
        old_hambugerpushbutton->setText(QString());
        old_finishpushbutton->setText(QApplication::translate("MainWindow", "\354\243\274\353\254\270 \354\231\204\353\243\214", nullptr));
        prepushbutton->setText(QApplication::translate("MainWindow", " \354\262\230\354\235\214 \355\231\224\353\251\264\354\234\274\353\241\234 \353\217\214\354\225\204\352\260\200\352\270\260", nullptr));
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
