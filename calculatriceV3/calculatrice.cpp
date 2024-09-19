#include "calculatrice.h"
#include "ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculatrice)
    , NB_TOUCHES(16)
{
    ui->setupUi(this);
    // ignitialisation des touches
    const QString tableDesSymboles[ ] = {"7", "8", "9", "+" ,"4", "5", "6", "-", "1", "2", "3", "*",
                                       "C", "0", "=", "/"};
    // creation de la grille
    grille = new QGridLayout;
    //création de laffichage ( qline )
    afficheur = new QLineEdit;
    // ignitialisation minimal de l'afficheur a 50
    afficheur->setMinimumHeight(50);
    // ignitialisation de la color de font de l'afficheur
    afficheur->setStyleSheet("background-color: rgb(143, 240, 164);");
    //permet de ne pas ecrire dans l'afficheur
    afficheur->setReadOnly(true);
    // creation de toute les touches de nb_touches
    touches = new QPushButton*[NB_TOUCHES];
    // ajout des widget ( grille, afficheur )
    grille->addWidget(afficheur,0,0,1,4);

    for (int i = 0; i < NB_TOUCHES; ++i) { // affichage de tout les touches
        touches[i] = new QPushButton; // cree les bouton en QPushButton
        //ecrit dans la touche le symbole de la touche conrespondant a l'index
        touches[i]->setText(tableDesSymboles[i]);
        // permet de choisir une taille minimal pour les boutton 50x50
        touches[i]->setMinimumSize(50, 50);
        // permet de les placer dans la grille correctement.
        int row = 1 + i / 4; // en ligne
        int col = i % 4; // en colonne
        grille->addWidget(touches[i], row, col); // ajout des touche a la grille
        // permet de faire un appel a la fonction onQPushButtonClicked() quand on revoir le signal clicked
        connect(touches[i], SIGNAL(clicked()), this, SLOT(onQPushButtonClicked()));
    }
    this->setLayout(grille);
}

void Calculatrice::onQPushButtonClicked()
{
    QPushButton *buttonSender = qobject_cast<QPushButton*>(sender());

    QString buttonText = buttonSender->text();

    if (buttonText == "C") {
        afficheur->clear();
    } else if (buttonText == "=") {
        QString expression = afficheur->text();
        QJSEngine engine;
        QJSValue result = engine.evaluate(expression);
        afficheur->setText(result.toString());
    } else {
        afficheur->setText(afficheur->text() + buttonText);
    }
}


Calculatrice::~Calculatrice()
{
    delete afficheur;
    for (int i = 0; i < NB_TOUCHES; ++i) {
        delete touches[i];
    }
    delete[] touches;
    delete grille;
    delete ui;
}

