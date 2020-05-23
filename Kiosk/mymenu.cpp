#include "mymenu.h"
#include "ui_mymenu.h"

MyMenu::MyMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyMenu)
{
    ui->setupUi(this);
}

MyMenu::~MyMenu()
{
    delete ui;
}

void MyMenu::setInfo(QPixmap pixmap, int pixmapsize, QString name, QString price)
{
    this->name = name;
    this->price = price;
    ui->label->setPixmap(pixmap.scaled(pixmapsize,pixmapsize,Qt::KeepAspectRatio));
    ui->label_2->setText(name);
    ui->label_3->setText(price);
} // 메뉴 사진, 이름, 가격 설정

QString MyMenu::getName()
{
    return name;
} // 메뉴 이름 반환

QString MyMenu::getPrice()
{
    return price;
} // 메뉴 가격 반환
