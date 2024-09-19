#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"


class BarreRectangle : public Barre
{
public:
    BarreRectangle(const string _reference,
                   const string _nomAlliage,
                   const int _longeurs,
                   const float _densite,
                   const float _largeur);

    float CalculerSection();
    float CalculerMasse();
private:
    float largeur;
};

#endif // BARRERECTANGLE_H
