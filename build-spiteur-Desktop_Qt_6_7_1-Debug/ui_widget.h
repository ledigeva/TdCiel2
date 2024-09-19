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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *pushButtonDecoder;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Quitter;
    QLineEdit *lineEditDecoder;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QLineEdit *lineEditAge;
    QLineEdit *lineEditPoids;
    QLineEdit *lineEditTaille;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(612, 308);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 101, 41));
        pushButtonDecoder = new QPushButton(Widget);
        pushButtonDecoder->setObjectName("pushButtonDecoder");
        pushButtonDecoder->setGeometry(QRect(500, 20, 80, 23));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 58, 15));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 58, 15));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 150, 58, 15));
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 190, 58, 15));
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 230, 58, 15));
        Quitter = new QPushButton(Widget);
        Quitter->setObjectName("Quitter");
        Quitter->setGeometry(QRect(500, 270, 80, 23));
        Quitter->setStyleSheet(QString::fromUtf8(""));
        lineEditDecoder = new QLineEdit(Widget);
        lineEditDecoder->setObjectName("lineEditDecoder");
        lineEditDecoder->setGeometry(QRect(130, 20, 351, 31));
        lineEditNom = new QLineEdit(Widget);
        lineEditNom->setObjectName("lineEditNom");
        lineEditNom->setGeometry(QRect(130, 60, 351, 31));
        lineEditPrenom = new QLineEdit(Widget);
        lineEditPrenom->setObjectName("lineEditPrenom");
        lineEditPrenom->setGeometry(QRect(130, 100, 351, 31));
        lineEditAge = new QLineEdit(Widget);
        lineEditAge->setObjectName("lineEditAge");
        lineEditAge->setGeometry(QRect(130, 140, 351, 31));
        lineEditPoids = new QLineEdit(Widget);
        lineEditPoids->setObjectName("lineEditPoids");
        lineEditPoids->setGeometry(QRect(130, 180, 351, 31));
        lineEditTaille = new QLineEdit(Widget);
        lineEditTaille->setObjectName("lineEditTaille");
        lineEditTaille->setGeometry(QRect(130, 220, 351, 31));

        retranslateUi(Widget);
        QObject::connect(Quitter, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Texte a d\303\251coder", nullptr));
        pushButtonDecoder->setText(QCoreApplication::translate("Widget", "D\303\251coder", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Nom :", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Prenom :", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Age :", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Poids :", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Taille :", nullptr));
        Quitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
