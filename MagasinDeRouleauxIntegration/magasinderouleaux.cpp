#include "magasinderouleaux.h"
#include "ui_magasinderouleaux.h"

MagasinDeRouleaux::MagasinDeRouleaux(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MagasinDeRouleaux)
{
    ui->setupUi(this);
}

MagasinDeRouleaux::~MagasinDeRouleaux()
{
    delete ui;
}

void MagasinDeRouleaux::on_pushButtonEntrer_clicked()
{

}


void MagasinDeRouleaux::on_pushButtonSortir_clicked()
{

}

void MagasinDeRouleaux::AfficherStock()
{
    ui->listWidgetStock->clear();
    QStringList description = leStock.ObtenirContenueDuStock();
    ui->listWidgetStock->addItems(description);
}

