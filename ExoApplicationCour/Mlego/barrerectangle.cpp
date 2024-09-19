#include "barrerectangle.h"


BarreRectangle::BarreRectangle(const string _reference,
                               const string _nomAlliage,
                               const int _longeurs,
                               const float _densite,
                               const float _largeur):
    largeur(_largeur),
    Barre(_reference,
          _nomAlliage,
          _longeurs,
            _densite)
{}

float BarreRectangle::CalculerSection()
{
return longeurs*largeur;
}

float BarreRectangle::CalculerMasse()
{
return longeurs*CalculerSection()*densite;
}

