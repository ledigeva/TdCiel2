/********************************************************************************
** Form generated from reading UI file 'interfaceprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEPRINCIPAL_H
#define UI_INTERFACEPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfacePrincipal
{
public:
    QAction *actionOuvrir;
    QAction *actionEnregistrer;
    QAction *actionQuitter;
    QAction *actionConfigurer;
    QAction *actionA_Propos_de;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuOutils;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InterfacePrincipal)
    {
        if (InterfacePrincipal->objectName().isEmpty())
            InterfacePrincipal->setObjectName("InterfacePrincipal");
        InterfacePrincipal->resize(575, 451);
        actionOuvrir = new QAction(InterfacePrincipal);
        actionOuvrir->setObjectName("actionOuvrir");
        actionEnregistrer = new QAction(InterfacePrincipal);
        actionEnregistrer->setObjectName("actionEnregistrer");
        actionQuitter = new QAction(InterfacePrincipal);
        actionQuitter->setObjectName("actionQuitter");
        actionConfigurer = new QAction(InterfacePrincipal);
        actionConfigurer->setObjectName("actionConfigurer");
        actionA_Propos_de = new QAction(InterfacePrincipal);
        actionA_Propos_de->setObjectName("actionA_Propos_de");
        centralwidget = new QWidget(InterfacePrincipal);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 200, 551, 181));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 30, 551, 161));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 16));
        InterfacePrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InterfacePrincipal);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 575, 20));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName("menuFichier");
        menuOutils = new QMenu(menubar);
        menuOutils->setObjectName("menuOutils");
        InterfacePrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(InterfacePrincipal);
        statusbar->setObjectName("statusbar");
        InterfacePrincipal->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuOutils->menuAction());
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuOutils->addAction(actionConfigurer);
        menuOutils->addSeparator();
        menuOutils->addAction(actionA_Propos_de);

        retranslateUi(InterfacePrincipal);
        QObject::connect(actionQuitter, &QAction::triggered, InterfacePrincipal, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(InterfacePrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *InterfacePrincipal)
    {
        InterfacePrincipal->setWindowTitle(QCoreApplication::translate("InterfacePrincipal", "InterfacePrincipal", nullptr));
        actionOuvrir->setText(QCoreApplication::translate("InterfacePrincipal", "Ouvrir", nullptr));
        actionEnregistrer->setText(QCoreApplication::translate("InterfacePrincipal", "Enregistrer", nullptr));
        actionQuitter->setText(QCoreApplication::translate("InterfacePrincipal", "Quitter", nullptr));
        actionConfigurer->setText(QCoreApplication::translate("InterfacePrincipal", "Configurer", nullptr));
        actionA_Propos_de->setText(QCoreApplication::translate("InterfacePrincipal", "A Propos de", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("InterfacePrincipal", "Horodatage", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("InterfacePrincipal", "Latitude", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("InterfacePrincipal", "Longitude", nullptr));
        label->setText(QCoreApplication::translate("InterfacePrincipal", "Trame re\303\247ue :", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("InterfacePrincipal", "Fichier", nullptr));
        menuOutils->setTitle(QCoreApplication::translate("InterfacePrincipal", "Outils", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfacePrincipal: public Ui_InterfacePrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEPRINCIPAL_H
