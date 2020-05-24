#include "basket.h"
#include "ui_basket.h"


basket::basket(QWidget *parent, QString name, QString count) :
    QWidget(parent),
    ui(new Ui::basket)
{
    ui->setupUi(this);
    ui->burgername->setText(name);
    ui->burgercount->setText(count);
}

basket::~basket()
{
    delete ui;
}

void basket::on_deletebutton_clicked()
{
    basket::close();
    emit deleteBasket();        // 주문 삭제 시그널 전송
} // 삭제 버튼 클릭 시
