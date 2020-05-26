#ifndef BASKET_H
#define BASKET_H

#include <QWidget>

namespace Ui {
class basket;
}

class basket : public QWidget
{
    Q_OBJECT

public:
    explicit basket(QWidget *parent = nullptr, QString = "",QString = "",QString = "", QString count = "1");
    ~basket();
    QString getName();
    QString getSide();
    QString getBeverage();
    int getCount();
private slots:
    void on_deletebutton_clicked();       // 삭제 버튼 클릭 시
signals:
    void deleteBasket(basket* tmp);                // 주문 내역 삭제
private:
    Ui::basket *ui;
    QString name, side, beverage;
    int count;
};

#endif // BASKET_H
