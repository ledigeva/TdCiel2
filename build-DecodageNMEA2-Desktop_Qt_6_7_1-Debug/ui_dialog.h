/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBoxFlux;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonPaire;
    QRadioButton *radioButtonImpaire;
    QRadioButton *radioButtonNone;
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBoxPort;
    QComboBox *comboBoxVitesse;
    QSpinBox *spinBoxBitData;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QCheckBox *checkBoxStop;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(490, 283);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        comboBoxFlux = new QComboBox(Dialog);
        comboBoxFlux->addItem(QString());
        comboBoxFlux->setObjectName("comboBoxFlux");

        gridLayout->addWidget(comboBoxFlux, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        radioButtonPaire = new QRadioButton(Dialog);
        radioButtonPaire->setObjectName("radioButtonPaire");

        verticalLayout->addWidget(radioButtonPaire);

        radioButtonImpaire = new QRadioButton(Dialog);
        radioButtonImpaire->setObjectName("radioButtonImpaire");

        verticalLayout->addWidget(radioButtonImpaire);

        radioButtonNone = new QRadioButton(Dialog);
        radioButtonNone->setObjectName("radioButtonNone");
        radioButtonNone->setChecked(true);

        verticalLayout->addWidget(radioButtonNone);


        gridLayout->addLayout(verticalLayout, 2, 0, 3, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 2);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBoxPort = new QComboBox(Dialog);
        comboBoxPort->setObjectName("comboBoxPort");

        verticalLayout_2->addWidget(comboBoxPort);

        comboBoxVitesse = new QComboBox(Dialog);
        comboBoxVitesse->setObjectName("comboBoxVitesse");

        verticalLayout_2->addWidget(comboBoxVitesse);

        spinBoxBitData = new QSpinBox(Dialog);
        spinBoxBitData->setObjectName("spinBoxBitData");

        verticalLayout_2->addWidget(spinBoxBitData);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        checkBoxStop = new QCheckBox(Dialog);
        checkBoxStop->setObjectName("checkBoxStop");

        horizontalLayout_2->addWidget(checkBoxStop);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        comboBoxFlux->setItemText(0, QCoreApplication::translate("Dialog", "pas de contr\303\264le de flux", nullptr));

        radioButtonPaire->setText(QCoreApplication::translate("Dialog", "Paire", nullptr));
        radioButtonImpaire->setText(QCoreApplication::translate("Dialog", "Impaire", nullptr));
        radioButtonNone->setText(QCoreApplication::translate("Dialog", "Pas de parit\303\251", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Contr\303\264le de flux :", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Choix du port :", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Vitesse de transmission :", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Nombre de bits de donn\303\251es :", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Parit\303\251", nullptr));
        checkBoxStop->setText(QCoreApplication::translate("Dialog", "2 bits de stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
