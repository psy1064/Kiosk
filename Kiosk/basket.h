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
    explicit basket(QWidget *parent = nullptr, QString name = "", QString count = "1");
    ~basket();
private slots:
    void on_deletebutton_clicked();       // 삭제 버튼 클릭 시
signals:
    void deleteBasket();                // 주문 내역 삭제
private:
    Ui::basket *ui;
};

#endif // BASKET_H
