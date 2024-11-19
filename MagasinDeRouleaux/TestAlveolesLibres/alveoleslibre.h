#ifndef ALVEOLESLIBRE_H
#define ALVEOLESLIBRE_H

#include <QStack>
#include <QDebug>
#include <iostream>
#include <iomanip>
#include <QStack>

class AlveolesLibre : public QStack<int>
{
public:
    AlveolesLibre(int _nbRangees=10, int _nbColonnes=20);
    bool Reserver(int &rangee,int &colonne);
    void Liberer(int rangee, int colonne);

private:
    int nbRangees;
    int nbColonnes;
};

#endif // ALVEOLESLIBRE_H
