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

void MyMenu::setInfo(menuinfo info, int pixmapsize)
{
    QPixmap pixmap;
    QFont font("PibotoL", (pixmapsize/15));
    pixmap.load(info.image);
    this->name = info.menuname;
    this->price = info.price;
    ui->label->setPixmap(pixmap.scaled(pixmapsize,pixmapsize,Qt::KeepAspectRatio));
    ui->label_2->setText(name);
    ui->label_3->setText(price);
    ui->label_2->setFont(font);
    ui->label_3->setFont(font);
} // 메뉴 사진, 이름, 가격 설정

QString MyMenu::getName()
{
    return name;
} // 메뉴 이름 반환

QString MyMenu::getPrice()
{
    return price;
}

void MyMenu::hidePrice()
{
    ui->label_3->hide();
} // 메뉴 가격 반환
