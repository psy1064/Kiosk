#include "basket.h"
#include "ui_basket.h"

int basket::baskcount = 0;

basket::basket(QWidget *parent, QString name) :
    QWidget(parent),
    ui(new Ui::basket)
{
    ui->setupUi(this);
    count = 1;
    ui->burgername->setText(name);
    ui->burgercount->setText(QString::number(count));
    baskcount++;
}

basket::~basket()
{
    delete ui;
}

void basket::on_pluspushbutton_clicked()
{
    count++;
    ui->burgercount->setText(QString::number(count));
} // plus 버튼 클릭 시

void basket::on_minuspushbutton_clicked()
{
    count--;
    if(count == 0)
    {
        on_deletebutton_clicked();  // 주문 갯수가 0이면 주문 삭제
    }
    ui->burgercount->setText(QString::number(count));
} // minus 버튼 클릭 시

void basket::on_deletebutton_clicked()
{
    baskcount--;
    emit deleteBasket();        // 주문 삭제 시그널 전송
    basket::close();
} // 삭제 버튼 클릭 시
