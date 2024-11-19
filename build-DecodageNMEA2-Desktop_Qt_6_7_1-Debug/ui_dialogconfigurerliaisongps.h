/********************************************************************************
** Form generated from reading UI file 'dialogconfigurerliaisongps.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONFIGURERLIAISONGPS_H
#define UI_DIALOGCONFIGURERLIAISONGPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogConfigurerLiaisonGPS
{
public:
    QLabel *label_5;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBoxFlux;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonPaire;
    QRadioButton *radioButtonImpaire;
    QRadioButton *radioButtonNone;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBoxPort;
    QComboBox *comboBoxVitesse;
    QSpinBox *spinBoxBitData;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QCheckBox *checkBoxStop;

    void setupUi(QDialog *DialogConfigurerLiaisonGPS)
    {
        if (DialogConfigurerLiaisonGPS->objectName().isEmpty())
            DialogConfigurerLiaisonGPS->setObjectName("DialogConfigurerLiaisonGPS");
        DialogConfigurerLiaisonGPS->resize(400, 300);
        label_5 = new QLabel(DialogConfigurerLiaisonGPS);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 140, 111, 16));
        buttonBox = new QDialogButtonBox(DialogConfigurerLiaisonGPS);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(200, 240, 166, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBoxFlux = new QComboBox(DialogConfigurerLiaisonGPS);
        comboBoxFlux->addItem(QString());
        comboBoxFlux->setObjectName("comboBoxFlux");
        comboBoxFlux->setGeometry(QRect(170, 160, 174, 23));
        layoutWidget = new QWidget(DialogConfigurerLiaisonGPS);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 130, 104, 77));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonPaire = new QRadioButton(layoutWidget);
        radioButtonPaire->setObjectName("radioButtonPaire");

        verticalLayout->addWidget(radioButtonPaire);

        radioButtonImpaire = new QRadioButton(layoutWidget);
        radioButtonImpaire->setObjectName("radioButtonImpaire");

        verticalLayout->addWidget(radioButtonImpaire);

        radioButtonNone = new QRadioButton(layoutWidget);
        radioButtonNone->setObjectName("radioButtonNone");
        radioButtonNone->setChecked(true);

        verticalLayout->addWidget(radioButtonNone);

        layoutWidget_2 = new QWidget(DialogConfigurerLiaisonGPS);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 10, 361, 85));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBoxPort = new QComboBox(layoutWidget_2);
        comboBoxPort->setObjectName("comboBoxPort");

        verticalLayout_2->addWidget(comboBoxPort);

        comboBoxVitesse = new QComboBox(layoutWidget_2);
        comboBoxVitesse->setObjectName("comboBoxVitesse");

        verticalLayout_2->addWidget(comboBoxVitesse);

        spinBoxBitData = new QSpinBox(layoutWidget_2);
        spinBoxBitData->setObjectName("spinBoxBitData");

        verticalLayout_2->addWidget(spinBoxBitData);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget_3 = new QWidget(DialogConfigurerLiaisonGPS);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 110, 311, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        checkBoxStop = new QCheckBox(layoutWidget_3);
        checkBoxStop->setObjectName("checkBoxStop");

        horizontalLayout_2->addWidget(checkBoxStop);


        retranslateUi(DialogConfigurerLiaisonGPS);

        QMetaObject::connectSlotsByName(DialogConfigurerLiaisonGPS);
    } // setupUi

    void retranslateUi(QDialog *DialogConfigurerLiaisonGPS)
    {
        DialogConfigurerLiaisonGPS->setWindowTitle(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Contr\303\264le de flux :", nullptr));
        comboBoxFlux->setItemText(0, QCoreApplication::translate("DialogConfigurerLiaisonGPS", "pas de contr\303\264le de flux", nullptr));

        radioButtonPaire->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Paire", nullptr));
        radioButtonImpaire->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Impaire", nullptr));
        radioButtonNone->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Pas de parit\303\251", nullptr));
        label->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Choix du port :", nullptr));
        label_2->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Vitesse de transmission :", nullptr));
        label_3->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Nombre de bits de donn\303\251es :", nullptr));
        label_4->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "Parit\303\251", nullptr));
        checkBoxStop->setText(QCoreApplication::translate("DialogConfigurerLiaisonGPS", "2 bits de stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogConfigurerLiaisonGPS: public Ui_DialogConfigurerLiaisonGPS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONFIGURERLIAISONGPS_H
