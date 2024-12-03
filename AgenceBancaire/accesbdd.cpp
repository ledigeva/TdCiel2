#include "accesbdd.h"
#include <QSqlDatabase>


AccesBdd::AccesBdd(QObject *parent)
    : QObject{parent}
{

}

bool AccesBdd::ConnecterAuSGBD(QStringList &_paramConnexion)
{

        // Extraire les paramètres
        QString adresseServeur = _paramConnexion[0];
        QString nomBase = _paramConnexion[1];
        QString nomUtilisateur = _paramConnexion[2];
        QString motDePasse = _paramConnexion[3];

        // Configurer la connexion à la base de données
        QSqlDatabase db = QSqlDatabase::addDatabase("QMARIADB"); // Exemple pour MySQL
        db.setHostName(adresseServeur);
        db.setDatabaseName(nomBase);
        db.setUserName(nomUtilisateur);
        db.setPassword(motDePasse);

        qDebug() << QSqlDatabase::drivers();


    qDebug() << adresseServeur;
    qDebug() << nomBase;
    qDebug() << nomUtilisateur;
    qDebug() << motDePasse;

    if(db.open()){
        qDebug() << "Connexion réussie à la base de données.";
    }else{
        qDebug() << "erreur a louverture";
    }
}

void AccesBdd::Deconnecter()
{
    db.close();
    QTimer::singleShot(100,this, [=]() { // Délai de 100ms avant de retirer la base
        QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
        qDebug() << "fermeture réusie";
    });
}

void AccesBdd::ObtenirAgences(QComboBox *&_lesAgences)
{
    QSqlQuery requete("SELECT id,nom from agences");
    if (requete.exec()){
        QString nom;
        QString id;
        _lesAgences->clear();

        while(requete.next())
        {
            nom=requete.value("nom").toString();
            id=requete.value("id").toString();
            _lesAgences->addItem(nom,id);
        }
    }else{
        qDebug() << "Erreur dans sélection des agence : " << requete.lastError().text();
    }
}

void AccesBdd::AjouterClient(Client &_client)
{
    QString nom;
    int age;
    // try {
    //     accesBdd->AjouterUtilisateur(nom, age);
    //     QMessageBox::information(this, "Succès", "Utilisateur ajouté avec succès.");
    // } catch (const DatabaseException& ex) {
    //     QMessageBox::critical(this, "Erreur", ex.getMessage());
    // }
}

QSqlTableModel *AccesBdd::ConsulterComptesClients()
{

}
