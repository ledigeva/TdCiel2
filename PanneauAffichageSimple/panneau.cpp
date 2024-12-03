#include "panneau.h"
#include "ui_panneau.h"

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
    // // Redimensionne le buffer pour recevoir le datagramme
    // QHostAddress sender;
    // quint16 senderPort;

    // while (socketClient->hasPendingDatagrams()) {
    //     // QByteArray buffer;
    //     // buffer.resize(socketClient->pendingDatagramSize());
    //     // socketClient->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    //     //
    //     // qDebug() << "Reçu de" << sender.toString() << ":" << senderPort << "Données:" << buffer;


    //     QNetworkDatagram datagram = socketClient->receiveDatagram();
    //     qDebug() << "Données:" << datagram.data();
    //     qDebug() << "Adresse source:" << datagram.senderAddress().toString();


    //     ui->textEditInformation->append(datagram.data());
    // }


    while (socketClient->hasPendingDatagrams())
    {
        QNetworkDatagram datagram = socketClient->receiveDatagram();
        QByteArray buffer = datagram.data();
        char type;
        QString message;
        QDataStream in(&buffer, QIODevice::ReadOnly);
        in.setVersion(QDataStream::Qt_6_0);
        in >> type >> message;
        qDebug() << "Type : " << type << ", Message : " << message;

        // à compléter

        switch (type) {
        case 'M': // Message météo
            ui->lineEditMeteo->setText(message); // Affiche dans le champ météo
            break;

        case 'H': // Heure
            // Convertit le message en QTime
            {
                QTime time = QTime::fromString(message, "hh:mm");
                if (time.isValid()) {
                    ui->timeEditHeure->setTime(time); // Affiche l'heure dans timeEdit
                } else {
                    qDebug() << "Format d'heure invalide : " << message;
                }
            }
            break;

        case 'A': // Allerte
        ui->textEditInformation->append(message);
            break;

        case 'I': // information
            ui->textEditInformation->append(message);
            break;

        default: // Type inconnu
            qDebug() << "Type de message inconnu : " << type;
            break;
        }
    }
}
