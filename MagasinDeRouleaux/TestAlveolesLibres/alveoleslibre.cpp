#include "alveoleslibre.h"

AlveolesLibre::AlveolesLibre(int _nbRangees, int _nbColonnes):
    nbRangees(_nbRangees),
    nbColonnes(_nbColonnes)
{

    reserve(nbRangees*nbColonnes);

    for (int i = 0; i < nbRangees * nbColonnes; ++i) {
        push(i+1); // reserve le nombre dalveole
    }

    qDebug() << "Dans le constructeur alveole libre: "<< *this;
}

bool AlveolesLibre::Reserver(int &rangee, int &colonne)
{
    bool retour = false;

    if(isEmpty()==false){
        int numAlveole = pop();
        rangee=(numAlveole-1) / nbColonnes + 1;
        colonne=(numAlveole-1) % nbColonnes + 1;
        qDebug() << numAlveole;
        retour = true;
    }

     qDebug() << "Dans le constructeur alvlibre: "<< *this;
    return retour;
}

void AlveolesLibre::Liberer(int rangee, int colonne)
{
    int numAlveole = (rangee - 1) * nbColonnes + colonne;
    if(!contains(numAlveole)){
        push(numAlveole);
    }
    qDebug() << "dans liberer : " << *this;
}
