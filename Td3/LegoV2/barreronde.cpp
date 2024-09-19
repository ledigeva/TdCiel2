#include "barreronde.h"

BarreRonde::BarreRonde(const float _diametre,
                       const string _reference,
                       const string _nomAlliage,
                       const int _longeurs,
                       const float _densite):
    Barre(_reference,
          _nomAlliage,
          _longeurs,
          _densite),
    diametre(_diametre)

{}

//fonction viruelle pure
void BarreRonde::AfficherCaracteristiques()
{
    cout << "Reference : " << reference << endl;
    cout << "Longeur : " << longeurs << " cm" << endl;
    cout << "Densité : " << densite << " g/cm3" << endl;
    cout << "----------------------------------" << endl;
}


float BarreRonde::CalculerSection()
{
    return M_PI*(diametre*diametre)/4;
}



float BarreRonde::CalculerMasse()
{
    return longeurs*CalculerSection()*densite;
}

