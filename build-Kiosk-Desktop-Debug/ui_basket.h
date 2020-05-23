/********************************************************************************
** Form generated from reading UI file 'basket.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASKET_H
#define UI_BASKET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_basket
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *deletebutton;
    QLabel *burgername;
    QPushButton *pluspushbutton;
    QLabel *burgercount;
    QPushButton *minuspushbutton;

    void setupUi(QWidget *basket)
    {
        if (basket->objectName().isEmpty())
            basket->setObjectName(QStringLiteral("basket"));
        basket->resize(732, 80);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(basket->sizePolicy().hasHeightForWidth());
        basket->setSizePolicy(sizePolicy);
        basket->setAutoFillBackground(true);
        basket->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(basket);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        deletebutton = new QPushButton(basket);
        deletebutton->setObjectName(QStringLiteral("deletebutton"));
        QFont font;
        font.setPointSize(15);
        deletebutton->setFont(font);

        horizontalLayout->addWidget(deletebutton);

        burgername = new QLabel(basket);
        burgername->setObjectName(QStringLiteral("burgername"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(burgername->sizePolicy().hasHeightForWidth());
        burgername->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(20);
        burgername->setFont(font1);
        burgername->setStyleSheet(QStringLiteral("border:0px;"));
        burgername->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(burgername);

        pluspushbutton = new QPushButton(basket);
        pluspushbutton->setObjectName(QStringLiteral("pluspushbutton"));
        pluspushbutton->setStyleSheet(QStringLiteral("border:0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral("../image/plusicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pluspushbutton->setIcon(icon);
        pluspushbutton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(pluspushbutton);

        burgercount = new QLabel(basket);
        burgercount->setObjectName(QStringLiteral("burgercount"));
        burgercount->setMinimumSize(QSize(50, 0));
        burgercount->setFont(font1);
        burgercount->setStyleSheet(QStringLiteral("border:0px;"));
        burgercount->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(burgercount);

        minuspushbutton = new QPushButton(basket);
        minuspushbutton->setObjectName(QStringLiteral("minuspushbutton"));
        minuspushbutton->setStyleSheet(QStringLiteral("border:0px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../image/minusicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        minuspushbutton->setIcon(icon1);
        minuspushbutton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(minuspushbutton);


        retranslateUi(basket);

        QMetaObject::connectSlotsByName(basket);
    } // setupUi

    void retranslateUi(QWidget *basket)
    {
        basket->setWindowTitle(QApplication::translate("basket", "Form", nullptr));
        deletebutton->setText(QApplication::translate("basket", "\354\202\255\354\240\234", nullptr));
        burgername->setText(QApplication::translate("basket", "\353\262\204\352\261\260\354\235\264\353\246\204", nullptr));
        pluspushbutton->setText(QString());
        burgercount->setText(QApplication::translate("basket", "1", nullptr));
        minuspushbutton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class basket: public Ui_basket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASKET_H
