#include "panneau.h"
#include "ui_panneau.h"
#include <QNetworkDatagram>

Panneau::Panneau(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Panneau)

{
    ui->setupUi(this);
    socketClient = new QUdpSocket(this);
    if (socketClient->bind(45467, QUdpSocket::ShareAddress)) {
        connect(socketClient, &QUdpSocket::readyRead, this, &Panneau::RecevoirMessage);
        qDebug() << "Client prêt à recevoir des messages sur le port 45467";
    } else {
        qDebug() << "Erreur de liaison du client au port 45467";
    }
}

Panneau::~Panneau()
{
    delete ui;
}

void Panneau::RecevoirMessage()
{
    // Redimensionne le buffer pour recevoir le datagramme
    QHostAddress sender;
    quint16 senderPort;

    while (socketClient->hasPendingDatagrams()) {
        // QByteArray buffer;
        // buffer.resize(socketClient->pendingDatagramSize());
        // socketClient->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
        //
        // qDebug() << "Reçu de" << sender.toString() << ":" << senderPort << "Données:" << buffer;


        QNetworkDatagram datagram = socketClient->receiveDatagram();
        qDebug() << "Données:" << datagram.data();
        qDebug() << "Adresse source:" << datagram.senderAddress().toString();
        ui->textEditInformation->append(datagram.data());
    }
}
