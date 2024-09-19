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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *radioButtonOS;
    QPushButton *pushButtonLinux;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonQuitter;
    QCheckBox *checkBoxOS;
    QPushButton *pushButtonWindows;
    QRadioButton *radioButtonLinux;
    QCheckBox *checkBoxLinux;
    QCheckBox *checkBoxWindows;
    QPushButton *pushButtonOS;
    QComboBox *comboBox;
    QRadioButton *radioButtonWindows;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(466, 397);
        radioButtonOS = new QRadioButton(Widget);
        radioButtonOS->setObjectName("radioButtonOS");
        radioButtonOS->setGeometry(QRect(270, 160, 100, 21));
        pushButtonLinux = new QPushButton(Widget);
        pushButtonLinux->setObjectName("pushButtonLinux");
        pushButtonLinux->setGeometry(QRect(40, 190, 80, 23));
        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 280, 371, 101));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 369, 99));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 250, 71, 16));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 10, 261, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 121, 16));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 80, 58, 15));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName("pushButtonQuitter");
        pushButtonQuitter->setGeometry(QRect(300, 240, 91, 31));
        QFont font;
        font.setBold(true);
        pushButtonQuitter->setFont(font);
        pushButtonQuitter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(224, 27, 36);"));
        checkBoxOS = new QCheckBox(Widget);
        checkBoxOS->setObjectName("checkBoxOS");
        checkBoxOS->setGeometry(QRect(270, 130, 83, 21));
        pushButtonWindows = new QPushButton(Widget);
        pushButtonWindows->setObjectName("pushButtonWindows");
        pushButtonWindows->setGeometry(QRect(150, 190, 80, 23));
        radioButtonLinux = new QRadioButton(Widget);
        radioButtonLinux->setObjectName("radioButtonLinux");
        radioButtonLinux->setGeometry(QRect(40, 160, 100, 21));
        checkBoxLinux = new QCheckBox(Widget);
        checkBoxLinux->setObjectName("checkBoxLinux");
        checkBoxLinux->setGeometry(QRect(40, 130, 83, 21));
        checkBoxWindows = new QCheckBox(Widget);
        checkBoxWindows->setObjectName("checkBoxWindows");
        checkBoxWindows->setGeometry(QRect(150, 130, 83, 21));
        pushButtonOS = new QPushButton(Widget);
        pushButtonOS->setObjectName("pushButtonOS");
        pushButtonOS->setGeometry(QRect(270, 190, 80, 23));
        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(228, 72, 121, 31));
        radioButtonWindows = new QRadioButton(Widget);
        radioButtonWindows->setObjectName("radioButtonWindows");
        radioButtonWindows->setGeometry(QRect(150, 160, 100, 21));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        radioButtonOS->setText(QCoreApplication::translate("Widget", "OS X LION", nullptr));
        pushButtonLinux->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\303\251v\303\250nement :", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Entrer votre code :", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Choix :", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
        checkBoxOS->setText(QCoreApplication::translate("Widget", "OS X LION", nullptr));
        pushButtonWindows->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
        radioButtonLinux->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        checkBoxLinux->setText(QCoreApplication::translate("Widget", "Linux", nullptr));
        checkBoxWindows->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
        pushButtonOS->setText(QCoreApplication::translate("Widget", "OS X LION", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "Linux", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "Windows", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "OS X LION", nullptr));

        radioButtonWindows->setText(QCoreApplication::translate("Widget", "Windows", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
