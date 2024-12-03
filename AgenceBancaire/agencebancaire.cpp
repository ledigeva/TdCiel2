#include "agencebancaire.h"
#include "ui_agencebancaire.h"
#include "client.h"

AgenceBancaire::AgenceBancaire(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AgenceBancaire)
{
    ui->setupUi(this);
    laBdd = new AccesBdd(this);

}

AgenceBancaire::~AgenceBancaire()
{
    delete ui;
}

void AgenceBancaire::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text() == "Connexion"){
        ui->pushButtonConnexion->setText("Déconnection");

        // parametre recuperer dynamiquement avec QLineEdit
        QString adresse = ui->lineEditAdresseIp->text();
        QString base = ui->lineEditNomDeLaBase->text();
        QString utilisateur = ui->lineEditLogin->text();
        QString motDePasse = ui->lineEditMotDePasse->text();

        //metre les donnée dans une liste nomée data
        QList<QString> data;
        data << adresse << base << utilisateur << motDePasse;

        // Appel à la méthode de connexion
        laBdd->ConnecterAuSGBD(data);
    }else{
        ui->pushButtonConnexion->setText("Connexion");
        laBdd->Deconnecter();
    }
}


void AgenceBancaire::on_tabWidget_tabBarClicked(int index)
{
    if (index > 0 ){
        laBdd->ObtenirAgences(ui->comboBoxAgence);
    }
}


void AgenceBancaire::on_pushButtonAjouter_clicked()
{
    if(ui->){

    }
    Client  nouveauClient (QString nom = ui->lineEditNom->text(),
                         QString prenom = ui->lineEditPrenom->text(),
                         int idCompte = ui->lineEditNumCompte->text().toInt(),
                         float solde = ui->lineEditSolde->text().toFloat(),
                         QString ville = ui->lineEditVille->text(),
                         int idAgence = ui->comboBoxAgence->currentData().toInt());

    // Validation des données
    if (nom.isEmpty() || prenom.isEmpty() || ville.isEmpty() || idAgence == 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
        return;
    }
}


void AgenceBancaire::on_comboBoxAgencesConsultationClients_currentIndexChanged(int index)
{

}

