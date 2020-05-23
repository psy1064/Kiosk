#include "kakaopopup.h"
#include "ui_kakaopopup.h"
#include <QDebug>
kakaopopup::kakaopopup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kakaopopup)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    phonenumber = "010-";
    ui->phonenumber->setText(phonenumber);
}

kakaopopup::~kakaopopup()
{
    delete ui;
}

void kakaopopup::on_onebutton_clicked()
{
    inputNumber('1');
}

void kakaopopup::on_twobutton_clicked()
{
    inputNumber('2');
}

void kakaopopup::on_threebutton_clicked()
{
    inputNumber('3');
}

void kakaopopup::on_fourbutton_clicked()
{
    inputNumber('4');
}

void kakaopopup::on_fivebutton_clicked()
{
    inputNumber('5');
}

void kakaopopup::on_sixbutton_clicked()
{
    inputNumber('6');
}

void kakaopopup::on_sevenbutton_clicked()
{
    inputNumber('7');
}

void kakaopopup::on_eightbutton_clicked()
{
    inputNumber('8');
}

void kakaopopup::on_ninebutton_clicked()
{
    inputNumber('9');
}

void kakaopopup::on_zerobutton_clicked()
{
    inputNumber('0');
}

void kakaopopup::on_alldelbutton_clicked()
{
    phonenumber = "010-";
    ui->phonenumber->setText(phonenumber);
}

void kakaopopup::on_delbutton_clicked()
{
    phonenumber.chop(1);    // 뒤에서 1글자 제거
    ui->phonenumber->setText(phonenumber);
}

void kakaopopup::inputNumber(QChar num)
{
    if(phonenumber.size() == 8)
        phonenumber.append("-");
    phonenumber.append(num);
    ui->phonenumber->setText(phonenumber);
}

void kakaopopup::on_yesbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void kakaopopup::on_nobutton_clicked()
{
    phonenumber = "";
    emit kakaoNumber(phonenumber);
    this->close();
}

void kakaopopup::on_nobutton_2_clicked()
{
    phonenumber = "";
    emit kakaoNumber(phonenumber);
    this->close();
}

void kakaopopup::on_finishbutton_clicked()
{
    emit kakaoNumber(phonenumber);
    this->close();
}
