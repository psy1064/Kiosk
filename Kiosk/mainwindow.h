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
#include "kakaopopup.h"
#include "checklist.h"

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
    void init();                        // 초기화
    void detectFace();                   // 얼굴 인식 실행
    void displayHambugerMenu();         // 햄버거 메뉴 출력
    void displaySideMenu();             // 사이드 메뉴 출력
    void displayBeverageMenu();         // 음료 메뉴 출력
    void showPopup(MyMenu* menu);       // 팝업 윈도우 띄움
    void showCheck();                   // 주문 확인 화면
    void setBasketMargin();             // 주문 내역 리스트를 상단 고정하기 위해 margin 설정

private slots:
    void on_hambugerpushbutton_clicked();   // 햄버거 메뉴 버튼 클릭 시
    void on_sidepushbutton_clicked();       // 사이드 메뉴 버튼 클릭 시
    void on_beveragepushbutton_clicked();   // 음료 메뉴 버튼 클릭 시
    void on_pushButton_clicked();           // 닫기 버튼 클릭 시    
    void on_finishButton_clicked();         // 주문완료 버튼 클릭
    void on_showkakaobutton_clicked();      // 카카오톡 챗봇 이용을 위한 핸드폰 번호 입력 팝업 띄움
    void on_returnbutton_clicked();

    void deleteBasket(basket* tmp);                    // 주문 내역 삭제
    void setValue(QMap<QString, QString>);  // popup에서 주문한 내역을 받아옴
    void setPhoneNumber(QString number);    // kakaopopup에서 입력한 전화번호 입력

private:
    Ui::MainWindow *ui;
    popup* popupwindows;        // 메뉴 확인용 팝업 윈도우
    kakaopopup* kakaopopupwindows;  // 카톡 번호 입력 용 팝업 창
    QPixmap menu;               // 메뉴 사진 설정 용
    basket* bask;               // 주문 내역
    checklist* check;           // 주문 확인 용 체크 리스트
    int baskcount;              // 주문 내역 수
    int menutype;               // 메뉴 종류
    int finalprice;             // 주문 최종 가격
    QString phonenumber;        // 카카오톡 챗봇에 사용할 전화번호
    int age;                    // 나이저장
    enum {AGE_YOUNG=1, AGE_MIDDLE, AGE_OLD, CHECK};     // 화면
    enum {HAMBURGER=1, SIDE, BEVERAGE};                 // 메뉴 타입

    struct basketlist
    {
        QString menuname, sidemenu, beverage;
        int price, count, menutype;   // 갯수, 가격
    }; // 주문내역 정보 저장용 구조체

    QVector<basketlist> basketvector;   // 주문 내역 저장 구조체 벡터
};

#endif // MAINWINDOW_H
