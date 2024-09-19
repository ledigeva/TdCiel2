#include <iostream>
#include "barrecarree.h"
#include "barreronde.h"
#include "menu.h"
#include "catalogue.h"

using namespace std;

int main()
{
    // barre
    // Barre Barre ("barre 1", "fer", 10, 2);
    // Barre.AfficherCaracteristiques();

    // barre carree
    BarreRonde rond(50,"fe", "fe", 8, 2);
    Catalogue catalogue(4);
    BarreCarree carrer("Barre carre","Alluminium", 15, 23, 4);
    catalogue.AjouterBarre(&rond);
    catalogue.AjouterBarre(&carrer);

    int choix;
    try{
        Menu leMenu("../LegoV2/menu.txt");
        do{
            choix= leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                system("clear");
                cout << "___________________________________" << endl;
                cout << "________________CARRER______________" << endl;
                carrer.AfficherCaracteristiques();
                cout << "___________________________________" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "___________________________________" << endl;
                cout << "________________ROND______________" << endl;
                rond.AfficherCaracteristiques();
                cout << "___________________________________" << endl;
                Menu::AttendreAppuiTouche();
                system("clear");
                break;
            case OPTION_3:
                system("clear");
                catalogue.AfficherCatalogue();
                Menu::AttendreAppuiTouche();
                break;
            }
        }while(choix != QUITTER);
    }
    catch(std::runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
}
}

