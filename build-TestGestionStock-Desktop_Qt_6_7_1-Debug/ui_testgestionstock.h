/********************************************************************************
** Form generated from reading UI file 'testgestionstock.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTGESTIONSTOCK_H
#define UI_TESTGESTIONSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestGestionStock
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listWidgetStock;
    QPushButton *pushButtonRetrait;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *listWidgetRouleauxRetenus;
    QPushButton *pushButtonSupprimer;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *lineEditReference;
    QLabel *label_5;
    QLineEdit *lineEditDiametre;
    QPushButton *pushButtonNouveau;
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonCharger;

    void setupUi(QWidget *TestGestionStock)
    {
        if (TestGestionStock->objectName().isEmpty())
            TestGestionStock->setObjectName("TestGestionStock");
        TestGestionStock->resize(665, 388);
        label = new QLabel(TestGestionStock);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 150, 131, 16));
        layoutWidget = new QWidget(TestGestionStock);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(220, 10, 441, 361));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        listWidgetStock = new QListWidget(layoutWidget);
        listWidgetStock->setObjectName("listWidgetStock");

        verticalLayout->addWidget(listWidgetStock);

        pushButtonRetrait = new QPushButton(layoutWidget);
        pushButtonRetrait->setObjectName("pushButtonRetrait");

        verticalLayout->addWidget(pushButtonRetrait);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        listWidgetRouleauxRetenus = new QListWidget(layoutWidget);
        listWidgetRouleauxRetenus->setObjectName("listWidgetRouleauxRetenus");

        verticalLayout_2->addWidget(listWidgetRouleauxRetenus);

        pushButtonSupprimer = new QPushButton(layoutWidget);
        pushButtonSupprimer->setObjectName("pushButtonSupprimer");

        verticalLayout_2->addWidget(pushButtonSupprimer);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(TestGestionStock);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 170, 211, 191));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEditReference = new QLineEdit(layoutWidget1);
        lineEditReference->setObjectName("lineEditReference");

        gridLayout->addWidget(lineEditReference, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lineEditDiametre = new QLineEdit(layoutWidget1);
        lineEditDiametre->setObjectName("lineEditDiametre");

        gridLayout->addWidget(lineEditDiametre, 1, 1, 1, 1);

        pushButtonNouveau = new QPushButton(layoutWidget1);
        pushButtonNouveau->setObjectName("pushButtonNouveau");

        gridLayout->addWidget(pushButtonNouveau, 2, 0, 1, 2);


        verticalLayout_3->addLayout(gridLayout);

        pushButtonQuitter = new QPushButton(layoutWidget1);
        pushButtonQuitter->setObjectName("pushButtonQuitter");

        verticalLayout_3->addWidget(pushButtonQuitter);

        pushButtonEnregistrer = new QPushButton(TestGestionStock);
        pushButtonEnregistrer->setObjectName("pushButtonEnregistrer");
        pushButtonEnregistrer->setGeometry(QRect(50, 30, 80, 23));
        pushButtonCharger = new QPushButton(TestGestionStock);
        pushButtonCharger->setObjectName("pushButtonCharger");
        pushButtonCharger->setGeometry(QRect(50, 80, 80, 23));

        retranslateUi(TestGestionStock);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, TestGestionStock, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(TestGestionStock);
    } // setupUi

    void retranslateUi(QWidget *TestGestionStock)
    {
        TestGestionStock->setWindowTitle(QCoreApplication::translate("TestGestionStock", "TestGestionStock", nullptr));
        label->setText(QCoreApplication::translate("TestGestionStock", "Entr\303\251e d'un rouleau", nullptr));
        label_2->setText(QCoreApplication::translate("TestGestionStock", "Rouleaux en stock", nullptr));
        pushButtonRetrait->setText(QCoreApplication::translate("TestGestionStock", "Demander retrait", nullptr));
        label_3->setText(QCoreApplication::translate("TestGestionStock", "Rouleaux retenus", nullptr));
        pushButtonSupprimer->setText(QCoreApplication::translate("TestGestionStock", "Supprimer du stock", nullptr));
        label_4->setText(QCoreApplication::translate("TestGestionStock", "R\303\251f\303\251rence", nullptr));
        label_5->setText(QCoreApplication::translate("TestGestionStock", "Diametre", nullptr));
        pushButtonNouveau->setText(QCoreApplication::translate("TestGestionStock", "Ajouter nouveau", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("TestGestionStock", "Quitter", nullptr));
        pushButtonEnregistrer->setText(QCoreApplication::translate("TestGestionStock", "Enregistrer", nullptr));
        pushButtonCharger->setText(QCoreApplication::translate("TestGestionStock", "Charger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestGestionStock: public Ui_TestGestionStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTGESTIONSTOCK_H
