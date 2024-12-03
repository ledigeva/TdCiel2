#include "auditclientwidget.h"
#include "ui_auditclientwidget.h"
#include <QDebug>

AuditClientWidget::AuditClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditClientWidget)
    , socketClient(nullptr)
{
    ui->setupUi(this);
    socketClient = new QTcpSocket(this);

    connect(socketClient,&QTcpSocket::connected, this,&AuditClientWidget::onQTcpSocketConnected);
    connect(socketClient,&QTcpSocket::disconnected, this,&AuditClientWidget::onQTcpSocketDisconnected);
    connect(socketClient,&QTcpSocket::readyRead, this,&AuditClientWidget::onQTcpSocketReadyRead);
    connect(socketClient,&QTcpSocket::errorOccurred, this,&AuditClientWidget::onQTcpSocketErrorOccured);
    connect(socketClient,&QTcpSocket::hostFound, this,&AuditClientWidget::onQTcpSocketHostFound);
    connect(socketClient,&QTcpSocket::stateChanged, this,&AuditClientWidget::onQTcpSocketStateChanged);
    connect(socketClient,&QTcpSocket::aboutToClose, this,&AuditClientWidget::onQTcpSocketAboutToClose);
    connect(socketClient,&QTcpSocket::bytesWritten, this,&AuditClientWidget::onQTcpSocketBytesWritten);
    connect(socketClient,&QTcpSocket::channelBytesWritten, this,&AuditClientWidget::onQTcpSocketChannelBytesWritten);
    connect(socketClient,&QTcpSocket::channelReadyRead, this,&AuditClientWidget::onQTcpSocketChannelReadyRead);
    connect(socketClient,&QTcpSocket::readChannelFinished, this,&AuditClientWidget::onQTcpSocketReadChannelFinished);
    connect(socketClient,&QTcpSocket::destroyed, this,&AuditClientWidget::onQTcpSocketDestroyed);
}

AuditClientWidget::~AuditClientWidget()
{

    if(socketClient != nullptr){
        socketClient->close();
        delete socketClient;
    }
    delete ui;
}

void AuditClientWidget::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text() == "Connexion"){
        socketClient->connectToHost(ui->lineEditAdresseIP->text(),
                                    ui->lineEditPort->text().toInt());
    }else{
        socketClient->disconnectFromHost();
    }
}


void AuditClientWidget::on_pushButtonOrdinateur_clicked()
{
    typeDeDemande = 'c' ;
    socketClient->write(&typeDeDemande,1);
}


void AuditClientWidget::on_pushButtonUtilisateur_clicked()
{
    typeDeDemande = 'u' ;
    socketClient->write(&typeDeDemande,1);
}


void AuditClientWidget::on_pushButtonArchitecture_clicked()
{
    typeDeDemande = 'a' ;
    socketClient->write(&typeDeDemande,1);
}


void AuditClientWidget::on_pushButtonOS_clicked()
{
    typeDeDemande = 'o' ;
    socketClient->write(&typeDeDemande,1);
}

void AuditClientWidget::onQTcpSocketConnected()
{
    ui->textEditEtat->append("Connecté au serveur");
    ui->pushButtonConnexion->setText("Déconnexion");
    ui->lineEditAdresseIP->setEnabled(false);
    ui->lineEditPort->setEnabled(false);
    ui->pushButtonOrdinateur->setEnabled(true);

    ui->lineEditArchitecture->clear();
    ui->lineEditOrdinateur->clear();
    ui->lineEditOS->clear();
    ui->lineEditUtilisateur->clear();

    qDebug() << "connecter au serveur";
}

void AuditClientWidget::onQTcpSocketDisconnected()
{
    ui->textEditEtat->append("deconnecter du serveur");
    ui->pushButtonConnexion->setText("connection");
    ui->lineEditAdresseIP->setEnabled(true);
    ui->lineEditPort->setEnabled(true);

    qDebug() << "deconnecté au serveur";
}

void AuditClientWidget::onQTcpSocketReadyRead()
{
    QByteArray data;

    if(socketClient->bytesAvailable() > 0)
    {
        data = socketClient->readAll();
        qDebug() << "Données reçues du serveur :" << QString(data);
    }

    switch (typeDeDemande) {
    case 'u':
        ui->lineEditUtilisateur->setText(data.data());
        break;
    case 'c':
        ui->lineEditOrdinateur->setText(data.data());
        break;
    case 'o':
        ui->lineEditOS->setText(data.data());
        break;
    case 'a':
        ui->lineEditArchitecture->setText(data.data());
        break;
    }
}

void AuditClientWidget::onQTcpSocketErrorOccured(QAbstractSocket::SocketError _socketError)
{

    Q_UNUSED(_socketError); // le paramètre n'est pas utilisé dans cette méthode
    ui->textEditEtat->append(socketClient->errorString());

    QString messageErreur;

    switch (_socketError)
    {
    case QAbstractSocket::HostNotFoundError:
        messageErreur = "Hôte non trouvé. Vérifier l'adresse du serveur et le port";
        break;
    case QAbstractSocket::ConnectionRefusedError:
        messageErreur = "Connexion refusée par le serveur";
        break;
    case QAbstractSocket::RemoteHostClosedError:
        messageErreur = "L'hôte distant a fermé la connexion.";
        break;
    case QAbstractSocket::SocketTimeoutError:
        messageErreur = "La connexion a expiré";
        break;
    default:
        messageErreur = "Erreur inattendue";
        break;
    }

    qDebug() << messageErreur;

    ui->textEditEtat->append(messageErreur);
}

void AuditClientWidget::onQTcpSocketHostFound()
{
    ui->textEditEtat->append("hote trouver");
}

void AuditClientWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState _socketState)
{
ui->textEditEtat->append("statue changer");
}

void AuditClientWidget::onQTcpSocketAboutToClose()
{
ui->textEditEtat->append("fermer");
}

void AuditClientWidget::onQTcpSocketBytesWritten(qint64 _bytes)
{
ui->textEditEtat->append("octet ecrit");
}

void AuditClientWidget::onQTcpSocketChannelBytesWritten(int _channel, qint64 _bytes)
{
ui->textEditEtat->append("canal octet ecrit");
}

void AuditClientWidget::onQTcpSocketChannelReadyRead(int _channel)
{
ui->textEditEtat->append("readyread");
}

void AuditClientWidget::onQTcpSocketReadChannelFinished()
{
ui->textEditEtat->append("lecture prte sur le canal");
}

void AuditClientWidget::onQTcpSocketDestroyed(QObject *_obj)
{
ui->textEditEtat->append("detruit");
}

