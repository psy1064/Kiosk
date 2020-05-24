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
    explicit basket(QWidget *parent = nullptr, QString name = "");
    ~basket();
private slots:
    void on_pluspushbutton_clicked();   // plus 버튼 클릭 시
    void on_minuspushbutton_clicked();  // minus 버튼 클릭 시
    void on_deletebutton_clicked();       // 삭제 버튼 클릭 시
signals:
    void deleteBasket();                // 주문 내역 삭제
private:
    Ui::basket *ui;
    int count;                          // 주문 갯수
};

#endif // BASKET_H
