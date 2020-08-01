#ifndef CHECKLIST_H
#define CHECKLIST_H

#include <QWidget>

namespace Ui {
class checklist;
}

class checklist : public QWidget
{
    Q_OBJECT

public:
    explicit checklist(QWidget *parent = nullptr, QString ="",
                       QString = "", QString = "", int = 0, int = 0, int = 0);
    ~checklist();
    QString getName();
    QString getSide();
    QString getBeverage();
    int getCount();
private slots:
    void on_cancelbutton_clicked();
signals:
    void deletelist(checklist* tmp);                // 주문 내역 삭제
private:
    Ui::checklist *ui;
    QString mainmenu, side, beverage;
    int count, price, menutype;
    enum {HAMBURGER=1, SIDE, BEVERAGE};                 // 메뉴 타입
    QPixmap image;
};

#endif // CHECKLIST_H
