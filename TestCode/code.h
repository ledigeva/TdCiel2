#ifndef CODE_H
#define CODE_H

#include <QtGlobal>
#include <QDebug>
#include <QString>
#include <iostream>

class Code
{
public:
    Code(int _tailleCode = 4);
    ~Code();
    bool VerifierCode(const quint8 _unCode[]);
    void Memoriser(const quint8 _unCode[]);
private:
    quint8 *codeUsine;
    quint8 *codeUtilisateur;
    int tailleCode;

};

#endif // CODE_H
