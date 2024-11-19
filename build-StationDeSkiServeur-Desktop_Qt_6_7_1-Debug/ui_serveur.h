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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serveur
{
public:
    QPushButton *pushButtonDiffusion;
    QLineEdit *lineEditMeteo;
    QLabel *label;
    QPushButton *pushButtonSupprimerMessage;
    QTextEdit *textEditAlerte;
    QLabel *label_2;
    QPushButton *pushButtonAjoueMessage;
    QTextEdit *textEditInformation;
    QLabel *label_3;
    QPushButton *pushButtonCreeAlerte;
    QPushButton *pushButtonModifierBulletinMeteo;
    QListWidget *listWidgetMessage;
    QLabel *label_4;

    void setupUi(QWidget *Serveur)
    {
        if (Serveur->objectName().isEmpty())
            Serveur->setObjectName("Serveur");
        Serveur->resize(780, 468);
        pushButtonDiffusion = new QPushButton(Serveur);
        pushButtonDiffusion->setObjectName("pushButtonDiffusion");
        pushButtonDiffusion->setGeometry(QRect(10, 422, 751, 31));
        lineEditMeteo = new QLineEdit(Serveur);
        lineEditMeteo->setObjectName("lineEditMeteo");
        lineEditMeteo->setGeometry(QRect(10, 380, 371, 21));
        label = new QLabel(Serveur);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 360, 111, 16));
        pushButtonSupprimerMessage = new QPushButton(Serveur);
        pushButtonSupprimerMessage->setObjectName("pushButtonSupprimerMessage");
        pushButtonSupprimerMessage->setGeometry(QRect(390, 330, 371, 23));
        textEditAlerte = new QTextEdit(Serveur);
        textEditAlerte->setObjectName("textEditAlerte");
        textEditAlerte->setGeometry(QRect(10, 200, 371, 121));
        label_2 = new QLabel(Serveur);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 180, 111, 16));
        pushButtonAjoueMessage = new QPushButton(Serveur);
        pushButtonAjoueMessage->setObjectName("pushButtonAjoueMessage");
        pushButtonAjoueMessage->setGeometry(QRect(10, 160, 371, 23));
        textEditInformation = new QTextEdit(Serveur);
        textEditInformation->setObjectName("textEditInformation");
        textEditInformation->setGeometry(QRect(10, 30, 371, 121));
        label_3 = new QLabel(Serveur);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 181, 16));
        pushButtonCreeAlerte = new QPushButton(Serveur);
        pushButtonCreeAlerte->setObjectName("pushButtonCreeAlerte");
        pushButtonCreeAlerte->setGeometry(QRect(10, 330, 371, 23));
        pushButtonModifierBulletinMeteo = new QPushButton(Serveur);
        pushButtonModifierBulletinMeteo->setObjectName("pushButtonModifierBulletinMeteo");
        pushButtonModifierBulletinMeteo->setGeometry(QRect(390, 380, 371, 23));
        listWidgetMessage = new QListWidget(Serveur);
        listWidgetMessage->setObjectName("listWidgetMessage");
        listWidgetMessage->setGeometry(QRect(390, 31, 371, 281));
        label_4 = new QLabel(Serveur);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 10, 251, 16));

        retranslateUi(Serveur);

        QMetaObject::connectSlotsByName(Serveur);
    } // setupUi

    void retranslateUi(QWidget *Serveur)
    {
        Serveur->setWindowTitle(QCoreApplication::translate("Serveur", "Serveur", nullptr));
        pushButtonDiffusion->setText(QCoreApplication::translate("Serveur", "Lancer la diffusion", nullptr));
        label->setText(QCoreApplication::translate("Serveur", "Bulletin m\303\251t\303\251o :", nullptr));
        pushButtonSupprimerMessage->setText(QCoreApplication::translate("Serveur", "Supprimer un message", nullptr));
        label_2->setText(QCoreApplication::translate("Serveur", "Message d'alerte :", nullptr));
        pushButtonAjoueMessage->setText(QCoreApplication::translate("Serveur", "Ajouter un message", nullptr));
        label_3->setText(QCoreApplication::translate("Serveur", "Message d'information :", nullptr));
        pushButtonCreeAlerte->setText(QCoreApplication::translate("Serveur", "Cr\303\251er une alerte", nullptr));
        pushButtonModifierBulletinMeteo->setText(QCoreApplication::translate("Serveur", "Modifier le bulletin m\303\251t\303\251o", nullptr));
        label_4->setText(QCoreApplication::translate("Serveur", "Liste des messages en cours de diffusion :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serveur: public Ui_Serveur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEUR_H
