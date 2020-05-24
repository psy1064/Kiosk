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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checklist
{
public:
    QGridLayout *gridLayout;
    QLabel *mainmenu;
    QLabel *price;
    QLabel *image;

    void setupUi(QWidget *checklist)
    {
        if (checklist->objectName().isEmpty())
            checklist->setObjectName(QStringLiteral("checklist"));
        checklist->resize(468, 300);
        gridLayout = new QGridLayout(checklist);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mainmenu = new QLabel(checklist);
        mainmenu->setObjectName(QStringLiteral("mainmenu"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainmenu->sizePolicy().hasHeightForWidth());
        mainmenu->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        mainmenu->setFont(font);

        gridLayout->addWidget(mainmenu, 0, 0, 1, 1);

        price = new QLabel(checklist);
        price->setObjectName(QStringLiteral("price"));
        sizePolicy.setHeightForWidth(price->sizePolicy().hasHeightForWidth());
        price->setSizePolicy(sizePolicy);
        price->setFont(font);

        gridLayout->addWidget(price, 1, 0, 1, 1);

        image = new QLabel(checklist);
        image->setObjectName(QStringLiteral("image"));
        image->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(image, 0, 1, 2, 1);


        retranslateUi(checklist);

        QMetaObject::connectSlotsByName(checklist);
    } // setupUi

    void retranslateUi(QWidget *checklist)
    {
        checklist->setWindowTitle(QApplication::translate("checklist", "Form", nullptr));
        mainmenu->setText(QApplication::translate("checklist", "\353\262\204\352\261\260\354\235\264\353\246\204 x \352\260\257\354\210\230", nullptr));
        price->setText(QApplication::translate("checklist", "\352\260\200\352\262\251", nullptr));
        image->setText(QApplication::translate("checklist", "\353\262\204\352\261\260\354\202\254\354\247\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class checklist: public Ui_checklist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKLIST_H
