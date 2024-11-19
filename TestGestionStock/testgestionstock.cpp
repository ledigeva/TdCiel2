#include "testgestionstock.h"
#include "ui_testgestionstock.h"

#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QFileDialog>

TestGestionStock::TestGestionStock(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TestGestionStock)
{
    ui->setupUi(this);
}

TestGestionStock::~TestGestionStock()
{
    delete ui;
}

void TestGestionStock::on_pushButtonNouveau_clicked()
{
    QString reference = ui->lineEditReference->text();
    int diametre = ui->lineEditDiametre->text().toInt();


    if(!reference.isEmpty() && diametre > 0){
        Rouleau nouveauRouleau(reference, diametre);
        leStock.AjouterRouleau(nouveauRouleau);

        ui->listWidgetStock->clear();
        QStringList descriptionStock = leStock.ObtenirContenuDuStock();
        ui->listWidgetStock->addItems(descriptionStock);
    }
}


void TestGestionStock::on_pushButtonRetrait_clicked()
{
    nbRouleau = leStock.RechercherSerie(debut);
    ui->listWidgetRouleauxRetenus->clear();
    auto posDebut = debut;

    for (int indice = 0; indice < nbRouleau; indice++) {
        QString descriptionRetenue = QString("reference : %1, Diametre : %2")
                                         .arg(posDebut.value().getReference())
                                         .arg(posDebut.value().getDiametre());
        posDebut++;
        ui->listWidgetRouleauxRetenus->addItem(descriptionRetenue);
        ui->listWidgetStock->clear();
    }
}


void TestGestionStock::on_pushButtonSupprimer_clicked()
{
    auto posDebut = debut;
qDebug() << "click" ;
    for (int indice = 0; indice < nbRouleau; indice++) {
        posDebut++;
        leStock.RetirerRouleauDuStock(debut);
        debut=posDebut;

    }
    ui->listWidgetStock->clear();
    QStringList descriptionStock = leStock.ObtenirContenuDuStock();
    ui->listWidgetStock->addItems(descriptionStock);
    ui->listWidgetRouleauxRetenus->clear();
}

void TestGestionStock::on_pushButtonEnregistrer_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Enregistrer un fichier"),
                                                    "/home/USERS/ELEVES/CIEL2023/eledig/Bureau/Stock.txt",
                                                    tr("Fichiers texte (*.txt);;Tous les fichiers (*)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);
            //out << ui->listWidgetStock->text(); // text dans le fichier

            for (int i = 0; i < ui->listWidgetStock->count(); ++i) {
                QListWidgetItem *item = ui->listWidgetStock->item(i);
                out << item->text() << "\n";  // Écrire chaque élément dans le fichier, un par ligne
            }
        }
}
}

void TestGestionStock::on_pushButtonCharger_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Charger un fichier"),
                                                    "/home/USERS/ELEVES/CIEL2023/eledig/Bureau/",
                                                    tr("Fichiers texte (*.txt);;Tous les fichiers (*)"));
    if (!fileName.isEmpty()) {
        QFile enregistrement(fileName);
        if (enregistrement.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QDataStream in(&enregistrement);
            qDebug() << "lecture du fichier";

            // Lire le fichier ligne par ligne et ajouter chaque ligne à la QListWidget
            while (!enregistrement.atEnd()) {
                QString line = enregistrement.readLine();
                ui->listWidgetStock->addItem(line);  // Ajouter chaque ligne comme élément dans le QListWidget
            }
        }
    }
}


