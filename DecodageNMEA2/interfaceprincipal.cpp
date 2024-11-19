#include "interfaceprincipal.h"
#include "ui_interfaceprincipal.h"

InterfacePrincipal::InterfacePrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::InterfacePrincipal)
    , configGPS(lePort)
{
    ui->setupUi(this);

    labelEtatPort.setText("port fermé");
    ui->statusbar->addPermanentWidget(&labelEtatPort);
    ui->statusbar->show();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

InterfacePrincipal::~InterfacePrincipal()
{
    delete ui;
}

void InterfacePrincipal::onQSerialPort_ReadyRead()
{
    //QString message;
    //QByteArray flux;
    //flux=lePort.readAll();
    //ui->textEdit->setText(flux);

    ui->textEdit->insertPlainText(lePort.readAll());
}

void InterfacePrincipal::on_actionConfigurer_triggered()
{
    //Dialog dial(lePort, this);
    //if(dial.exec() == QDialog::Accepted)
    if(configGPS.exec() == QDialog::Accepted)
        if(lePort.open(QIODevice::ReadOnly))
    {

        qDebug() << lePort.portName() << lePort.baudRate() << lePort.dataBits();
        qDebug() << lePort.portName();

        QString message;
        QTextStream flux (&message);
        QString parite;

        switch (lePort.parity()) {
        case QSerialPort::NoParity:
            parite = "n";
            break;
        case QSerialPort::EvenParity:
            parite = "i";
            break;
        case QSerialPort::OddParity:
            parite = "p";
            break;
        default:
            break;
        }

        flux << "Port : " << lePort.portName() << "," << lePort.baudRate() << "," << lePort.dataBits() << "," << parite << "," << lePort.stopBits();


        labelEtatPort.setText(message);
        connect(&lePort,&QSerialPort::readyRead,this,&InterfacePrincipal::onQSerialPort_ReadyRead);


        qDebug() << lePort.portName() << "aaaaaaaaaaaa" ;

        // Initialisation de QSettings avec organisation "MyCompany" et application "MyApp"
            QSettings settings("MyCompany", "TestConfig");


        // Écriture de paramètres dans des groupes
        settings.beginGroup("window");
        settings.setValue("port", lePort.portName());
        settings.setValue("vitesse", lePort.baudRate());
        settings.setValue("bits", lePort.dataBits());
        settings.setValue("stop", lePort.stopBits());
        settings.setValue("parite", lePort.parity());
        settings.endGroup();


        // Lecture des paramètres avec vérification préalable
        settings.beginGroup("window");
        if (settings.contains("size")) {
            QSize size = settings.value("size").toSize();
            qDebug() << "Window size:" << size;
        } else {
            qDebug() << "Window size not set.";
        }
        if (settings.contains("position")) {
            QPoint position = settings.value("position").toPoint();
            qDebug() << "Window position:" << position;
        } else {
            qDebug() << "Window position not set.";
        }
        settings.endGroup();
        settings.beginGroup("user");
        if (settings.contains("username")) {
            QString username = settings.value("username").toString();
            qDebug() << "Username:" << username;
        } else {
            qDebug() << "Username not set.";
        }
        settings.endGroup();
    }
}

