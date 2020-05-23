#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QLabel>
#include <QDesktopWidget>
#include <QDebug>
#include <QVBoxLayout>
#include <QVector>
#include "popup.h"
#include "basket.h"
#include "mymenu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool eventFilter(QObject *watched, QEvent *event);
    void displayHambugerMenu();                     // 햄버거 메뉴 출력
    void displaySideMenu();                         // 사이드 메뉴 출력
    void displayBeverageMenu();        // 음료 메뉴 출력
    void showPopup(MyMenu* menu);      // 팝업 윈도우 띄움
    void setBasketMargin();                         // 주문 내역 리스트를 상단 고정하기 위해 margin 설정

private slots:
    void on_hambugerpushbutton_clicked();   // 햄버거 메뉴 버튼 클릭 시
    void on_sidepushbutton_clicked();       // 사이드 메뉴 버튼 클릭 시
    void on_beveragepushbutton_clicked();   // 음료 메뉴 버튼 클릭 시
    void on_pushButton_clicked();           // 닫기 버튼 클릭 시
    void setValue(QMap<QString, QString>);  // popup에서 주문한 내역을 받아옴
    void deleteBasket();                    // 주문 내역 삭제

    void on_finishButton_clicked();

private:
    Ui::MainWindow *ui;
    popup* popupwindows;        // 팝업 윈도우
    QPixmap menu;               // 메뉴 사진 설정 용
    basket* bask;               // 주문 내역
    int baskcount;              // 주문 내역 수
    int menutype;               // 메뉴 종류
    enum {AGE_YOUNG=1, AGE_MIDDLE, AGE_OLD, CHECK};
    enum {HAMBURGER=1, SIDE, BEVERAGE};

    struct basketlist{
        QString burgername, sidemenu, beverage;
        int price, count;   // 갯수, 가격
    };

    QVector<basketlist> basketvector;
};

#endif // MAINWINDOW_H
