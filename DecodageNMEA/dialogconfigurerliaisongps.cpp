#include "dialogconfigurerliaisongps.h"
#include "ui_dialogconfigurerliaisongps.h"

DialogConfigurerLiaisonGPS::DialogConfigurerLiaisonGPS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogConfigurerLiaisonGPS)
{
    ui->setupUi(this);
}

DialogConfigurerLiaisonGPS::~DialogConfigurerLiaisonGPS()
{
    delete ui;
}


