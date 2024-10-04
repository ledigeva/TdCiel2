/********************************************************************************
** Form generated from reading UI file 'digicode.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGICODE_H
#define UI_DIGICODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Digicode
{
public:

    void setupUi(QWidget *Digicode)
    {
        if (Digicode->objectName().isEmpty())
            Digicode->setObjectName("Digicode");
        Digicode->resize(800, 600);

        retranslateUi(Digicode);

        QMetaObject::connectSlotsByName(Digicode);
    } // setupUi

    void retranslateUi(QWidget *Digicode)
    {
        Digicode->setWindowTitle(QCoreApplication::translate("Digicode", "Digicode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Digicode: public Ui_Digicode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGICODE_H
