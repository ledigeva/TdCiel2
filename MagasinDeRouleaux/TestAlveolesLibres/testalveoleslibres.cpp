#include "testalveoleslibres.h"
#include "alveoleslibre.h"
#include "ui_testalveoleslibres.h"

TestAlveolesLibres::TestAlveolesLibres(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TestAlveolesLibres)
    ,lesAlveoles(2,3)
{
    ui->setupUi(this);


}

TestAlveolesLibres::~TestAlveolesLibres()
{
    delete ui;
}

void TestAlveolesLibres::on_pushButtonReserver_clicked()
{
    qDebug() << "bouton reserver cliker";
    int rangee;
    int colonne;

    if(lesAlveoles.Reserver(rangee,colonne)){
        QString texte = "alveole occupe en : ";
        texte += QString::number(rangee) + "," + QString::number(colonne);
        ui->listWidgetAlveolesLibres->addItem(texte);
        ui->lineEditNumAlveole->clear();
    }else{
        QMessageBox messageErreur;
        messageErreur.setText("le magasin est plein, \n il n y a plus dalveole de libre ");
        messageErreur.exec();
        //ui->pushButtonLiberer->setDisabled(true); // permet de retirer la possibiliter de selectionner le bouton
    }
}

void TestAlveolesLibres::on_pushButtonLiberer_clicked()
{
    qDebug() << "bouton liberer cliker";
    QListWidgetItem *currentItem = ui->listWidgetAlveolesLibres->currentItem();

    if(currentItem){ // verifie qu'un item est bien selectionner
        QString texte = currentItem->text();
        QStringList parts = texte.split(": ");

        if(parts.size() == 2){
            //extraire la rangee est la colonne a partir des chiffres
            QStringList position = parts[1].split(",");

            if(position.size() == 2){
                int rangee = position[0].toInt();
                int colonne = position[1].toInt();
                lesAlveoles.Liberer(rangee,colonne);
            }
        }
        //supprimer l'item de la QListWidget
        delete ui->listWidgetAlveolesLibres->takeItem(ui->listWidgetAlveolesLibres->row(currentItem));
        ui->lineEditNumAlveole->setText("libre en : " + parts[1]);
    }
    // ui->pushButtonLiberer->setDisabled(true);
}

