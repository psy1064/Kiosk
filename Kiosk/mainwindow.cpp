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
    ui->menu_1->installEventFilter(this);
    ui->menu_2->installEventFilter(this);
    ui->menu_3->installEventFilter(this);
    ui->menu_4->installEventFilter(this);
    ui->menu_5->installEventFilter(this);
    ui->menu_6->installEventFilter(this);       // 메뉴에 이벤트 추가

    init();     // 화면 초기화
    /* -- 키오스크에 사람이 왔는지 확인하는 함수 추가 --*/
    detectFace();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->label && event->type() == QMouseEvent::MouseButtonPress)
    {
        ui->stackedWidget->setCurrentIndex(age);   // 얼굴인식 나이 결과에 따라 화면 다르게
    }
    else if(watched == ui->menu_1 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->menu_1);
    }
    else if(watched == ui->menu_2 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->menu_2);
    }
    else if(watched == ui->menu_3 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->menu_3);
    }
    else if(watched == ui->menu_4 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->menu_4);
    }
    else if(watched == ui->menu_5 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->menu_5);
    }
    else if(watched == ui->menu_6 && event->type() == QMouseEvent::MouseButtonPress)
    {
        showPopup(ui->menu_6);
    }
    return QWidget::eventFilter(watched, event);
} // 메뉴 이미지 클릭 시 이벤트

void MainWindow::init()
{
    ui->stackedWidget->setCurrentIndex(0);
    baskcount = 0;          // 주문 내역 수 초기화
    finalprice = 0;         // 최종 주문 가격 초기화
    basketvector.empty();   // 주문 내역 저장 구조체 벡터 초기화
    phonenumber = "";       // 핸드폰 번호 정보 초기화
} // 초기화

void MainWindow::detectFace()
{
    age = AGE_MIDDLE;
    switch(age)
    {
    case AGE_YOUNG:
        break;
    case AGE_MIDDLE:
        displayHambugerMenu();
        break;
    case AGE_OLD:
        break;
    }
}

void MainWindow::displayHambugerMenu()
{
    menutype = HAMBURGER;
    menu.load("/home/pi/kiosk/image/burger/1955 버거.png");
    ui->menu_1->setInfo(menu,400,"1955 버거","5000");

    menu.load("/home/pi/kiosk/image/burger/더블1955 버거.png");
    ui->menu_2->setInfo(menu,400,"더블1955 버거","5500");

    menu.load("/home/pi/kiosk/image/burger/맥치킨.png");
    ui->menu_3->setInfo(menu,400,"맥치킨","5500");

    menu.load("/home/pi/kiosk/image/burger/맥치킨모짜렐라.png");
    ui->menu_4->setInfo(menu,400,"맥치킨모짜렐라","5000");

    menu.load("/home/pi/kiosk/image/burger/빅맥.png");
    ui->menu_5->setInfo(menu,400,"빅맥","5000");

    menu.load("/home/pi/kiosk/image/burger/상하이.png");
    ui->menu_6->setInfo(menu,400,"상하이","4000");
} // 햄버거 메뉴 출력

void MainWindow::displaySideMenu()
{
    menutype = SIDE;
    menu.load("/home/pi/kiosk/image/sidemenu/콘파이.png");
    ui->menu_1->setInfo(menu,400,"콘파이","1500");

    menu.load("/home/pi/kiosk/image/sidemenu/맥너겟.png");
    ui->menu_2->setInfo(menu,400,"맥너겟","1000");

    menu.load("/home/pi/kiosk/image/sidemenu/스낵랩.png");
    ui->menu_3->setInfo(menu,400,"스낵랩","2500");

    menu.load("/home/pi/kiosk/image/sidemenu/치즈스틱.png");
    ui->menu_4->setInfo(menu,400,"치즈스틱","1500");

    menu.load("/home/pi/kiosk/image/sidemenu/애플파이.png");
    ui->menu_5->setInfo(menu,400,"애플파이","1300");

    menu.load("/home/pi/kiosk/image/sidemenu/후렌치후라이.png");
    ui->menu_6->setInfo(menu,400,"후렌치후라이","1000");
} // 사이드 메뉴 출력

void MainWindow::displayBeverageMenu()
{
    menutype = BEVERAGE;
    menu.load("/home/pi/kiosk/image/beverage/콜라.png");
    ui->menu_1->setInfo(menu,400,"콜라","1000");

    menu.load("/home/pi/kiosk/image/beverage/스프라이트.png");
    ui->menu_2->setInfo(menu,400,"스프라이트","1000");
	
    menu.load("/home/pi/kiosk/image/beverage/환타.png");
    ui->menu_3->setInfo(menu,400,"환타","1000");

    menu.load("/home/pi/kiosk/image/beverage/원두커피.png");
    ui->menu_4->setInfo(menu,400,"원두커피","2000");

    menu.load("/home/pi/kiosk/image/beverage/아메리카노.png");
    ui->menu_5->setInfo(menu,400,"아메리카노","1500");

    menu.load("/home/pi/kiosk/image/beverage/배칠러.png");
    ui->menu_6->setInfo(menu,400,"배칠러","3000");
} // 음료 메뉴 출력

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
    popupwindows->move(QApplication::desktop()->screen()->rect().center()
                       - popupwindows->rect().center());
    // 팝업 윈도우를 화면의 가운데로 위치시킴
    popupwindows->show();
} // 팝업 윈도우 띄움

void MainWindow::showCheck()
{
    int size = (QApplication::desktop()->height()-200) / 5;
    QString title;
    for(int i = 0 ; i < basketvector.size(); i++)
    {
        QLabel* label = new QLabel();
        label->setMinimumHeight(size);
        title = basketvector[i].menuname;
        if(basketvector[i].sidemenu != "")
        {
            title.append("( " + basketvector[i].sidemenu + ", " + basketvector[i].beverage + " )");
        }
        label->setText(title);
        ui->checklayout->addWidget(label);
    }
    ui->pricelabel->setText("총 가격 : " + QString::number(finalprice));
    ui->checklayout->setContentsMargins(0,0,0,size*(5-baskcount));
} // 주문 확인 화면

void MainWindow::setBasketMargin()
{
    ui->basketlayout->setContentsMargins(0,0,0,bask->height()*(5-baskcount));
} // 주문 내역 리스트를 상단 고정하기 위해 margin 설정

void MainWindow::setValue(QMap<QString, QString> value)
{
    QString menuname;
    basketlist basklist{"","","",0,1};      // 주문 내역 저장 구조체
    QMap<QString,QString>::iterator iter;
    iter = value.find("mainmenu");
    menuname = iter.value();                // 메뉴 이름 저장
    basklist.menuname=menuname;
    iter = value.find("sidemenu");
    if(!(iter.value() == ""))
    {
        menuname.append("( " + iter.value());
        basklist.sidemenu=iter.value();
        iter = value.find("beverage");
        menuname.append(", " + iter.value() + " )");
        basklist.beverage=iter.value();
    }
    iter = value.find("price");
    finalprice += iter.value().toInt();
    basketvector.append(basklist);          // 주문 내역 벡터에 추가

    bask = new basket(this, menuname);      // 주문내역 위젯 생성
    connect(bask, SIGNAL(deleteBasket()), this, SLOT(deleteBasket()));  // 주문내역에서 삭제버튼이나 갯수가 0이 됐을때 deleteBasket실행
    bask->setMinimumSize(QApplication::desktop()->width()-80,80);       // 위젯 크기 설정
    ui->basketlayout->addWidget(bask,0,Qt::AlignTop|Qt::AlignLeft);     // 주문내역 위젯 추가
    baskcount++;        // 주문 개수 증가
    qDebug() << bask->baskcount;
    setBasketMargin();  // 주문 내역 공간 조정
}

void MainWindow::setPhoneNumber(QString number)
{
    phonenumber = number;
} // kakaopopup에서 입력한 전화번호 입력

void MainWindow::deleteBasket()
{
    qDebug() << bask->baskcount;
    basketvector.remove(bask->baskcount-1);
    baskcount --;
    setBasketMargin();
} // 주문 내역 삭제

void MainWindow::on_hambugerpushbutton_clicked()
{
    displayHambugerMenu();
} // 햄버거 메뉴 버튼 클릭 시

void MainWindow::on_sidepushbutton_clicked()
{
    displaySideMenu();
} // 사이드 메뉴 버튼 클릭 시

void MainWindow::on_beveragepushbutton_clicked()
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
    kakaopopupwindows->move(QApplication::desktop()->screen()->rect().center()
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
