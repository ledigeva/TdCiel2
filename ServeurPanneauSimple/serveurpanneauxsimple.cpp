#include "serveurpanneauxsimple.h"
#include "ui_serveurpanneauxsimple.h"

ServeurPanneauxSimple::ServeurPanneauxSimple(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurPanneauxSimple)
{
    ui->setupUi(this);
    socketServeur = new QUdpSocket(this);
}

ServeurPanneauxSimple::~ServeurPanneauxSimple()
{
    delete ui;
}

void ServeurPanneauxSimple::on_pushButton_clicked()
{
     QByteArray datagram = ui->textEditInformation->toPlainText().toUtf8();
     socketServeur->writeDatagram(datagram, QHostAddress::Broadcast, 45467);
     qDebug() << "Message envoyé : " << datagram;


}

