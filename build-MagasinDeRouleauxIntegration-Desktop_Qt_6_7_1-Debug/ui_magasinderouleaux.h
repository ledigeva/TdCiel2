/********************************************************************************
** Form generated from reading UI file 'magasinderouleaux.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGASINDEROULEAUX_H
#define UI_MAGASINDEROULEAUX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagasinDeRouleaux
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonEntrer;
    QLineEdit *lineEditDiametre;
    QLineEdit *lineEditReference;
    QLabel *label_4;
    QLabel *label_5;
    QListWidget *listWidgetStock;
    QListWidget *listWidgetEnceinte;
    QPushButton *pushButtonSortir;

    void setupUi(QWidget *MagasinDeRouleaux)
    {
        if (MagasinDeRouleaux->objectName().isEmpty())
            MagasinDeRouleaux->setObjectName("MagasinDeRouleaux");
        MagasinDeRouleaux->resize(667, 360);
        label = new QLabel(MagasinDeRouleaux);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 121, 16));
        label_2 = new QLabel(MagasinDeRouleaux);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 61, 16));
        label_3 = new QLabel(MagasinDeRouleaux);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 58, 15));
        pushButtonEntrer = new QPushButton(MagasinDeRouleaux);
        pushButtonEntrer->setObjectName("pushButtonEntrer");
        pushButtonEntrer->setGeometry(QRect(20, 110, 201, 23));
        lineEditDiametre = new QLineEdit(MagasinDeRouleaux);
        lineEditDiametre->setObjectName("lineEditDiametre");
        lineEditDiametre->setGeometry(QRect(100, 80, 113, 22));
        lineEditReference = new QLineEdit(MagasinDeRouleaux);
        lineEditReference->setObjectName("lineEditReference");
        lineEditReference->setGeometry(QRect(100, 50, 113, 22));
        label_4 = new QLabel(MagasinDeRouleaux);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 10, 141, 16));
        label_5 = new QLabel(MagasinDeRouleaux);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(460, 10, 151, 16));
        listWidgetStock = new QListWidget(MagasinDeRouleaux);
        listWidgetStock->setObjectName("listWidgetStock");
        listWidgetStock->setGeometry(QRect(260, 40, 181, 251));
        listWidgetEnceinte = new QListWidget(MagasinDeRouleaux);
        listWidgetEnceinte->setObjectName("listWidgetEnceinte");
        listWidgetEnceinte->setGeometry(QRect(460, 40, 181, 121));
        pushButtonSortir = new QPushButton(MagasinDeRouleaux);
        pushButtonSortir->setObjectName("pushButtonSortir");
        pushButtonSortir->setGeometry(QRect(260, 300, 181, 23));

        retranslateUi(MagasinDeRouleaux);

        QMetaObject::connectSlotsByName(MagasinDeRouleaux);
    } // setupUi

    void retranslateUi(QWidget *MagasinDeRouleaux)
    {
        MagasinDeRouleaux->setWindowTitle(QCoreApplication::translate("MagasinDeRouleaux", "MagasinDeRouleaux", nullptr));
        label->setText(QCoreApplication::translate("MagasinDeRouleaux", "Entr\303\251e d'un rouleau", nullptr));
        label_2->setText(QCoreApplication::translate("MagasinDeRouleaux", "R\303\251f\303\251rence", nullptr));
        label_3->setText(QCoreApplication::translate("MagasinDeRouleaux", "Diametre", nullptr));
        pushButtonEntrer->setText(QCoreApplication::translate("MagasinDeRouleaux", "Entrer un rouleau", nullptr));
        label_4->setText(QCoreApplication::translate("MagasinDeRouleaux", "Rouleaux dans le stock", nullptr));
        label_5->setText(QCoreApplication::translate("MagasinDeRouleaux", "Rouleaux dans l'enceinte", nullptr));
        pushButtonSortir->setText(QCoreApplication::translate("MagasinDeRouleaux", "Sortir une s\303\251rie de rouleaux", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MagasinDeRouleaux: public Ui_MagasinDeRouleaux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGASINDEROULEAUX_H
