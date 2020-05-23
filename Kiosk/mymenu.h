#ifndef MYMENU_H
#define MYMENU_H

#include <QWidget>

namespace Ui {
class MyMenu;
}

class MyMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MyMenu(QWidget *parent = nullptr);
    ~MyMenu();
    void setInfo(QPixmap pixmap, int pixmapsize, QString name, QString price);  // 메뉴 사진, 이름, 가격 등록
    QString getName();      // 메뉴 이름 반환
    QString getPrice();     // 메뉴 가격 반환
private:
    Ui::MyMenu *ui;
    QString name;           // 메뉴 이름
    QString price;          // 메뉴 가격
};

#endif // MYMENU_H
