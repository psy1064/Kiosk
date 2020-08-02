#ifndef POPUP_H
#define POPUP_H

#include <QWidget>
#include <QMouseEvent>
#include <QMap>
#include "mymenu.h"

namespace Ui {
class popup;
}

class popup : public QWidget
{
    Q_OBJECT

public:
    explicit popup(QWidget *parent = nullptr,
                   QString mainmenu = "",
                   QString menuprice = "",
                   int menutype = 1,
                   int age = 0);
    ~popup();
    void initstackwideget();        // 첫 화면으로 설정
    void displaySideMenu();         // 사이드메뉴 보여줌
    void displayBeverageMenu();     // 음료 메뉴 보여줌
    void checkMenu();               // 주문 메뉴 화면
    void setpopup(MyMenu* menu);    // 화면 전환 메소드
    void displayWarning();          // 주문 내역 5개 넘겼을 때 화면
    bool eventFilter(QObject *watched, QEvent *event);  // 메뉴 클릭 시 이벤트

private slots:
    void on_setbutton_clicked();        // 세트 버튼 클릭 시
    void on_singlebutton_clicked();     // 단품 버튼 클릭 시
    void on_rightbutton_clicked();      // 주문 메뉴 화면에서 맞아요 클릭 시
    void on_rollbackbutton_clicked();   // 주문 메뉴 화면에서 다시 고를래 클릭 시
    void on_okbutton_clicked();         // 주문 내역 5개 넘겼을 때 알겠습니다 클릭 시
    void on_minusButton_clicked();
    void on_plusButton_clicked();
    void on_ordercancel_clicked();

    void on_count1button_clicked();

    void on_count2button_clicked();

    void on_count3button_clicked();

    void on_count4button_clicked();

    void on_count5button_clicked();

signals:
    void sendValue(QMap<QString, QString> value);         // mainwindow로 주문 정보 전송
private:
    Ui::popup *ui;
    QPixmap menu;
    int state;  // 현재 팝업 윈도우의 위치
    int age;
    int menuprice, finalprice;  // 세트 가격 저장용
    QMap<QString, QString> info;  // 주문 정보
    QMap<QString, QString>::iterator iter;
    int menutype;                   // 메뉴 종류
    int count;                      // 메뉴 갯수
    enum {HAMBURGER=1, SIDE, BEVERAGE};
    enum {AGE_YOUNG=1, AGE_MIDDLE, AGE_OLD};     // 나이
    menuinfo hamburgerinfo[6], sidemenuinfo[6], beverageinfo[6];
};

#endif // POPUP_H
