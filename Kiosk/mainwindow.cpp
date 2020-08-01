#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menu.load("/home/pi/kiosk/image/dju_logo.png");
    ui->main_logo->setPixmap(menu.scaled(100,100,Qt::KeepAspectRatio));

    registMenuData();       // 메뉴 정보 등록

    ui->label->installEventFilter(this);
    ui->old_menu_1->installEventFilter(this);
    ui->old_menu_2->installEventFilter(this);
    ui->old_menu_3->installEventFilter(this);
    ui->old_menu_4->installEventFilter(this);
    ui->old_menu_5->installEventFilter(this);
    ui->old_menu_6->installEventFilter(this);

    ui->mid_menu_1->installEventFilter(this);
    ui->mid_menu_2->installEventFilter(this);
    ui->mid_menu_3->installEventFilter(this);
    ui->mid_menu_4->installEventFilter(this);
    ui->mid_menu_5->installEventFilter(this);
    ui->mid_menu_6->installEventFilter(this);

    ui->young_menu_1->installEventFilter(this);
    ui->young_menu_2->installEventFilter(this);
    ui->young_menu_3->installEventFilter(this);
    ui->young_menu_4->installEventFilter(this);
    ui->young_menu_5->installEventFilter(this);
    ui->young_menu_6->installEventFilter(this);
    ui->young_menu_7->installEventFilter(this);
    ui->young_menu_8->installEventFilter(this);
    ui->young_menu_9->installEventFilter(this);       // 메뉴에 이벤트 추가

    ordernumber = 1;
    init();     // 화면 초기화

    /*
    detecthumantimer = new QTimer(this);
    connect(detecthumantimer,SIGNAL(timeout()),this,SLOT(detecthuman()));
    timer->start(1000);
    키오스크에 사람이 왔는지 확인하는 타이머
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->label && event->type() == QMouseEvent::MouseButtonPress)
    {
        detectFace();           // 얼굴 인식
    }
    else if(watched == ui->mid_menu_1 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->mid_menu_1);
    }
    else if(watched == ui->mid_menu_2 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->mid_menu_2);
    }
    else if(watched == ui->mid_menu_3 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->mid_menu_3);
    }
    else if(watched == ui->mid_menu_4 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->mid_menu_4);
    }
    else if(watched == ui->mid_menu_5 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->mid_menu_5);
    }
    else if(watched == ui->mid_menu_6 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->mid_menu_6);
    }
    else if(watched == ui->young_menu_1 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_1);
    }
    else if(watched == ui->young_menu_2 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_2);
    }
    else if(watched == ui->young_menu_3 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_3);
    }
    else if(watched == ui->young_menu_4 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_4);
    }
    else if(watched == ui->young_menu_5 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_5);
    }
    else if(watched == ui->young_menu_6 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_6);
    }
    else if(watched == ui->young_menu_7 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_7);
    }
    else if(watched == ui->young_menu_8 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_8);
    }
    else if(watched == ui->young_menu_9 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->young_menu_9);
    }
    else if(watched == ui->old_menu_1 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->old_menu_1);
    }
    else if(watched == ui->old_menu_2 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->old_menu_2);
    }
    else if(watched == ui->old_menu_3 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->old_menu_3);
    }
    else if(watched == ui->old_menu_4 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->old_menu_4);
    }
    else if(watched == ui->old_menu_5 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->old_menu_5);
    }
    else if(watched == ui->old_menu_6 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->old_menu_6);
    }
    return QWidget::eventFilter(watched, event);
} // 메뉴 이미지 클릭 시 이벤트

void MainWindow::init()
{
    ui->stackedWidget->setCurrentIndex(0);

    baskcount = 0;          // 주문 내역 수 초기화
    finalprice = 0;         // 최종 주문 가격 초기화
    timecount = 3;          // 타이머 초기화
    ui->countlabel->setText(QString::number(timecount) + " 초뒤에 자동으로 종료됩니다!");
    ui->basketlayout->setContentsMargins(0,0,0,400);
    basketvector.clear();   // 주문 내역 저장 구조체 벡터 초기화
    phonenumber = "";       // 핸드폰 번호 정보 초기화
} // 초기화

void MainWindow::detectFace()
{
    age = AGE_OLD;
    switch(age)
    {
    case AGE_YOUNG:
        ui->stackedWidget->setCurrentIndex(1);
        ui->menudisplaywidget->setCurrentIndex(0);
        young_displayHambugerMenu();
        break;
    case AGE_MIDDLE:
        ui->stackedWidget->setCurrentIndex(1);
        ui->menudisplaywidget->setCurrentIndex(1);
        mid_displayHambugerMenu();
        break;
    case AGE_OLD:
        ui->stackedWidget->setCurrentIndex(2);
        ui->old_select->setCurrentIndex(0);
        break;
    }
} // 얼굴 인식 결과 도출

void MainWindow::showPopup(MyMenu* menu)
{
    popupwindows = new popup(this, menu->getName(), menu->getPrice(), menutype);
    connect(popupwindows, SIGNAL(sendValue(QMap<QString, QString>)), this, SLOT(setValue(QMap<QString, QString>)));
    // popup에서 보내주는 sendValue signal을 받아 setValue로 연결
    if (baskcount < 5)
        popupwindows->initstackwideget();
    else
    {
        popupwindows->displayWarning();
        popupwindows->adjustSize();
    } // 주문 내역 수가 5이상이면 경고 창을 띄움
    popupwindows->move(QApplication::desktop()->rect().center()
                       - popupwindows->rect().center());
    // 팝업 윈도우를 화면의 가운데로 위치시킴
    popupwindows->show();
} // 팝업 윈도우 띄움

void MainWindow::young_displayHambugerMenu()
{
    menutype = HAMBURGER;
    ui->young_menu_1->setInfo(hamburgerinfo[0],300);
    ui->young_menu_2->setInfo(hamburgerinfo[1],300);
    ui->young_menu_3->setInfo(hamburgerinfo[2],300);
    ui->young_menu_4->setInfo(hamburgerinfo[3],300);
    ui->young_menu_5->setInfo(hamburgerinfo[4],300);
    ui->young_menu_6->setInfo(hamburgerinfo[5],300);
} // 햄버거 메뉴 출력

void MainWindow::young_displaySideMenu()
{
    menutype = SIDE;
    ui->young_menu_1->setInfo(sidemenuinfo[0],300);
    ui->young_menu_2->setInfo(sidemenuinfo[1],300);
    ui->young_menu_3->setInfo(sidemenuinfo[2],300);
    ui->young_menu_4->setInfo(sidemenuinfo[3],300);
    ui->young_menu_5->setInfo(sidemenuinfo[4],300);
    ui->young_menu_6->setInfo(sidemenuinfo[5],300);
} // 사이드 메뉴 출력

void MainWindow::young_displayBeverageMenu()
{
    menutype = BEVERAGE;
    ui->young_menu_1->setInfo(beverageinfo[0],300);
    ui->young_menu_2->setInfo(beverageinfo[1],300);
    ui->young_menu_3->setInfo(beverageinfo[2],300);
    ui->young_menu_4->setInfo(beverageinfo[3],300);
    ui->young_menu_5->setInfo(beverageinfo[4],300);
    ui->young_menu_6->setInfo(beverageinfo[5],300);
} // 음료 메뉴 출력

void MainWindow::mid_displayHambugerMenu()
{
    menutype = HAMBURGER;
    ui->mid_menu_1->setInfo(hamburgerinfo[0],400);
    ui->mid_menu_2->setInfo(hamburgerinfo[1],400);
    ui->mid_menu_3->setInfo(hamburgerinfo[2],400);
    ui->mid_menu_4->setInfo(hamburgerinfo[3],400);
    ui->mid_menu_5->setInfo(hamburgerinfo[4],400);
    ui->mid_menu_6->setInfo(hamburgerinfo[5],400);

} // 햄버거 메뉴 출력

void MainWindow::mid_displaySideMenu()
{
    menutype = SIDE;
    ui->mid_menu_1->setInfo(sidemenuinfo[0],400);
    ui->mid_menu_2->setInfo(sidemenuinfo[1],400);
    ui->mid_menu_3->setInfo(sidemenuinfo[2],400);
    ui->mid_menu_4->setInfo(sidemenuinfo[3],400);
    ui->mid_menu_5->setInfo(sidemenuinfo[4],400);
    ui->mid_menu_6->setInfo(sidemenuinfo[5],400);
} // 사이드 메뉴 출력

void MainWindow::mid_displayBeverageMenu()
{
    menutype = BEVERAGE;
    ui->mid_menu_1->setInfo(beverageinfo[0],400);
    ui->mid_menu_2->setInfo(beverageinfo[1],400);
    ui->mid_menu_3->setInfo(beverageinfo[2],400);
    ui->mid_menu_4->setInfo(beverageinfo[3],400);
    ui->mid_menu_5->setInfo(beverageinfo[4],400);
    ui->mid_menu_6->setInfo(beverageinfo[5],400);
} // 음료 메뉴 출력

void MainWindow::old_displayHambugerMenu()
{
    menutype = HAMBURGER;
    ui->old_menu_1->setInfo(hamburgerinfo[0],500);
    ui->old_menu_2->setInfo(hamburgerinfo[1],500);
    ui->old_menu_3->setInfo(hamburgerinfo[2],500);
    ui->old_menu_4->setInfo(hamburgerinfo[3],500);
    ui->old_menu_5->setInfo(hamburgerinfo[4],500);
    ui->old_menu_6->setInfo(hamburgerinfo[5],500);

} // 햄버거 메뉴 출력

void MainWindow::old_displaySideMenu()
{
    menutype = SIDE;
    ui->old_menu_1->setInfo(sidemenuinfo[0],500);
    ui->old_menu_2->setInfo(sidemenuinfo[1],500);
    ui->old_menu_3->setInfo(sidemenuinfo[2],500);
    ui->old_menu_4->setInfo(sidemenuinfo[3],500);
    ui->old_menu_5->setInfo(sidemenuinfo[4],500);
    ui->old_menu_6->setInfo(sidemenuinfo[5],500);
} // 사이드 메뉴 출력

void MainWindow::old_displayBeverageMenu()
{
    menutype = BEVERAGE;
    ui->old_menu_1->setInfo(beverageinfo[0],500);
    ui->old_menu_2->setInfo(beverageinfo[1],500);
    ui->old_menu_3->setInfo(beverageinfo[2],500);
    ui->old_menu_4->setInfo(beverageinfo[3],500);
    ui->old_menu_5->setInfo(beverageinfo[4],500);
    ui->old_menu_6->setInfo(beverageinfo[5],500);
} // 음료 메뉴 출력

void MainWindow::showCheck()
{
    int size = (QApplication::desktop()->height()-300) / 5;
    for(int i = 0 ; i < basketvector.size(); i++)
    {
        check = new checklist(this,basketvector[i].menuname,basketvector[i].sidemenu,basketvector[i].beverage,
                              basketvector[i].count, basketvector[i].price, basketvector[i].menutype);
        connect(check, SIGNAL(deletelist(checklist*)), this, SLOT(deletelist(checklist*)));
        check->setMinimumSize(QApplication::desktop()->width()-80,size);
        ui->checklayout->addWidget(check,0,Qt::AlignTop|Qt::AlignLeft);
    }
    ui->pricelabel->setText("총 가격 : " + QString::number(finalprice));
    ui->checklayout->setContentsMargins(0,0,0,size*(5-baskcount));
} // 주문 확인 화면

void MainWindow::showFinish()
{
    ui->stackedWidget->setCurrentIndex(FINISH);     // 마지막 화면으로 이동
    ui->ordernumber->setText(QString::number(ordernumber));
    ordernumber++;

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(countupdate()));
    timer->start(1000);

} // 마지막 화면(주문 번호 확인)

void MainWindow::setBasketMargin()
{
    ui->basketlayout->setContentsMargins(0,0,0,bask->height()*(5-baskcount));
} // 주문 내역 리스트를 상단 고정하기 위해 margin 설정

void MainWindow::setValue(QMap<QString, QString> value)
{
    basketlist basklist{"","","",0,1,0};      // 주문 내역 저장 구조체
    QMap<QString,QString>::iterator iter;
    iter = value.find("mainmenu");
    basklist.menuname = iter.value();
    iter = value.find("sidemenu");
    basklist.sidemenu=iter.value();
    iter = value.find("beverage");
    basklist.beverage=iter.value();
    iter = value.find("price");
    basklist.price = iter.value().toInt();
    finalprice += iter.value().toInt();
    iter = value.find("count");
    basklist.count = iter.value().toInt();
    iter = value.find("menutype");
    basklist.menutype = iter.value().toInt();   // 주문내역 정보 저장
    basketvector.append(basklist);          // 주문 내역 벡터에 추가

    bask = new basket(this, basklist.menuname,basklist.sidemenu,basklist.beverage,QString::number(basklist.count));      // 주문내역 위젯 생성
    connect(bask, SIGNAL(deleteBasket(basket*)), this, SLOT(deleteBasket(basket*)));  // 주문내역에서 삭제버튼이나 갯수가 0이 됐을때 deleteBasket실행
    bask->setMinimumSize(QApplication::desktop()->width()-80,80);       // 위젯 크기 설정
    ui->basketlayout->addWidget(bask,0,Qt::AlignTop|Qt::AlignLeft);     // 주문내역 위젯 추가
    baskcount++;        // 주문 개수 증가
    setBasketMargin();  // 주문 내역 공간 조정
}

void MainWindow::setPhoneNumber(QString number)
{
    phonenumber = number;
    showFinish();
} // kakaopopup에서 입력한 전화번호 입력

void MainWindow::countupdate()
{
    timecount--;
    ui->countlabel->setText(QString::number(timecount) + " 초뒤에 자동으로 종료됩니다!");
    if(timecount ==0)
    {
        timer->stop();
        delete timer;
        QLayoutItem* item;
        while((item = ui->checklayout->takeAt(0)))
        {
            delete item->widget();
        } // layout 안의 위젯 삭제
        while((item = ui->basketlayout->takeAt(0)))
        {
            delete item->widget();
        } // layout 안의 위젯 삭제
        init();
    }
} // 마지막 화면 자동 종료용

void MainWindow::detecthuman()
{

} // 키오스크 앞에 사람이 있는지 확인

void MainWindow::deleteBasket(basket* tmp)
{
    QString menuname = tmp->getName();
    QString side = tmp->getSide();
    QString beverage = tmp->getBeverage();
    int count = tmp->getCount();
    for(int i = 0;i < baskcount ;i++)
    {
        if(menuname == basketvector[i].menuname &&
                side == basketvector[i].sidemenu &&
                beverage == basketvector[i].beverage &&
                count == basketvector[i].count)
        {
            finalprice -= basketvector[i].price;
            basketvector.remove(i);
            break;
        }
    } // 메뉴 이름을 가진 정보 제거
    baskcount --;
    setBasketMargin();
} // 주문 내역 삭제

void MainWindow::deletelist(checklist* tmp)
{
    QString menuname = tmp->getName();
    QString side = tmp->getSide();
    QString beverage = tmp->getBeverage();
    int count = tmp->getCount();
    for(int i = 0;i < baskcount ;i++)
    {
        if(menuname == basketvector[i].menuname &&
                side == basketvector[i].sidemenu &&
                beverage == basketvector[i].beverage &&
                count == basketvector[i].count)
        {
            finalprice -= basketvector[i].price;
            basketvector.remove(i);
            break;
        }
    } // 메뉴 이름을 가진 정보 제거
    baskcount --;
    ui->pricelabel->setText("총 가격 : " + QString::number(finalprice));
    ui->basketlayout->setContentsMargins(0,0,0,check->height()*(5-baskcount));
} // 주문 내역 삭제
void MainWindow::registMenuData()
{
    hamburgerinfo[0] = {"/home/pi/kiosk/image/burger/1955.png","1955","5000"};
    hamburgerinfo[1] = {"/home/pi/kiosk/image/burger/더블1955.png","더블1955","5500"};
    hamburgerinfo[2] = {"/home/pi/kiosk/image/burger/맥치킨.png","맥치킨","5500"};
    hamburgerinfo[3] = {"/home/pi/kiosk/image/burger/맥치킨모짜렐라.png","맥치킨모짜렐라","5000"};
    hamburgerinfo[4] = {"/home/pi/kiosk/image/burger/빅맥.png","빅맥","5000"};
    hamburgerinfo[5] = {"/home/pi/kiosk/image/burger/상하이.png","상하이","4000"};

    sidemenuinfo[0] = {"/home/pi/kiosk/image/sidemenu/후렌치후라이.png","후렌치후라이","1500"};
    sidemenuinfo[1] = {"/home/pi/kiosk/image/sidemenu/맥너겟.png","맥너겟","1000"};
    sidemenuinfo[2] = {"/home/pi/kiosk/image/sidemenu/스낵랩.png","스낵랩","2500"};
    sidemenuinfo[3] = {"/home/pi/kiosk/image/sidemenu/치즈스틱.png","치즈스틱","1500"};
    sidemenuinfo[4] = {"/home/pi/kiosk/image/sidemenu/애플파이.png","애플파이","1300"};
    sidemenuinfo[5] = {"/home/pi/kiosk/image/sidemenu/콘파이.png","콘파이","1500"};

    beverageinfo[0] = {"/home/pi/kiosk/image/beverage/콜라.png","콜라","1000"};
    beverageinfo[1] = {"/home/pi/kiosk/image/beverage/스프라이트.png","스프라이트","1000"};
    beverageinfo[2] = {"/home/pi/kiosk/image/beverage/환타.png","환타","1000"};
    beverageinfo[3] = {"/home/pi/kiosk/image/beverage/원두커피.png","원두커피","2000"};
    beverageinfo[4] = {"/home/pi/kiosk/image/beverage/아메리카노.png","아메리카노","1500"};
    beverageinfo[5] = {"/home/pi/kiosk/image/beverage/배칠러.png","배칠러","3000"};
} // 메뉴 정보 등록

void MainWindow::on_young_hambugerpushbutton_clicked()
{
    young_displayHambugerMenu();
} // 청년층 햄버거 메뉴 버튼 클릭 시

void MainWindow::on_young_sidepushbutton_clicked()
{
    young_displaySideMenu();
} // 청년층 사이드 메뉴 버튼 클릭 시

void MainWindow::on_young_beveragepushbutton_clicked()
{
    young_displayBeverageMenu();
} // 청년층 음료 메뉴 버튼 클릭 시

void MainWindow::on_mid_hambugerpushbutton_clicked()
{
    mid_displayHambugerMenu();
} // 중년층 햄버거 메뉴 버튼 클릭 시

void MainWindow::on_mid_sidepushbutton_clicked()
{
    mid_displaySideMenu();
} // 중년층 사이드 메뉴 버튼 클릭 시

void MainWindow::on_mid_beveragepushbutton_clicked()
{
    mid_displayBeverageMenu();
} // 중년층 음료 메뉴 버튼 클릭 시

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_finishButton_clicked()
{
   ui->stackedWidget->setCurrentIndex(CHECK);
   showCheck();
} // 주문 완료 버튼 클릭 시

void MainWindow::on_showkakaobutton_clicked()
{
    kakaopopupwindows = new kakaopopup(this);
    kakaopopupwindows->move(QApplication::desktop()->rect().center()
                       - kakaopopupwindows->rect().center());
    // 팝업 윈도우를 화면의 가운데로 위치시킴
    kakaopopupwindows->show();
    connect(kakaopopupwindows, SIGNAL(kakaoNumber(QString)), this, SLOT(setPhoneNumber(QString)));
} // 카카오톡 알림톡 이용을 위한 핸드폰 번호 입력 팝업 추가

void MainWindow::on_returnbutton_clicked()
{
    if(age!=AGE_OLD)
    {
        ui->stackedWidget->setCurrentIndex(1);
        QLayoutItem* item;
        while((item = ui->checklayout->takeAt(0)))
        {
            delete item->widget();
        } // layout 안의 위젯 삭제
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(2);

    }

} // 주문 화면으로 다시 돌아감


void MainWindow::on_old_hambugerpushbutton_clicked()
{
    ui->old_title->setText("원하는 햄버거를 선택해주세요");
    ui->old_select->setCurrentIndex(1);
    old_displayHambugerMenu();
}

void MainWindow::on_old_sidepushbutton_clicked()
{
    ui->old_title->setText("원하는 곁들이 음식을 선택해주세요");
    ui->old_select->setCurrentIndex(1);
    old_displaySideMenu();
}

void MainWindow::on_old_beveragepushbutton_clicked()
{
    ui->old_title->setText("원하는 음료를 선택해주세요");
    ui->old_select->setCurrentIndex(1);
    old_displayBeverageMenu();
}

void MainWindow::on_prepushbutton_clicked()
{
    ui->old_select->setCurrentIndex(0);
}

void MainWindow::on_old_finishpushbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(CHECK);
    showCheck();
}
