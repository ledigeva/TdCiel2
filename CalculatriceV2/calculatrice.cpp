#include "calculatrice.h"
#include "ui_calculatrice.h"
#include <QString>
#include <QJSEngine>
#include <math.h>

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
    //connect(ui->pushButton0, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton1, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton2, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton3, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton4, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton5, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton6, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton7, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton8, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
    //connect(ui->pushButton9, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);

    QList<QPushButton*> allButtons = this->findChildren<QPushButton*>();

    foreach(QPushButton* button, allButtons) {
        if(button->text() != "=" && button->text() != "C") {
            connect(button, &QPushButton::clicked, this, &Calculatrice::onQPushButtonCliked);
        }

    }


}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::onQPushButtonCliked()
{

    QPushButton *touche;
    touche = qobject_cast<QPushButton*>(sender());
    //ui->lineEditAfficheur->insert(touche->text());
    ui->lineEditAfficheur->setText(ui->lineEditAfficheur->text()+touche->text());
}

void Calculatrice::on_pushButtonEffacer_clicked()
{
    ui->lineEditAfficheur->clear();
}


void Calculatrice::on_pushButtonEgal_clicked()
{
    //evaluate permet de faire le calcule afficher
    QJSEngine expression;
    ui->lineEditAfficheur->setText(expression.evaluate(ui->lineEditAfficheur->text()).toString());

}

