#include "checklist.h"
#include "ui_checklist.h"

checklist::checklist(QWidget *parent, QString mainmenu,
                     QString side, QString beverage,
                     int count, int price,int menutype) :
    QWidget(parent),
    ui(new Ui::checklist)
{
    ui->setupUi(this);
    this->mainmenu=mainmenu;
    this->side=side;
    this->beverage=beverage;
    this->count=count;
    this->price=price;
    this->menutype=menutype;

    if(menutype == HAMBURGER)
    {
        if(side == "")
        {
            image.load("/home/pi/kiosk/image/burger/" + mainmenu + ".png");
            ui->mainmenu->setText(mainmenu + "x " + QString::number(count));
        }
        else
        {
            image.load("/home/pi/kiosk/image/set/" + mainmenu + "세트.png");
            ui->mainmenu->setText(mainmenu + " 세트 x " + QString::number(count));
        }
    } // 메뉴 종류가 햄버거인 경우
    else if(menutype == SIDE)
    {
        image.load("/home/pi/kiosk/image/sidemenu/" + mainmenu + ".png");
        ui->mainmenu->setText(mainmenu + "x " + QString::number(count));
    } // 사이드 메뉴인 경우
    else if(menutype == BEVERAGE)
    {
        image.load("/home/pi/kiosk/image/beverage/" + mainmenu + ".png");
        ui->mainmenu->setText(mainmenu + "x " + QString::number(count));
    } // 음료인 경우

    ui->image->setPixmap(image.scaled(400,400,Qt::KeepAspectRatio));
    ui->price->setText("가격 : " + QString::number(price));
}

checklist::~checklist()
{
    delete ui;
}




