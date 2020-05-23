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
    void kakaoNumber(QString value);
private slots:
    void inputNumber(QChar num);

    void on_onebutton_clicked();
    void on_twobutton_clicked();
    void on_threebutton_clicked();
    void on_fourbutton_clicked();
    void on_fivebutton_clicked();
    void on_sixbutton_clicked();
    void on_sevenbutton_clicked();
    void on_eightbutton_clicked();
    void on_ninebutton_clicked();
    void on_zerobutton_clicked();
    void on_alldelbutton_clicked();
    void on_delbutton_clicked();
    void on_yesbutton_clicked();
    void on_nobutton_clicked();
    void on_nobutton_2_clicked();
    void on_finishbutton_clicked();

private:
    Ui::kakaopopup *ui;
    QString phonenumber;
};

#endif // KAKAOPOPUP_H
