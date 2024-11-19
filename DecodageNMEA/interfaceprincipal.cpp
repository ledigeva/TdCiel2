#include "interfaceprincipal.h"
#include "ui_interfaceprincipal.h"

InterfacePrincipal::InterfacePrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InterfacePrincipal)
{
    ui->setupUi(this);
}

InterfacePrincipal::~InterfacePrincipal()
{
    delete ui;
}
