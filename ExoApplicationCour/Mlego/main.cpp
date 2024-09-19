#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"

using namespace std;

int main()
{
    Barre uneBarre("205316", "Acier", 5, 12);
    cout << "------------BARRE--------------" << endl;
    uneBarre.AfficherCaracteristiques();
    BarreRectangle rectangle("205316", "Metal", 5, 13, 4);
    cout << "------------RECTANGLE--------------" << endl;
    rectangle.AfficherCaracteristiques();
    cout << "Le section du rectangle est de " << rectangle.CalculerSection() << endl;
    cout << "La masse du rectangle est de " << rectangle.CalculerMasse() << endl;
    BarreRonde rond(12,"456230","Plastique", 25,25);
    cout << "------------ROND--------------" << endl;
    rond.AfficherCaracteristiques();
    cout << "Le section du rond est de " << rond.CalculerSection() << endl;
    cout << "La masse du rond est de " << rond.CalculerMasse() << endl;
    BarreCarree carre("548630", "Alluminium",15,  23, 8.2);
    cout << "------------CARRE--------------" << endl;
    carre.AfficherCaracteristiques();
    cout << "Le section du carre est de " << carre.CalculerSection() << endl;
    cout << "La masse du carre est de " << carre.CalculerMasse() << endl;
    return 0;
}
