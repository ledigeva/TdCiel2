/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonOuvrirPort;
    QPushButton *pushButtonEnvoyai;
    QComboBox *comboBoxChoixSerie;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditTextEnvoyer;
    QTextEdit *textEditRecu;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(513, 396);
        pushButtonOuvrirPort = new QPushButton(Widget);
        pushButtonOuvrirPort->setObjectName("pushButtonOuvrirPort");
        pushButtonOuvrirPort->setGeometry(QRect(250, 10, 231, 21));
        pushButtonEnvoyai = new QPushButton(Widget);
        pushButtonEnvoyai->setObjectName("pushButtonEnvoyai");
        pushButtonEnvoyai->setGeometry(QRect(400, 50, 80, 23));
        comboBoxChoixSerie = new QComboBox(Widget);
        comboBoxChoixSerie->addItem(QString());
        comboBoxChoixSerie->setObjectName("comboBoxChoixSerie");
        comboBoxChoixSerie->setGeometry(QRect(10, 10, 231, 21));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 101, 16));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 71, 16));
        lineEditTextEnvoyer = new QLineEdit(Widget);
        lineEditTextEnvoyer->setObjectName("lineEditTextEnvoyer");
        lineEditTextEnvoyer->setGeometry(QRect(110, 50, 271, 22));
        textEditRecu = new QTextEdit(Widget);
        textEditRecu->setObjectName("textEditRecu");
        textEditRecu->setGeometry(QRect(10, 100, 471, 261));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonOuvrirPort->setText(QCoreApplication::translate("Widget", "Ouvrir le port s\303\251rie", nullptr));
        pushButtonEnvoyai->setText(QCoreApplication::translate("Widget", "Envoyer", nullptr));
        comboBoxChoixSerie->setItemText(0, QCoreApplication::translate("Widget", "Choisisez un port s\303\251rie", nullptr));

        label->setText(QCoreApplication::translate("Widget", "texte \303\240 envoyer :", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Texte re\303\247u :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
