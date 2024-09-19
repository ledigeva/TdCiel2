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
