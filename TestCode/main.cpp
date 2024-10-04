#include <code.h>
#define TAILLE_CODE 4

    using namespace std;


int main(int argc, char *argv[])
{
    //ignitialisation du pointeur leCode de la classe Code
    Code *leCode;
    // creation de leCode avec un taille de TAILLE_CODE
    leCode = new Code(TAILLE_CODE);
    // creation de combinaison avec une taille de TAILLE_CODE
    quint8 combinaison[TAILLE_CODE];
    // affiche dans la console
    cout << "quelle est le Nouveau Code ?"<<endl;
    // recupere la combinaison entrer dans la console dans chaque indice de 0 a 3 (4 au total)
    cin >> combinaison[0] >> combinaison[1] >> combinaison[2] >> combinaison[3];
    //
    for (int i = 0; i < TAILLE_CODE; ++i) {
        combinaison[i] -= '0';
    }
    //appele permet de faire appele a la fonction memoriser pour memoriser le codeUtilisateur.
    leCode->Memoriser(combinaison);
    // affiche le message dans la console
    cout << "Quelle est votre code ?"<<endl;
    // permet de recuperer la valeur entrer dans la console dans combinaison des indice 0 a 3
    cin >> combinaison[0] >> combinaison[1] >> combinaison[2] >> combinaison[3];

    for (int i = 0; i < TAILLE_CODE; ++i) {
        combinaison[i] -= '0';
    }
    // permet de faire appele a la fonction verifiercode avec les parametre combinaison
    bool test = leCode->VerifierCode(combinaison);
    // si le test est true alor
    if (test) {
        cout << "Code Valide"<< endl;
    }else // sinon
        cout << "Code Non Valide"<< endl;
}
