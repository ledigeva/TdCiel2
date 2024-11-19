#include "testtapis.h"
#include "ui_testtapis.h"

/**
 *  @author eva ledig
 *  @abstract code de testtapis
 *  @date 12 novembre 2022
 */

TestTapis::TestTapis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TestTapis)
{
    // constructeur
    ui->setupUi(this);
}

TestTapis::~TestTapis() // destructeur
{
    delete ui;
}

//fonction qui permet de mettre a jour l'affichage du tapis
void TestTapis::MettreAJourAffichageTapis(Tapis &_tapis, QListWidget &_listWidget, QLCDNumber &_lcdNumber)
{

}

// fonction du bouton sortirlerouleau
void TestTapis::on_pushButtonSortirLeRouleau_clicked()
{


        QMessageBox messageErreur(QMessageBox::Warning, "Erreur à la sortie\n",
                                  "c'est vide");
        messageErreur.exec();

}

// fonction du bouton RAZTTapisA pour le tapis A
void TestTapis::on_pushButtonRAZTapisA_clicked()
{

}

// fonction du bouton RAZTTapisB pour le tapis B
void TestTapis::on_pushButtonRAZTapisB_clicked()
{

}

// fonction du bouton RAZTTapisC pour le tapis C
void TestTapis::on_pushButtonRAZTapisC_clicked()
{


