/********************************************************************************
** Form generated from reading UI file 'serveurpanneauxsimple.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURPANNEAUXSIMPLE_H
#define UI_SERVEURPANNEAUXSIMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurPanneauxSimple
{
public:
    QTextEdit *textEditInformation;
    QPushButton *pushButton;

    void setupUi(QWidget *ServeurPanneauxSimple)
    {
        if (ServeurPanneauxSimple->objectName().isEmpty())
            ServeurPanneauxSimple->setObjectName("ServeurPanneauxSimple");
        ServeurPanneauxSimple->resize(549, 444);
        textEditInformation = new QTextEdit(ServeurPanneauxSimple);
        textEditInformation->setObjectName("textEditInformation");
        textEditInformation->setGeometry(QRect(10, 20, 471, 311));
        pushButton = new QPushButton(ServeurPanneauxSimple);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 340, 471, 51));

        retranslateUi(ServeurPanneauxSimple);

        QMetaObject::connectSlotsByName(ServeurPanneauxSimple);
    } // setupUi

    void retranslateUi(QWidget *ServeurPanneauxSimple)
    {
        ServeurPanneauxSimple->setWindowTitle(QCoreApplication::translate("ServeurPanneauxSimple", "Serveur pour les panneaux d'affichage", nullptr));
        pushButton->setText(QCoreApplication::translate("ServeurPanneauxSimple", "Diffuser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurPanneauxSimple: public Ui_ServeurPanneauxSimple {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURPANNEAUXSIMPLE_H
