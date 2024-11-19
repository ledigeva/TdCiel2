/********************************************************************************
** Form generated from reading UI file 'testtapis.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTTAPIS_H
#define UI_TESTTAPIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestTapis
{
public:
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditReference;
    QLineEdit *lineEditDiametre;
    QPushButton *pushButtonSortirLeRouleau;
    QPushButton *pushButtonQuitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEditTapisA;
    QPushButton *pushButtonSortirDuTapisA;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonRAZTapisA;
    QLCDNumber *lcdNumberTapisA;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *textEditTapisB;
    QPushButton *pushButtonSortirDuTapisB;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonRAZTapisB;
    QLCDNumber *lcdNumberTapisB;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *textEditTapisC;
    QPushButton *pushButtonSortirDuTapisC;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonRAZTapisC;
    QLCDNumber *lcdNumberTapisC;

    void setupUi(QWidget *TestTapis)
    {
        if (TestTapis->objectName().isEmpty())
            TestTapis->setObjectName("TestTapis");
        TestTapis->resize(843, 614);
        label_4 = new QLabel(TestTapis);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 60, 111, 16));
        label_5 = new QLabel(TestTapis);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 90, 81, 16));
        label_6 = new QLabel(TestTapis);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 140, 58, 15));
        lineEditReference = new QLineEdit(TestTapis);
        lineEditReference->setObjectName("lineEditReference");
        lineEditReference->setGeometry(QRect(0, 110, 113, 22));
        lineEditDiametre = new QLineEdit(TestTapis);
        lineEditDiametre->setObjectName("lineEditDiametre");
        lineEditDiametre->setGeometry(QRect(0, 160, 113, 22));
        pushButtonSortirLeRouleau = new QPushButton(TestTapis);
        pushButtonSortirLeRouleau->setObjectName("pushButtonSortirLeRouleau");
        pushButtonSortirLeRouleau->setGeometry(QRect(0, 190, 111, 23));
        pushButtonQuitter = new QPushButton(TestTapis);
        pushButtonQuitter->setObjectName("pushButtonQuitter");
        pushButtonQuitter->setGeometry(QRect(0, 390, 111, 23));
        widget = new QWidget(TestTapis);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(117, 20, 221, 391));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        textEditTapisA = new QTextEdit(widget);
        textEditTapisA->setObjectName("textEditTapisA");

        verticalLayout->addWidget(textEditTapisA);

        pushButtonSortirDuTapisA = new QPushButton(widget);
        pushButtonSortirDuTapisA->setObjectName("pushButtonSortirDuTapisA");

        verticalLayout->addWidget(pushButtonSortirDuTapisA);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonRAZTapisA = new QPushButton(widget);
        pushButtonRAZTapisA->setObjectName("pushButtonRAZTapisA");

        horizontalLayout->addWidget(pushButtonRAZTapisA);

        lcdNumberTapisA = new QLCDNumber(widget);
        lcdNumberTapisA->setObjectName("lcdNumberTapisA");

        horizontalLayout->addWidget(lcdNumberTapisA);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(TestTapis);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(340, 20, 221, 391));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        textEditTapisB = new QTextEdit(widget1);
        textEditTapisB->setObjectName("textEditTapisB");

        verticalLayout_2->addWidget(textEditTapisB);

        pushButtonSortirDuTapisB = new QPushButton(widget1);
        pushButtonSortirDuTapisB->setObjectName("pushButtonSortirDuTapisB");

        verticalLayout_2->addWidget(pushButtonSortirDuTapisB);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonRAZTapisB = new QPushButton(widget1);
        pushButtonRAZTapisB->setObjectName("pushButtonRAZTapisB");

        horizontalLayout_2->addWidget(pushButtonRAZTapisB);

        lcdNumberTapisB = new QLCDNumber(widget1);
        lcdNumberTapisB->setObjectName("lcdNumberTapisB");

        horizontalLayout_2->addWidget(lcdNumberTapisB);


        verticalLayout_2->addLayout(horizontalLayout_2);

        widget2 = new QWidget(TestTapis);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(567, 20, 251, 391));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        textEditTapisC = new QTextEdit(widget2);
        textEditTapisC->setObjectName("textEditTapisC");

        verticalLayout_3->addWidget(textEditTapisC);

        pushButtonSortirDuTapisC = new QPushButton(widget2);
        pushButtonSortirDuTapisC->setObjectName("pushButtonSortirDuTapisC");

        verticalLayout_3->addWidget(pushButtonSortirDuTapisC);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButtonRAZTapisC = new QPushButton(widget2);
        pushButtonRAZTapisC->setObjectName("pushButtonRAZTapisC");

        horizontalLayout_3->addWidget(pushButtonRAZTapisC);

        lcdNumberTapisC = new QLCDNumber(widget2);
        lcdNumberTapisC->setObjectName("lcdNumberTapisC");

        horizontalLayout_3->addWidget(lcdNumberTapisC);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(TestTapis);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, TestTapis, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(TestTapis);
    } // setupUi

    void retranslateUi(QWidget *TestTapis)
    {
        TestTapis->setWindowTitle(QCoreApplication::translate("TestTapis", "TestTapis", nullptr));
        label_4->setText(QCoreApplication::translate("TestTapis", "Rouleau \303\240 sortir :", nullptr));
        label_5->setText(QCoreApplication::translate("TestTapis", "R\303\251f\303\251rence :", nullptr));
        label_6->setText(QCoreApplication::translate("TestTapis", "Diam\303\250tre :", nullptr));
        pushButtonSortirLeRouleau->setText(QCoreApplication::translate("TestTapis", "Sortir le rouleau", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("TestTapis", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("TestTapis", "Tapis A", nullptr));
        pushButtonSortirDuTapisA->setText(QCoreApplication::translate("TestTapis", "Sortir du tapis A", nullptr));
        pushButtonRAZTapisA->setText(QCoreApplication::translate("TestTapis", "RAZ", nullptr));
        label_2->setText(QCoreApplication::translate("TestTapis", "Tapis B", nullptr));
        pushButtonSortirDuTapisB->setText(QCoreApplication::translate("TestTapis", "Sortir du tapis B", nullptr));
        pushButtonRAZTapisB->setText(QCoreApplication::translate("TestTapis", "RAZ", nullptr));
        label_3->setText(QCoreApplication::translate("TestTapis", "Tapis C", nullptr));
        pushButtonSortirDuTapisC->setText(QCoreApplication::translate("TestTapis", "Sortir du tapis C", nullptr));
        pushButtonRAZTapisC->setText(QCoreApplication::translate("TestTapis", "RAZ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestTapis: public Ui_TestTapis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTTAPIS_H
