/********************************************************************************
** Form generated from reading UI file 'panneau.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANNEAU_H
#define UI_PANNEAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Panneau
{
public:
    QTextEdit *textEditInformation;
    QLabel *label;
    QLineEdit *lineEditMeteo;
    QTimeEdit *timeEditHeure;

    void setupUi(QWidget *Panneau)
    {
        if (Panneau->objectName().isEmpty())
            Panneau->setObjectName("Panneau");
        Panneau->resize(499, 361);
        textEditInformation = new QTextEdit(Panneau);
        textEditInformation->setObjectName("textEditInformation");
        textEditInformation->setGeometry(QRect(30, 70, 441, 261));
        label = new QLabel(Panneau);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 50, 151, 16));
        lineEditMeteo = new QLineEdit(Panneau);
        lineEditMeteo->setObjectName("lineEditMeteo");
        lineEditMeteo->setGeometry(QRect(160, 40, 311, 22));
        timeEditHeure = new QTimeEdit(Panneau);
        timeEditHeure->setObjectName("timeEditHeure");
        timeEditHeure->setEnabled(false);
        timeEditHeure->setGeometry(QRect(30, 0, 131, 31));

        retranslateUi(Panneau);

        QMetaObject::connectSlotsByName(Panneau);
    } // setupUi

    void retranslateUi(QWidget *Panneau)
    {
        Panneau->setWindowTitle(QCoreApplication::translate("Panneau", "Panneau d'Affichage", nullptr));
        label->setText(QCoreApplication::translate("Panneau", "Information m\303\251t\303\251o :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Panneau: public Ui_Panneau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANNEAU_H
