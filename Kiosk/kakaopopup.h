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

private:
    Ui::kakaopopup *ui;
};

#endif // KAKAOPOPUP_H
