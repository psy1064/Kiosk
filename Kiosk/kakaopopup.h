#ifndef KAKAOPOPUP_H
#define KAKAOPOPUP_H

#include <QWidget>

namespace Ui {
class kakaopopup;
}

class kakaopopup : public QWidget
{
    Q_OBJECT

public:
    explicit kakaopopup(QWidget *parent = nullptr);
    ~kakaopopup();
signals:
    void kakaoNumber(QString value);    // 메인으로 전화번호 전달
private slots:
    void inputNumber(QChar num);        // 번호에 숫자 추가

    void on_onebutton_clicked();
    void on_twobutton_clicked();
    void on_threebutton_clicked();
    void on_fourbutton_clicked();
    void on_fivebutton_clicked();
    void on_sixbutton_clicked();
    void on_sevenbutton_clicked();
    void on_eightbutton_clicked();
    void on_ninebutton_clicked();
    void on_zerobutton_clicked();       // 해당 숫자 추가
    void on_alldelbutton_clicked();     // 모두 지우기
    void on_delbutton_clicked();        // 뒤에 한글자 지우기
    void on_yesbutton_clicked();
    void on_nobutton_clicked();
    void on_nobutton_2_clicked();
    void on_finishbutton_clicked();

private:
    Ui::kakaopopup *ui;
    QString phonenumber;                // 전화 번호
};

#endif // KAKAOPOPUP_H
