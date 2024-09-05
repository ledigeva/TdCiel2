#include "emballage.h"

using namespace std;

int main()
{
    // ////////////////////////////////////////////////////////////////////////////////////////////


    // Emballage colis1("XS",1,270,190);  //cree colis1
    // Emballage *pColis; //cree le poiteur pcolis
    // pColis = new Emballage("XL",7,383,250,185); // remplire pcolis

    // colis1.Visualiser(); // appele fonction visualiser pour colis1
    // pColis->Visualiser(); // appele fonction visualiser pour pColis

    // delete pColis;  //supprimer pcolis
    // return 0;


    // ////////////////////////////////////////////////////////////////////////////////////////////

    Emballage *tabColis[5];

    string format;
    int resistance;
    int longeur;
    int largeur;
    int hauteur;

    for(int indice = 0 ; indice < 3 ; indice ++ ){
        cout << "qu'elle est le nom du format ? : ";
        getline(cin,format);
        cout << "qu'elle est ta résistance ? : ";
        cin >> resistance ;
        cout << "qu'elle est ta longeur ? : ";
        cin >> longeur;
        cout << "qu'elle est ta largeur ? : ";
        cin >> largeur;
        cout << "qu'elle est ta hauteur ? : ";
        cin >> hauteur;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        tabColis[indice] = new Emballage(format,resistance,longeur,largeur,hauteur);
    }

    cout << endl;
    cout << setfill('-');
    cout << "+" << setw(18) << "+" ;
    cout << setw(13) << "+" ;
    cout << setw(18) << "+" ;

    cout << endl;
    cout << setfill(' ');
    cout << "|" << setw(17) << left << 'format' ;
    cout << "|" << setw(17) << left << 'resistance' ;
    cout << "|" << setw(17) << left << 'dimensions' ;
    cout << "|";

    cout << endl;
    cout << setfill('-');
    cout << "+" << setw(18) << right << "+" ;
    cout << setw(13) << "+" ;
    cout << setw(18) << "+" ;

    cout << endl;
    cout << setfill(' ');

    for (int indice=0;indice<3;indice++){
        tabColis[indice]->Visualiser();
    }

    cout << "+" << setw(18) << setfill('-') << "+";
    cout << setw(13) << "+" ;
    cout << setw(18) << "+" << endl << endl;


    if(*tabColis[0] < *tabColis[1]){
        cout << "tabColis 0 est plus petit que tabColis1" <<endl;
    }else{
        cout << "tabColis 1 est plus petit que tabColis0" <<endl;
    }

    if (*tabColis[0] == *tabColis[1]){
        cout << "les embalolages de tabColis 0 est egale a tabColis 1"<<endl;
    }else{
        cout << "les embalolages de tabColis 0 est different de tabColis 1" << endl;
    }

    if (*tabColis[0] == *tabColis[2]){
        cout << "tabColis 0 et tabColis 2 sont identique"<<endl;
    }else{
        cout << "tabColis 0 et tabColis 2 ne sont pas identique" << endl;
    }

    float volume = *tabColis[0];
    cout << "le volume de tabColis 0 est de " << volume <<" cm3" << endl;

    for (int indice = 0 ; indice < 2 ; indice++){
        delete tabColis[indice];
    }
    return 0;
}
