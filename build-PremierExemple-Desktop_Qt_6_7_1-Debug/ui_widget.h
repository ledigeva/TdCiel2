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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonMonBouton;
    QPushButton *quitter;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(410, 332);
        QFont font;
        font.setBold(true);
        Widget->setFont(font);
        Widget->setStyleSheet(QString::fromUtf8("background-color:  qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 255), stop:0.19397 rgba(0, 0, 0, 255), stop:0.202312 rgba(122, 97, 0, 255), stop:0.495514 rgba(76, 58, 0, 255), stop:0.504819 rgba(255, 255, 255, 255), stop:0.79 rgba(255, 255, 255, 255), stop:1 rgba(255, 158, 158, 255))"));
        horizontalLayoutWidget_2 = new QWidget(Widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(204, 250, 191, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonMonBouton = new QPushButton(horizontalLayoutWidget_2);
        pushButtonMonBouton->setObjectName("pushButtonMonBouton");

        horizontalLayout_2->addWidget(pushButtonMonBouton);

        quitter = new QPushButton(horizontalLayoutWidget_2);
        quitter->setObjectName("quitter");
        quitter->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 97, 81)"));

        horizontalLayout_2->addWidget(quitter);

        horizontalLayoutWidget_3 = new QWidget(Widget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(40, 30, 311, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        comboBox = new QComboBox(horizontalLayoutWidget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);

        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 100, 311, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName("groupBox");
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(10, 30, 100, 21));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(10, 50, 100, 21));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(160, 0, 151, 99));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(10, 20, 100, 21));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(10, 50, 100, 21));

        horizontalLayout->addWidget(groupBox);


        retranslateUi(Widget);
        QObject::connect(quitter, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonMonBouton->setText(QCoreApplication::translate("Widget", "Mon Boutton", nullptr));
        quitter->setText(QCoreApplication::translate("Widget", "quitter", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "choix 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "choix2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "ta mere", nullptr));

        groupBox->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Widget", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
