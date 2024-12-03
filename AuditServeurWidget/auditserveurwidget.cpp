#include "auditserveurwidget.h"
#include "ui_auditserveurwidget.h"

AuditServeurWidget::AuditServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditServeurWidget)
    , socketEcouteServeur(new QTcpServer(this))
    , socketDialogueClient(nullptr)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer(this);
    socketEcouteServeur->setMaxPendingConnections(1);
    connect(socketEcouteServeur,&QTcpServer::newConnection , this,&AuditServeurWidget::onQTcpServerNewConnection);
    connect(socketEcouteServeur,&QTcpServer::acceptError, this,&AuditServeurWidget::onQTcpServerAccepError);

    process = new QProcess(this);
    connect(process, &QProcess::readyReadStandardOutput, this,&AuditServeurWidget::onQProcessReadyReadStandardOutput);
}

AuditServeurWidget::~AuditServeurWidget()
{
    if(socketDialogueClient != nullptr){
        socketDialogueClient->close();
        delete socketDialogueClient;
    }
    delete socketEcouteServeur;
    delete process;
    delete ui;
}

void AuditServeurWidget::on_pushButtonLancement_clicked()
{
    if(!socketEcouteServeur->listen(QHostAddress::Any, ui->spinBoxPort->value())){
        QString message = "Impossible de demarer le serveur " + socketEcouteServeur->errorString();
        ui->textEditInfo->append(message);

        QList<QHostAddress> listeAdresses = QNetworkInterface::allAddresses();
        QList<QHostAddress>::iterator it;
        for (it = listeAdresses.begin(); it != listeAdresses.end();it++){
            if(it->toIPv4Address()){
                ui->textEditInfo->append("adresse serveur : " + it->toString());
            }
        }
        ui->textEditInfo->append("N du port : " + QString::number(socketEcouteServeur->serverPort()));
        ui->pushButtonLancement->setEnabled(false);
        ui->spinBoxPort->setEnabled(false);
    }
}

void AuditServeurWidget::onQTcpServerNewConnection()
{
    if(socketDialogueClient != nullptr){
        socketDialogueClient->close();
        delete socketDialogueClient;
    }
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    connect(socketDialogueClient, &QTcpSocket::readyRead, this, &AuditServeurWidget::onQTcpServerReadyRead);
    connect(socketDialogueClient, &QTcpSocket::connected, this, &AuditServeurWidget::onQTcpServerConnected);
    connect(socketDialogueClient, &QTcpSocket::disconnected, this, &AuditServeurWidget::onQTcpServerDisconnected);
    connect(socketDialogueClient, &QTcpSocket::errorOccurred, this, &AuditServeurWidget::onQTcpServerErrorOccured);
    connect(socketDialogueClient, &QTcpSocket::stateChanged, this, &AuditServeurWidget::onQTcpServerStateChanged);
    connect(socketDialogueClient, &QTcpSocket::hostFound, this, &AuditServeurWidget::onQTcpServerHostFound);
    connect(socketDialogueClient, &QTcpSocket::bytesWritten, this, &AuditServeurWidget::onQTcpServerBytesWritten);
    connect(socketDialogueClient, &QTcpSocket::aboutToClose, this, &AuditServeurWidget::onQTcpServerAboutToClose);

    QHostAddress adresseClient = socketDialogueClient->peerAddress();
}

void AuditServeurWidget::onQTcpServerAccepError()
{
    Q_UNUSED(_socketError);
    ui->textEditInfo->append("serveur : " + socketEcouteServeur);
}

void AuditServeurWidget::onQTcpServerConnected()
{

}

void AuditServeurWidget::onQTcpServerDisconnected()
{

}

void AuditServeurWidget::onQTcpServerReadyRead()
{
    if(socketDialogueClient)
    {
        QByteArray data = socketDialogueClient->readAll();
        qDebug() << "Données reçues : " << QString(data);
        socketDialogueClient->write("Message reçu sur le serveur : " + data);
    }

    QString reponse;

    switch (socketDialogueClient) {
    case 'u':
        reponse = getenv("USER");
        reponse = QHostInfo::localHostName();
        break;
    case 'c':
        reponse = getenv("USER");
        reponse = QHostInfo::localHostName();
        break;
    case 'o':
        new process;
        process->start("uname",QStringList("-p"));
        process->start("uname");
        break;
    case 'a':
        new process;
        process->start("uname",QStringList("-p"));
        process->start("uname");
        break;
    }
}

void AuditServeurWidget::onQTcpServerErrorOccured(QAbstractSocket::SocketError _socketError)
{
    if(socketDialogueClient)
    {
        QString messageErreur;
        switch (_socketError) {
        case QAbstractSocket::RemoteHostClosedError:
            messageErreur = "Le client a fermé la connexion";
            break;
        default:
            messageErreur = "Erreur inattendue : " + socketDialogueClient->errorString();
            break;
        }
        qDebug() << "Erreur client : " << messageErreur ;
        socketDialogueClient->disconnect();
    }
}

void AuditServeurWidget::onQTcpServerStateChanged(QAbstractSocket::SocketState _socketState)
{
ui->textEditInfo->append("statue changer");
}

void AuditServeurWidget::onQTcpServerHostFound()
{
ui->textEditInfo->append("hote trouver");
}

void AuditServeurWidget::onQTcpServerBytesWritten(qint64 _bytes)
{
ui->textEditInfo->append("octet ecrit");
}

void AuditServeurWidget::onQTcpServerAboutToClose()
{
ui->textEditInfo->append("fermer");
}

void AuditServeurWidget::onQProcessReadyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
        socketDialogueClient->write(reponse.toLatin1());
}

