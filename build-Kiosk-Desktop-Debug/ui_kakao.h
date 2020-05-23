/********************************************************************************
** Form generated from reading UI file 'kakao.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAKAO_H
#define UI_KAKAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_kakao
{
public:

    void setupUi(QDialog *kakao)
    {
        if (kakao->objectName().isEmpty())
            kakao->setObjectName(QStringLiteral("kakao"));
        kakao->resize(400, 300);

        retranslateUi(kakao);

        QMetaObject::connectSlotsByName(kakao);
    } // setupUi

    void retranslateUi(QDialog *kakao)
    {
        kakao->setWindowTitle(QApplication::translate("kakao", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kakao: public Ui_kakao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAKAO_H
