/********************************************************************************
** Form generated from reading UI file 'kakaopopup.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAKAOPOPUP_H
#define UI_KAKAOPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kakaopopup
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *yesbutton;
    QPushButton *nobutton;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *phonenumber;
    QGridLayout *gridLayout_3;
    QPushButton *sevenbutton;
    QPushButton *threebutton;
    QPushButton *fivebutton;
    QPushButton *ninebutton;
    QPushButton *eightbutton;
    QPushButton *twobutton;
    QPushButton *fourbutton;
    QPushButton *sixbutton;
    QPushButton *onebutton;
    QPushButton *zerobutton;
    QPushButton *alldelbutton;
    QPushButton *delbutton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *finishbutton;
    QPushButton *nobutton_2;

    void setupUi(QWidget *kakaopopup)
    {
        if (kakaopopup->objectName().isEmpty())
            kakaopopup->setObjectName(QStringLiteral("kakaopopup"));
        kakaopopup->resize(530, 650);
        kakaopopup->setStyleSheet(QStringLiteral("background-color: rgb(251, 223, 0);"));
        gridLayout = new QGridLayout(kakaopopup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(kakaopopup);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("border:0px;\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(512, 512));
        label->setStyleSheet(QLatin1String("border:0px;\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8("../image/kakaologo.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        yesbutton = new QPushButton(page);
        yesbutton->setObjectName(QStringLiteral("yesbutton"));

        horizontalLayout->addWidget(yesbutton);

        nobutton = new QPushButton(page);
        nobutton->setObjectName(QStringLiteral("nobutton"));

        horizontalLayout->addWidget(nobutton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        phonenumber = new QLabel(page_2);
        phonenumber->setObjectName(QStringLiteral("phonenumber"));
        sizePolicy1.setHeightForWidth(phonenumber->sizePolicy().hasHeightForWidth());
        phonenumber->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        phonenumber->setFont(font1);
        phonenumber->setStyleSheet(QLatin1String("border:1px solid black;\n"
""));
        phonenumber->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(phonenumber);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        sevenbutton = new QPushButton(page_2);
        sevenbutton->setObjectName(QStringLiteral("sevenbutton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sevenbutton->sizePolicy().hasHeightForWidth());
        sevenbutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(sevenbutton, 2, 0, 1, 1);

        threebutton = new QPushButton(page_2);
        threebutton->setObjectName(QStringLiteral("threebutton"));
        sizePolicy2.setHeightForWidth(threebutton->sizePolicy().hasHeightForWidth());
        threebutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(threebutton, 0, 2, 1, 1);

        fivebutton = new QPushButton(page_2);
        fivebutton->setObjectName(QStringLiteral("fivebutton"));
        sizePolicy2.setHeightForWidth(fivebutton->sizePolicy().hasHeightForWidth());
        fivebutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(fivebutton, 1, 1, 1, 1);

        ninebutton = new QPushButton(page_2);
        ninebutton->setObjectName(QStringLiteral("ninebutton"));
        sizePolicy2.setHeightForWidth(ninebutton->sizePolicy().hasHeightForWidth());
        ninebutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(ninebutton, 2, 2, 1, 1);

        eightbutton = new QPushButton(page_2);
        eightbutton->setObjectName(QStringLiteral("eightbutton"));
        sizePolicy2.setHeightForWidth(eightbutton->sizePolicy().hasHeightForWidth());
        eightbutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(eightbutton, 2, 1, 1, 1);

        twobutton = new QPushButton(page_2);
        twobutton->setObjectName(QStringLiteral("twobutton"));
        sizePolicy2.setHeightForWidth(twobutton->sizePolicy().hasHeightForWidth());
        twobutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(twobutton, 0, 1, 1, 1);

        fourbutton = new QPushButton(page_2);
        fourbutton->setObjectName(QStringLiteral("fourbutton"));
        sizePolicy2.setHeightForWidth(fourbutton->sizePolicy().hasHeightForWidth());
        fourbutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(fourbutton, 1, 0, 1, 1);

        sixbutton = new QPushButton(page_2);
        sixbutton->setObjectName(QStringLiteral("sixbutton"));
        sizePolicy2.setHeightForWidth(sixbutton->sizePolicy().hasHeightForWidth());
        sixbutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(sixbutton, 1, 2, 1, 1);

        onebutton = new QPushButton(page_2);
        onebutton->setObjectName(QStringLiteral("onebutton"));
        sizePolicy2.setHeightForWidth(onebutton->sizePolicy().hasHeightForWidth());
        onebutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(onebutton, 0, 0, 1, 1);

        zerobutton = new QPushButton(page_2);
        zerobutton->setObjectName(QStringLiteral("zerobutton"));
        sizePolicy2.setHeightForWidth(zerobutton->sizePolicy().hasHeightForWidth());
        zerobutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(zerobutton, 3, 1, 1, 1);

        alldelbutton = new QPushButton(page_2);
        alldelbutton->setObjectName(QStringLiteral("alldelbutton"));
        sizePolicy2.setHeightForWidth(alldelbutton->sizePolicy().hasHeightForWidth());
        alldelbutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(alldelbutton, 3, 0, 1, 1);

        delbutton = new QPushButton(page_2);
        delbutton->setObjectName(QStringLiteral("delbutton"));
        sizePolicy2.setHeightForWidth(delbutton->sizePolicy().hasHeightForWidth());
        delbutton->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(delbutton, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        finishbutton = new QPushButton(page_2);
        finishbutton->setObjectName(QStringLiteral("finishbutton"));

        horizontalLayout_2->addWidget(finishbutton);

        nobutton_2 = new QPushButton(page_2);
        nobutton_2->setObjectName(QStringLiteral("nobutton_2"));

        horizontalLayout_2->addWidget(nobutton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 1);


        retranslateUi(kakaopopup);

        QMetaObject::connectSlotsByName(kakaopopup);
    } // setupUi

    void retranslateUi(QWidget *kakaopopup)
    {
        kakaopopup->setWindowTitle(QApplication::translate("kakaopopup", "Form", nullptr));
        label_2->setText(QApplication::translate("kakaopopup", "\354\271\264\354\271\264\354\230\244\355\206\241\354\235\204 \354\202\254\354\232\251\355\225\230\352\263\240 \354\236\210\353\202\230\354\232\224?", nullptr));
        label->setText(QString());
        yesbutton->setText(QApplication::translate("kakaopopup", "\353\204\244", nullptr));
        nobutton->setText(QApplication::translate("kakaopopup", "\354\225\204\353\213\210\354\230\244", nullptr));
        label_3->setText(QApplication::translate("kakaopopup", "<html><head/><body><p>\353\262\210\355\230\270\353\245\274 \354\236\205\353\240\245\355\225\230\354\213\234\353\251\264 \354\271\264\354\271\264\354\230\244\355\206\241\354\234\274\353\241\234 </p><p>\354\243\274\353\254\270\354\231\204\353\243\214\353\245\274 \354\225\210\353\202\264\355\225\264 \353\223\234\353\246\254\352\262\240\354\212\265\353\213\210\353\213\244.</p></body></html>", nullptr));
        phonenumber->setText(QApplication::translate("kakaopopup", "010 - ", nullptr));
        sevenbutton->setText(QApplication::translate("kakaopopup", "7", nullptr));
        threebutton->setText(QApplication::translate("kakaopopup", "3", nullptr));
        fivebutton->setText(QApplication::translate("kakaopopup", "5", nullptr));
        ninebutton->setText(QApplication::translate("kakaopopup", "9", nullptr));
        eightbutton->setText(QApplication::translate("kakaopopup", "8", nullptr));
        twobutton->setText(QApplication::translate("kakaopopup", "2", nullptr));
        fourbutton->setText(QApplication::translate("kakaopopup", "4", nullptr));
        sixbutton->setText(QApplication::translate("kakaopopup", "6", nullptr));
        onebutton->setText(QApplication::translate("kakaopopup", "1", nullptr));
        zerobutton->setText(QApplication::translate("kakaopopup", "0", nullptr));
        alldelbutton->setText(QApplication::translate("kakaopopup", "\353\252\250\353\221\220 \354\247\200\354\232\260\352\270\260", nullptr));
        delbutton->setText(QApplication::translate("kakaopopup", "\354\247\200\354\232\260\352\270\260", nullptr));
        finishbutton->setText(QApplication::translate("kakaopopup", "\354\231\204\353\243\214", nullptr));
        nobutton_2->setText(QApplication::translate("kakaopopup", "\354\225\210\355\225\240\353\236\230\354\232\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kakaopopup: public Ui_kakaopopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAKAOPOPUP_H
