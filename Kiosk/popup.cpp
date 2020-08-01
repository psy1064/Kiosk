#include "popup.h"
#include "ui_popup.h"
#include <QDebug>
popup::popup(QWidget *parent, QString mainmenu, QString menuprice, int menutype) :
    QWidget(parent),
    ui(new Ui::popup)
{
    ui->setupUi(this);
    state = 0;
    ui->pmenu_1->installEventFilter(this);
    ui->pmenu_2->installEventFilter(this);
    ui->pmenu_3->installEventFilter(this);
    ui->pmenu_4->installEventFilter(this);
    ui->pmenu_5->installEventFilter(this);
    ui->pmenu_6->installEventFilter(this);

    ui->singlebutton->setStyleSheet("border-image:url(\"/home/pi/kiosk/image/burger/" + mainmenu + ".png\")");
    ui->setbutton->setStyleSheet("border-image:url(\"/home/pi/kiosk/image/set/" + mainmenu + "세트.png\")");

    info.insert("mainmenu",mainmenu);
    this->menuprice = menuprice.toInt();
    this->menutype = menutype;


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

    count = 1;
}

popup::~popup()
{
    delete ui;
}

void popup::initstackwideget()
{
    if(menutype == HAMBURGER)
    {
        state = 0;
        ui->label->setText("단품으로 드시겠습니까? 세트로 드시겠습니까?");
        ui->stackedWidget->setCurrentIndex(state);
    } // 메뉴 종류가 햄버거 일 경우
    else
    {
        state = 2;
        info.insert("sidemenu","");
        info.insert("beverage","");
        checkMenu();
    } // 메뉴 종류가 햄버거가 아닌 경우

} // 팝업 화면 최초 화면으로 설정

void popup::displaySideMenu()
{
    ui->label->setText("사이드메뉴는 어떤 것을 드시겠습니까?");

    ui->pmenu_1->setInfo(sidemenuinfo[0],300);
    ui->pmenu_2->setInfo(sidemenuinfo[1],300);
    ui->pmenu_3->setInfo(sidemenuinfo[2],300);
    ui->pmenu_4->setInfo(sidemenuinfo[3],300);
    ui->pmenu_5->setInfo(sidemenuinfo[4],300);
    ui->pmenu_6->setInfo(sidemenuinfo[5],300);
} // 사이드메뉴 선택 화면 출력qt

void popup::displayBeverageMenu()
{
    ui->label->setText("음료는 어떤 것을 드시겠습니까?");

    ui->pmenu_1->setInfo(beverageinfo[0],300);
    ui->pmenu_2->setInfo(beverageinfo[1],300);
    ui->pmenu_3->setInfo(beverageinfo[2],300);
    ui->pmenu_4->setInfo(beverageinfo[3],300);
    ui->pmenu_5->setInfo(beverageinfo[4],300);
    ui->pmenu_6->setInfo(beverageinfo[5],300);
} // 음료 선택 화면 출력

void popup::checkMenu()
{
    ui->stackedWidget->setCurrentIndex(state);
    ui->label->setText("주문한 음식이 맞습니까?");
    iter = info.find("mainmenu");
    QString name = iter.value();
    iter = info.find("sidemenu");
    QString side = iter.value();
    iter = info.find("beverage");
    QString bev = iter.value();

    menuinfo tmp;

    if(menutype == HAMBURGER)
    {
        if(side == "")
        {
            tmp.image = "/home/pi/kiosk/image/burger/" + name + ".png";
            tmp.menuname = name;
            tmp.price = "";
            ui->checkmenu_2->setInfo(tmp, 600);
            finalprice = menuprice;
        } // 단품을 선택했을 경우
        else
        {
            tmp.image = "/home/pi/kiosk/image/burger/" + name + ".png";
            tmp.menuname = name;
            ui->checkmenu_2->setInfo(tmp, 300);
            tmp.image = "/home/pi/kiosk/image/sidemenu/" + side + ".png";
            tmp.menuname = side;
            ui->checkmenu_1->setInfo(tmp, 300);
            tmp.image = "/home/pi/kiosk/image/beverage/" + bev + ".png";
            tmp.menuname = bev;
            ui->checkmenu_3->setInfo(tmp, 300);
        } // 세트를 선택했을 경우
    } // 메뉴 종류가 햄버거인 경우
    else if(menutype == SIDE)
    {
        tmp.image = "/home/pi/kiosk/image/sidemenu/" + name + ".png";
        tmp.menuname = name;
        ui->checkmenu_2->setInfo(tmp, 600);
        finalprice = menuprice;
    } // 사이드 메뉴인 경우
    else if(menutype == BEVERAGE)
    {
        tmp.image = "/home/pi/kiosk/image/beverage/" + name + ".png";
        tmp.menuname = name;
        ui->checkmenu_2->setInfo(tmp, 600);
        finalprice = menuprice;
    } // 음료인 경우
} // 최종 확인 화면 출력

void popup::setpopup(MyMenu *menu)
{
    if(state == 1)
    {
        finalprice = menuprice;
        state++;
        info.insert("sidemenu", menu->getName());
        finalprice += menu->getPrice().toInt();

        displayBeverageMenu();
    }
    else if(state == 2)
    {
        info.insert("beverage", menu->getName());
        finalprice += menu->getPrice().toInt();
        checkMenu();
    }

} // 세트 선택 시 진행되는 메커니즘

void popup::displayWarning()
{
    ui->label->setText("추가 주문 불가");
    ui->stackedWidget->setCurrentIndex(3);
} // 주문내역이 5칸이 되었을 때

bool popup::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->pmenu_1 && event->type() == QMouseEvent::MouseButtonPress)
    {
        setpopup(ui->pmenu_1);
    }
    else if(watched == ui->pmenu_2 && event->type() == QMouseEvent::MouseButtonPress)
    {
        setpopup(ui->pmenu_2);
    }
    else if(watched == ui->pmenu_3 && event->type() == QMouseEvent::MouseButtonPress)
    {
        setpopup(ui->pmenu_3);
    }
    else if(watched == ui->pmenu_4 && event->type() == QMouseEvent::MouseButtonPress)
    {
        setpopup(ui->pmenu_4);
    }
    else if(watched == ui->pmenu_5 && event->type() == QMouseEvent::MouseButtonPress)
    {
        setpopup(ui->pmenu_5);
    }
    else if(watched == ui->pmenu_6 && event->type() == QMouseEvent::MouseButtonPress)
    {
        setpopup(ui->pmenu_6);
    }
    return QWidget::eventFilter(watched, event);
} // 메뉴 클릭 시 이벤트

void popup::on_rightbutton_clicked()
{
    info.insert("count",QString::number(count));
    finalprice *= count;
    info.insert("price",QString::number(finalprice));
    info.insert("menutype",QString::number(menutype));
    emit sendValue(info);
    popup::close();
} // 주문 메뉴 화면에서 맞아요 클릭 시

void popup::on_rollbackbutton_clicked()
{
    this->close();
} // 주문 메뉴 화면에서 다시 고를래 클릭 시

void popup::on_setbutton_clicked()
{
    state++;
    ui->stackedWidget->setCurrentIndex(state);
    displaySideMenu();
} // 세트 버튼 클릭 시

void popup::on_singlebutton_clicked()
{
    state = 2;
    info.insert("sidemenu","");
    info.insert("beverage","");
    ui->stackedWidget->setCurrentIndex(state);
    checkMenu();
} // 싱글 버튼 클릭 시

void popup::on_okbutton_clicked()
{
    this->close();
} // 주문 내역 5개 넘겼을 때 알겠습니다 클릭 시

void popup::on_minusButton_clicked()
{
    if(count > 1)
        count --;
    ui->countLabel->setText(QString::number(count));
} // 수량 선택

void popup::on_plusButton_clicked()
{
    count++;
    ui->countLabel->setText(QString::number(count));
} // 수량 선택

void popup::on_ordercancel_clicked()
{
    this->close();
    qDebug() << "h";
}
