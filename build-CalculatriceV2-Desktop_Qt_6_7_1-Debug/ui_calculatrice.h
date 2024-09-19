/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditAfficheur;
    QGridLayout *gridLayout;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonAdditionner;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonSoustraire;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButtonEffacer;
    QPushButton *pushButton0;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonDiviser;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName("Calculatrice");
        Calculatrice->resize(410, 347);
        layoutWidget = new QWidget(Calculatrice);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(30, 20, 342, 278));
        QFont font;
        font.setBold(true);
        layoutWidget->setFont(font);
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditAfficheur = new QLineEdit(layoutWidget);
        lineEditAfficheur->setObjectName("lineEditAfficheur");
        lineEditAfficheur->setEnabled(true);
        lineEditAfficheur->setMinimumSize(QSize(0, 50));
        lineEditAfficheur->setFont(font);
        lineEditAfficheur->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 190, 111);"));
        lineEditAfficheur->setReadOnly(true);

        gridLayout_2->addWidget(lineEditAfficheur, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton7 = new QPushButton(layoutWidget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setEnabled(true);
        pushButton7->setMinimumSize(QSize(50, 50));
        pushButton7->setFont(font);

        gridLayout->addWidget(pushButton7, 0, 0, 1, 1);

        pushButton8 = new QPushButton(layoutWidget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setEnabled(true);
        pushButton8->setMinimumSize(QSize(50, 50));
        pushButton8->setFont(font);

        gridLayout->addWidget(pushButton8, 0, 1, 1, 1);

        pushButton9 = new QPushButton(layoutWidget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setEnabled(true);
        pushButton9->setMinimumSize(QSize(50, 50));
        pushButton9->setFont(font);

        gridLayout->addWidget(pushButton9, 0, 2, 1, 1);

        pushButtonAdditionner = new QPushButton(layoutWidget);
        pushButtonAdditionner->setObjectName("pushButtonAdditionner");
        pushButtonAdditionner->setEnabled(true);
        pushButtonAdditionner->setMinimumSize(QSize(50, 50));
        pushButtonAdditionner->setFont(font);

        gridLayout->addWidget(pushButtonAdditionner, 0, 3, 1, 1);

        pushButton4 = new QPushButton(layoutWidget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setEnabled(true);
        pushButton4->setMinimumSize(QSize(50, 50));
        pushButton4->setFont(font);

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButton5 = new QPushButton(layoutWidget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setEnabled(true);
        pushButton5->setMinimumSize(QSize(50, 50));
        pushButton5->setFont(font);

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton6 = new QPushButton(layoutWidget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setEnabled(true);
        pushButton6->setMinimumSize(QSize(50, 50));
        pushButton6->setFont(font);

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButtonSoustraire = new QPushButton(layoutWidget);
        pushButtonSoustraire->setObjectName("pushButtonSoustraire");
        pushButtonSoustraire->setEnabled(true);
        pushButtonSoustraire->setMinimumSize(QSize(50, 50));
        pushButtonSoustraire->setFont(font);

        gridLayout->addWidget(pushButtonSoustraire, 1, 3, 1, 1);

        pushButton1 = new QPushButton(layoutWidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setEnabled(true);
        pushButton1->setMinimumSize(QSize(50, 50));
        pushButton1->setFont(font);

        gridLayout->addWidget(pushButton1, 2, 0, 1, 1);

        pushButton2 = new QPushButton(layoutWidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setEnabled(true);
        pushButton2->setMinimumSize(QSize(50, 50));
        pushButton2->setFont(font);

        gridLayout->addWidget(pushButton2, 2, 1, 1, 1);

        pushButton3 = new QPushButton(layoutWidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setEnabled(true);
        pushButton3->setMinimumSize(QSize(50, 50));
        pushButton3->setFont(font);

        gridLayout->addWidget(pushButton3, 2, 2, 1, 1);

        pushButtonMultiplier = new QPushButton(layoutWidget);
        pushButtonMultiplier->setObjectName("pushButtonMultiplier");
        pushButtonMultiplier->setEnabled(true);
        pushButtonMultiplier->setMinimumSize(QSize(50, 50));
        pushButtonMultiplier->setFont(font);

        gridLayout->addWidget(pushButtonMultiplier, 2, 3, 1, 1);

        pushButtonEffacer = new QPushButton(layoutWidget);
        pushButtonEffacer->setObjectName("pushButtonEffacer");
        pushButtonEffacer->setEnabled(true);
        pushButtonEffacer->setMinimumSize(QSize(50, 50));
        pushButtonEffacer->setFont(font);

        gridLayout->addWidget(pushButtonEffacer, 3, 0, 1, 1);

        pushButton0 = new QPushButton(layoutWidget);
        pushButton0->setObjectName("pushButton0");
        pushButton0->setEnabled(true);
        pushButton0->setMinimumSize(QSize(50, 50));
        pushButton0->setFont(font);

        gridLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButtonEgal = new QPushButton(layoutWidget);
        pushButtonEgal->setObjectName("pushButtonEgal");
        pushButtonEgal->setEnabled(true);
        pushButtonEgal->setMinimumSize(QSize(50, 50));
        pushButtonEgal->setFont(font);

        gridLayout->addWidget(pushButtonEgal, 3, 2, 1, 1);

        pushButtonDiviser = new QPushButton(layoutWidget);
        pushButtonDiviser->setObjectName("pushButtonDiviser");
        pushButtonDiviser->setEnabled(true);
        pushButtonDiviser->setMinimumSize(QSize(50, 50));
        pushButtonDiviser->setFont(font);

        gridLayout->addWidget(pushButtonDiviser, 3, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QCoreApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButton7->setText(QCoreApplication::translate("Calculatrice", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Calculatrice", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("Calculatrice", "9", nullptr));
        pushButtonAdditionner->setText(QCoreApplication::translate("Calculatrice", "+", nullptr));
        pushButton4->setText(QCoreApplication::translate("Calculatrice", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("Calculatrice", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("Calculatrice", "6", nullptr));
        pushButtonSoustraire->setText(QCoreApplication::translate("Calculatrice", "-", nullptr));
        pushButton1->setText(QCoreApplication::translate("Calculatrice", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("Calculatrice", "2", nullptr));
        pushButton3->setText(QCoreApplication::translate("Calculatrice", "3", nullptr));
        pushButtonMultiplier->setText(QCoreApplication::translate("Calculatrice", "*", nullptr));
        pushButtonEffacer->setText(QCoreApplication::translate("Calculatrice", "C", nullptr));
        pushButton0->setText(QCoreApplication::translate("Calculatrice", "0", nullptr));
        pushButtonEgal->setText(QCoreApplication::translate("Calculatrice", "=", nullptr));
        pushButtonDiviser->setText(QCoreApplication::translate("Calculatrice", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
