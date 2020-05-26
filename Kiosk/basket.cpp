#include "basket.h"
#include "ui_basket.h"


basket::basket(QWidget *parent, QString name, QString side, QString beverage, QString count) :
    QWidget(parent),
    ui(new Ui::basket)
{
    ui->setupUi(this);
    this->name=name;
    this->side=side;
    this->beverage=beverage;
    this->count=count.toInt();
    QString title = name;
    if(side != "")
    {
        title.append(" ( " + side + " + " + beverage + " )");
    }
    ui->burgername->setText(title);
    ui->burgercount->setText(count);
}

basket::~basket()
{
    delete ui;
}

QString basket::getName()
{
    return name;
}

QString basket::getSide()
{
    return side;
}

QString basket::getBeverage()
{
    return beverage;
}

int basket::getCount()
{
    return count;
}

void basket::on_deletebutton_clicked()
{
    basket::close();
    emit deleteBasket(this);        // 주문 삭제 시그널 전송
} // 삭제 버튼 클릭 시
