#include <iostream>
#include "menu.h"
#include "comptebancaire.h"

using namespace std;

int main()
{

    // ////////////////////////////////////////////////////////////////////////////////////////////////////

    // CompteBancaire compte(100.0);

    // cout << compte.ConsulterSolde() <<endl;

    // compte.Deposer(10.0);
    // cout << "Nouveau solde : " << compte.ConsulterSolde() << endl;

    // compte.Retirer(20.0);
    // cout << "nNouveau sodle : " << compte.ConsulterSolde() << endl;
    // return 0;

 // ////////////////////////////////////////////////////////////////////////////////////////////////////

    int choix;
    CompteBancaire compte(100.0);
    Menu leMenu("/home/USERS/ELEVES/CIEL2023/eledig/Bureau/TdCiel2/Td2/Code/LaBanque/menu.txt");

    enum CHOIX_MENU
    {
        OPTION_0 = 1,
        OPTION_1 = 2,
        OPTION_2 = 3,
        QUITTER = 4
    };

    do{
        choix=leMenu.Afficher();
        switch (choix){
        case OPTION_0:
            cout <<"Vous consulter le solde" <<endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_1:
            cout <<"Vous effectuer un depot" <<endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout <<"Vous effectuer un retrait" <<endl;
            Menu::AttendreAppuiTouche();
            break;
        case QUITTER:
            cout <<"retour" <<endl;
            Menu::AttendreAppuiTouche();
            break;

        }
    }while(choix!=QUITTER);
}
