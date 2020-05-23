#include "kakaopopup.h"
#include "ui_kakaopopup.h"

kakaopopup::kakaopopup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kakaopopup)
{
    ui->setupUi(this);
}

kakaopopup::~kakaopopup()
{
    delete ui;
}
