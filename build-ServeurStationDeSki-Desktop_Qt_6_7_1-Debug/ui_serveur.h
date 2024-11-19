/********************************************************************************
** Form generated from reading UI file 'serveur.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEUR_H
#define UI_SERVEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serveur
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Serveur)
    {
        if (Serveur->objectName().isEmpty())
            Serveur->setObjectName("Serveur");
        Serveur->resize(729, 462);
        label = new QLabel(Serveur);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 151, 16));
        label_2 = new QLabel(Serveur);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 10, 251, 16));

        retranslateUi(Serveur);

        QMetaObject::connectSlotsByName(Serveur);
    } // setupUi

    void retranslateUi(QWidget *Serveur)
    {
        Serveur->setWindowTitle(QCoreApplication::translate("Serveur", "Serveur", nullptr));
        label->setText(QCoreApplication::translate("Serveur", "Message d'information :", nullptr));
        label_2->setText(QCoreApplication::translate("Serveur", "Liste des messages en cours de diffusion :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serveur: public Ui_Serveur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEUR_H
