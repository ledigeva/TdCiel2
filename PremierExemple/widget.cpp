#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

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

void Widget::on_pushButtonMonBouton_clicked()
{
    QMessageBox message;
    message.setText("Je suis une chips");
    message.exec();
    ui->pushButtonMonBouton->setText("amande");
    ui->groupBox->hide();
}

