#ifndef MYMENU_H
#define MYMENU_H

#include <QWidget>
#include <QVector>

struct menuinfo
{
    QString image, menuname, price;
};

namespace Ui {
class MyMenu;
}

class MyMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MyMenu(QWidget *parent = nullptr);
    ~MyMenu();
    void setInfo(menuinfo info, int pixmapsize);  // 메뉴 사진, 이름, 가격 등록
    QString getName();      // 메뉴 이름 반환
    QString getPrice();     // 메뉴 가격 반환
    void hidePrice();
private:
    Ui::MyMenu *ui;
    QString name;           // 메뉴 이름
    QString price;          // 메뉴 가격
};

#endif // MYMENU_H
