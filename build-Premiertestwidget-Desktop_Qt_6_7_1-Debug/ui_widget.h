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

class Ui_QWidget
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonLinux;
    QPushButton *pushButtonWindows;
    QPushButton *pushButtonOS;
    QPushButton *pushButtonQuitter;
    QRadioButton *radioButtonLinux;
    QRadioButton *radioButtonWindows;
    QRadioButton *radioButtonOS;
    QCheckBox *checkBoxLinux;
    QCheckBox *checkBoxWindows;
    QCheckBox *checkBoxOS;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QComboBox *comboBox;

    void setupUi(QWidget *QWidget)
    {
        if (QWidget->objectName().isEmpty())
            QWidget->setObjectName("QWidget");
        QWidget->resize(475, 416);
        lineEdit = new QLineEdit(QWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 30, 261, 31));
        label = new QLabel(QWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 121, 16));
        label_2 = new QLabel(QWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 100, 58, 15));
        label_3 = new QLabel(QWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 270, 71, 16));
        pushButtonLinux = new QPushButton(QWidget);
        pushButtonLinux->setObjectName("pushButtonLinux");
        pushButtonLinux->setGeometry(QRect(60, 210, 80, 23));
        pushButtonWindows = new QPushButton(QWidget);
        pushButtonWindows->setObjectName("pushButtonWindows");
        pushButtonWindows->setGeometry(QRect(170, 210, 80, 23));
        pushButtonOS = new QPushButton(QWidget);
        pushButtonOS->setObjectName("pushButtonOS");
        pushButtonOS->setGeometry(QRect(290, 210, 80, 23));
        pushButtonQuitter = new QPushButton(QWidget);
        pushButtonQuitter->setObjectName("pushButtonQuitter");
        pushButtonQuitter->setGeometry(QRect(320, 260, 91, 31));
        radioButtonLinux = new QRadioButton(QWidget);
        radioButtonLinux->setObjectName("radioButtonLinux");
        radioButtonLinux->setGeometry(QRect(60, 180, 100, 21));
        radioButtonWindows = new QRadioButton(QWidget);
        radioButtonWindows->setObjectName("radioButtonWindows");
        radioButtonWindows->setGeometry(QRect(170, 180, 100, 21));
        radioButtonOS = new QRadioButton(QWidget);
        radioButtonOS->setObjectName("radioButtonOS");
        radioButtonOS->setGeometry(QRect(290, 180, 100, 21));
        checkBoxLinux = new QCheckBox(QWidget);
        checkBoxLinux->setObjectName("checkBoxLinux");
        checkBoxLinux->setGeometry(QRect(60, 150, 83, 21));
        checkBoxWindows = new QCheckBox(QWidget);
        checkBoxWindows->setObjectName("checkBoxWindows");
        checkBoxWindows->setGeometry(QRect(170, 150, 83, 21));
        checkBoxOS = new QCheckBox(QWidget);
        checkBoxOS->setObjectName("checkBoxOS");
        checkBoxOS->setGeometry(QRect(290, 150, 83, 21));
        scrollArea = new QScrollArea(QWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 300, 371, 101));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 369, 99));
        scrollArea->setWidget(scrollAreaWidgetContents);
        comboBox = new QComboBox(QWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(248, 92, 121, 31));

        retranslateUi(QWidget);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, QWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(QWidget);
    } // setupUi

    void retranslateUi(QWidget *QWidget)
    {
        QWidget->setWindowTitle(QCoreApplication::translate("QWidget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("QWidget", "Entrer votre code :", nullptr));
        label_2->setText(QCoreApplication::translate("QWidget", "Choix :", nullptr));
        label_3->setText(QCoreApplication::translate("QWidget", "\303\251v\303\250nement :", nullptr));
        pushButtonLinux->setText(QCoreApplication::translate("QWidget", "Linux", nullptr));
        pushButtonWindows->setText(QCoreApplication::translate("QWidget", "Windows", nullptr));
        pushButtonOS->setText(QCoreApplication::translate("QWidget", "OS X LION", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("QWidget", "Quitter", nullptr));
        radioButtonLinux->setText(QCoreApplication::translate("QWidget", "Linux", nullptr));
        radioButtonWindows->setText(QCoreApplication::translate("QWidget", "Windows", nullptr));
        radioButtonOS->setText(QCoreApplication::translate("QWidget", "OS X LION", nullptr));
        checkBoxLinux->setText(QCoreApplication::translate("QWidget", "Linux", nullptr));
        checkBoxWindows->setText(QCoreApplication::translate("QWidget", "Windows", nullptr));
        checkBoxOS->setText(QCoreApplication::translate("QWidget", "OS X LION", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("QWidget", "Linux", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("QWidget", "Windows", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("QWidget", "OS X LION", nullptr));

    } // retranslateUi

};

namespace Ui {
    class QWidget: public Ui_QWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
