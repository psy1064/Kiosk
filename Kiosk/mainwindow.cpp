#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menu.load("/home/pi/kiosk/image/dju_logo.png");
    ui->main_logo->setPixmap(menu.scaled(100,100,Qt::KeepAspectRatio));

    ui->label->installEventFilter(this);
    ui->mid_menu_1->installEventFilter(this);
    ui->mid_menu_2->installEventFilter(this);
    ui->mid_menu_3->installEventFilter(this);
    ui->mid_menu_4->installEventFilter(this);
    ui->mid_menu_5->installEventFilter(this);
    ui->mid_menu_6->installEventFilter(this);       // 메뉴에 이벤트 추가

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
    return QWidget::eventFilter(watched, event);
} // 메뉴 이미지 클릭 시 이벤트

void MainWindow::init()
{
    ui->stackedWidget->setCurrentIndex(0);
    baskcount = 0;          // 주문 내역 수 초기화
    finalprice = 0;         // 최종 주문 가격 초기화
    timecount = 3;          // 타이머 초기화
    ui->countlabel->setText(QString::number(timecount) + " 초뒤에 자동으로 종료됩니다!");
    basketvector.clear();   // 주문 내역 저장 구조체 벡터 초기화
    phonenumber = "";       // 핸드폰 번호 정보 초기화
} // 초기화

void MainWindow::detectFace()
{
    age = AGE_YOUNG;
    switch(age)
    {
    case AGE_YOUNG:
        ui->stackedWidget->setCurrentIndex(1);
        ui->menudisplaywidget->setCurrentIndex(0);
        break;
    case AGE_MIDDLE:
        ui->stackedWidget->setCurrentIndex(1);
        ui->menudisplaywidget->setCurrentIndex(1);
        displayHambugerMenu();
        break;
    case AGE_OLD:
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

void MainWindow::displayHambugerMenu()
{
    menutype = HAMBURGER;
    menu.load("/home/pi/kiosk/image/burger/1955.png");
    ui->mid_menu_1->setInfo(menu,400,"1955","5000");

    menu.load("/home/pi/kiosk/image/burger/더블1955.png");
    ui->mid_menu_2->setInfo(menu,400,"더블1955","5500");

    menu.load("/home/pi/kiosk/image/burger/맥치킨.png");
    ui->mid_menu_3->setInfo(menu,400,"맥치킨","5500");

    menu.load("/home/pi/kiosk/image/burger/맥치킨모짜렐라.png");
    ui->mid_menu_4->setInfo(menu,400,"맥치킨모짜렐라","5000");

    menu.load("/home/pi/kiosk/image/burger/빅맥.png");
    ui->mid_menu_5->setInfo(menu,400,"빅맥","5000");

    menu.load("/home/pi/kiosk/image/burger/상하이.png");
    ui->mid_menu_6->setInfo(menu,400,"상하이","4000");
} // 햄버거 메뉴 출력

void MainWindow::displaySideMenu()
{
    menutype = SIDE;
    menu.load("/home/pi/kiosk/image/sidemenu/콘파이.png");
    ui->mid_menu_1->setInfo(menu,400,"콘파이","1500");

    menu.load("/home/pi/kiosk/image/sidemenu/맥너겟.png");
    ui->mid_menu_2->setInfo(menu,400,"맥너겟","1000");

    menu.load("/home/pi/kiosk/image/sidemenu/스낵랩.png");
    ui->mid_menu_3->setInfo(menu,400,"스낵랩","2500");

    menu.load("/home/pi/kiosk/image/sidemenu/치즈스틱.png");
    ui->mid_menu_4->setInfo(menu,400,"치즈스틱","1500");

    menu.load("/home/pi/kiosk/image/sidemenu/애플파이.png");
    ui->mid_menu_5->setInfo(menu,400,"애플파이","1300");

    menu.load("/home/pi/kiosk/image/sidemenu/후렌치후라이.png");
    ui->mid_menu_6->setInfo(menu,400,"후렌치후라이","1000");
} // 사이드 메뉴 출력

void MainWindow::displayBeverageMenu()
{
    menutype = BEVERAGE;
    menu.load("/home/pi/kiosk/image/beverage/콜라.png");
    ui->mid_menu_1->setInfo(menu,400,"콜라","1000");

    menu.load("/home/pi/kiosk/image/beverage/스프라이트.png");
    ui->mid_menu_2->setInfo(menu,400,"스프라이트","1000");
	
    menu.load("/home/pi/kiosk/image/beverage/환타.png");
    ui->mid_menu_3->setInfo(menu,400,"환타","1000");

    menu.load("/home/pi/kiosk/image/beverage/원두커피.png");
    ui->mid_menu_4->setInfo(menu,400,"원두커피","2000");

    menu.load("/home/pi/kiosk/image/beverage/아메리카노.png");
    ui->mid_menu_5->setInfo(menu,400,"아메리카노","1500");

    menu.load("/home/pi/kiosk/image/beverage/배칠러.png");
    ui->mid_menu_6->setInfo(menu,400,"배칠러","3000");
} // 음료 메뉴 출력

void MainWindow::showCheck()
{
    int size = (QApplication::desktop()->height()-300) / 5;
    for(int i = 0 ; i < basketvector.size(); i++)
    {
        check = new checklist(this,basketvector[i].menuname,basketvector[i].sidemenu,basketvector[i].beverage,
                              basketvector[i].count, basketvector[i].price, basketvector[i].menutype);
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
    struct basketlist basklist{"","","",0,1,0};      // 주문 내역 저장 구조체
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

void MainWindow::on_mid_hambugerpushbutton_clicked()
{
    displayHambugerMenu();
} // 햄버거 메뉴 버튼 클릭 시

void MainWindow::on_mid_sidepushbutton_clicked()
{
    displaySideMenu();
} // 사이드 메뉴 버튼 클릭 시

void MainWindow::on_mid_beveragepushbutton_clicked()
{
    displayBeverageMenu();
} // 음료 메뉴 버튼 클릭 시

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
} // 카카오톡 챗봇 이용을 위한 핸드폰 번호 입력 팝업 추가

void MainWindow::on_returnbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(age);
    QLayoutItem* item;
    while((item = ui->checklayout->takeAt(0)))
    {
        delete item->widget();
    } // layout 안의 위젯 삭제
} // 주문 화면으로 다시 돌아감
