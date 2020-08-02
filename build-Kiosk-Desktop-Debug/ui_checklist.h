/********************************************************************************
** Form generated from reading UI file 'checklist.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKLIST_H
#define UI_CHECKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checklist
{
public:
    QGridLayout *gridLayout;
    QLabel *price;
    QLabel *image;
    QLabel *mainmenu;
    QPushButton *cancelbutton;

    void setupUi(QWidget *checklist)
    {
        if (checklist->objectName().isEmpty())
            checklist->setObjectName(QStringLiteral("checklist"));
        checklist->resize(468, 300);
        gridLayout = new QGridLayout(checklist);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        price = new QLabel(checklist);
        price->setObjectName(QStringLiteral("price"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(price->sizePolicy().hasHeightForWidth());
        price->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        price->setFont(font);

        gridLayout->addWidget(price, 1, 0, 1, 1);

        image = new QLabel(checklist);
        image->setObjectName(QStringLiteral("image"));
        image->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(image, 0, 1, 2, 1);

        mainmenu = new QLabel(checklist);
        mainmenu->setObjectName(QStringLiteral("mainmenu"));
        sizePolicy.setHeightForWidth(mainmenu->sizePolicy().hasHeightForWidth());
        mainmenu->setSizePolicy(sizePolicy);
        mainmenu->setFont(font);

        gridLayout->addWidget(mainmenu, 0, 0, 1, 1);

        cancelbutton = new QPushButton(checklist);
        cancelbutton->setObjectName(QStringLiteral("cancelbutton"));
        cancelbutton->setMinimumSize(QSize(100, 100));
        cancelbutton->setStyleSheet(QLatin1String("background-color: red;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"font: bold 20px;\n"
"padding: 6px;\n"
"color:white;"));

        gridLayout->addWidget(cancelbutton, 0, 2, 2, 1);


        retranslateUi(checklist);

        QMetaObject::connectSlotsByName(checklist);
    } // setupUi

    void retranslateUi(QWidget *checklist)
    {
        checklist->setWindowTitle(QApplication::translate("checklist", "Form", nullptr));
        price->setText(QApplication::translate("checklist", "\352\260\200\352\262\251", nullptr));
        image->setText(QApplication::translate("checklist", "\353\262\204\352\261\260\354\202\254\354\247\204", nullptr));
        mainmenu->setText(QApplication::translate("checklist", "\353\262\204\352\261\260\354\235\264\353\246\204 x \352\260\257\354\210\230", nullptr));
        cancelbutton->setText(QApplication::translate("checklist", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checklist: public Ui_checklist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKLIST_H
