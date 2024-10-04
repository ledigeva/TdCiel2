#include "digicode.h"
#include "ui_digicode.h"

Digicode::Digicode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Digicode)
{
    ui->setupUi(this);

    int colonne=0;
    int ligne=0;

    grille = new QGridLayout (this);
    afficheur = new QLineEdit (this);
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    afficheur->setEchoMode(QLineEdit::Password);
    afficheur->setMinimumHeight(80);
    grille->addWidget(afficheur,ligne,colonne,1,3);

    // Création du clavier
    QString TableDesSymboles[4][3] = {{"7","8","9"},{"4","5","6"},
                                      {"1","2","3"},{"On","0","Ok"}};
    //creation des boutons

    //placement des bouton

    //ajout des bouton

    // ajout des widget ( grille, afficheur )
    //grille->addWidget(afficheur,0,0,1,4);

    this->setLayout(grille);
}

Digicode::~Digicode()
{
}

void Digicode::onQPushButtonCliked()
{

}
