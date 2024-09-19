#include "barreronde.h"

BarreRonde::BarreRonde(const float _diametre,
                       const string _reference,
                       const string _nomAlliage,
                       const int _longeurs,
                       const float _densite):

    diametre(_diametre),
      Barre(_reference,
            _nomAlliage,
            _longeurs,
            _densite)
{}

float BarreRonde::CalculerSection()
{
    return M_PI*(diametre*diametre)/4;
}


float BarreRonde::CalculerMasse()
{
    return longeurs*CalculerSection()*densite;
}

