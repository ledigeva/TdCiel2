#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QWidget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonDecoder_clicked()
{
    // Récupérer le texte de l'objet lineEditTexteADecoder
    QString texte=ui->lineEditDecoder->text();
    // Découper le texte selon le ";" et mettre chaque champs dans le "tableau" tab
    QStringList tab=texte.split(";");
    ui->lineEditNom->setText(tab.at(0));
    ui->lineEditPrenom->setText(tab.at(1));
    ui->lineEditAge->setText(tab.at(2));
    ui->lineEditTaille->setText(tab.at(3));
    ui->lineEditPoids->setText(tab.at(4));
}

