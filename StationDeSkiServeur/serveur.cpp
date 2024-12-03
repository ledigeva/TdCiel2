#include "serveur.h"
#include "ui_serveur.h"


Serveur::Serveur(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Serveur)
    ,datagram(QByteArray(), QHostAddress::Broadcast, 45467)
{
    ui->setupUi(this);
    socketServeur = new QUdpSocket(this);
    timerInformation = new QTimer(this);
    timerHeure = new QTimer(this);


    //connect(socketServeur, &QUdpSocket::readyRead, this, &Serveur::EnvoyaiDatagram);
    connect(timerInformation, &QTimer::timeout, this, &Serveur::onTimerInformation_timeout);
    timerInformation->start(10000); // Intervalle de 10 secondes (10 000 ms)

    connect(timerInformation, &QTimer::timeout, this, &Serveur::onTimerHeure_timeout);
    timerHeure->start(60000); // interval de 1 minute ( 60 000ms )
}

Serveur::~Serveur()
{
    delete ui;
}

void Serveur::onTimerInformation_timeout()
{
    // QByteArray buffer;
    // QDataStream out(&buffer, QIODevice::WriteOnly);
    // out.setVersion(QDataStream::Qt_6_0);

    // alerte = ui->textEditInformation->toPlainText();

    // out << 'I' << alerte; // 'I' peut être un code pour distinguer les messages d'information
    // EnvoyaiDatagram(buffer);


    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    // Parcourt tous les éléments de la QListWidget pour créer un message complet

    // Combine les éléments en un seul message séparé par des retours à la ligne
    QString information;
    QListWidgetItem* item = ui->listWidgetMessage->item(indexMessage);
    if (item) {
        information = item->text(); // Ajoute chaque élément à une liste
        out << 'I' << information; // 'I' indique qu'il s'agit d'un message d'information
        EnvoyaiDatagram(buffer);
        indexMessage++;
        if (indexMessage >= ui->listWidgetMessage->count())
            indexMessage = 0;
    }

    // Écrit le message complet dans le flux

}

void Serveur::onTimerHeure_timeout()
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    // Obtention de l'heure courante
    QTime heure = QTime::currentTime();
    QString heureStr = heure.toString("HH:mm");

    // Préparation du message
    out << 'H' << heureStr; // 'H' pour indiquer un message d'heure courante
    EnvoyaiDatagram(buffer);
}

void Serveur::LancerTimerHeure()
{

}

void Serveur::EnvoyaiDatagram(QByteArray &data)
{
    datagram.setData(data); // Configure les données à envoyer
    if (socketServeur->writeDatagram(datagram) == -1) {
        qDebug() << "Erreur lors de l'envoi du datagram :" << socketServeur->errorString();
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'envoi du datagram");

    } else {
        qDebug() << "Datagram envoyé avec succès : " << data;
        //ui->textEditAlerte->append(data);
    }
}

void Serveur::on_pushButtonDiffusion_clicked()
{
    // Vérifiez si les timers sont actifs
    if (!timerInformation->isActive() && !timerHeure->isActive()) {
        // Démarrer les timers
        timerInformation->start(10000); // 10 secondes
        timerHeure->start(60000);      // 1 minute

        ui->pushButtonDiffusion->setText("Arrêter la diffusion");

        // Connecter les signaux timeout des timers aux slots
        connect(timerInformation, &QTimer::timeout, this, &Serveur::onTimerInformation_timeout);
        connect(timerHeure, &QTimer::timeout, this, &Serveur::onTimerHeure_timeout);

        qDebug() << "Les timers ont été démarrés.";
    } else {
        // Arrêter les timers
        timerInformation->stop();
        timerHeure->stop();

        // Déconnecter les signaux timeout des timers des slots
        disconnect(timerInformation, &QTimer::timeout, this, &Serveur::onTimerInformation_timeout);
        disconnect(timerHeure, &QTimer::timeout, this, &Serveur::onTimerHeure_timeout);

        qDebug() << "Les timers ont été arrêtés.";

        ui->pushButtonDiffusion->setText("Lancer la diffusion");
    }
}


void Serveur::on_pushButtonAjoueMessage_clicked()
{
    QString letexte = ui->textEditInformation->toPlainText();
    ui->listWidgetMessage->addItem(letexte);
}


void Serveur::on_pushButtonCreeAlerte_clicked()
{
    // Préparer le buffer pour l'envoi
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    // Récupérer le texte de l'alerte depuis le QTextEdit
    QString alerteTexte = ui->textEditAlerte->toPlainText();

    // Ajouter le type de message 'A' et le texte de l'alerte au buffer
    out << 'A' << alerteTexte;

    // Envoyer le datagramme via votre méthode personnalisée
    EnvoyaiDatagram(buffer);


}


void Serveur::on_pushButtonSupprimerMessage_clicked()
{

    //ui->listWidgetMessage->clear();

    // Récupère les éléments sélectionnés dans le QListWidget
    QList<QListWidgetItem*> items = ui->listWidgetMessage->selectedItems();

    if (!items.isEmpty()) {
        // Si un élément est sélectionné, on récupère le texte
        items.first()->text();
        delete items.first();

    } else {
        qDebug() << "Aucun élément sélectionné";
        QMessageBox::critical(this, "Erreur", "Vous devez sélectionner le message à supprimer !!!");
    }
}


void Serveur::on_pushButtonModifierBulletinMeteo_clicked()
{
    QByteArray buffer;
    QDataStream out(&buffer, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);
    out << 'M' << ui->lineEditMeteo->text();
    EnvoyaiDatagram(buffer);
}

