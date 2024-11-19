#include "dialog.h"
#include "ui_dialog.h"
#include <QPushButton>

Dialog::Dialog(QSerialPort &_lePort, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
    ,lePort(_lePort)
{
    ui->setupUi(this);

    for(const auto &info : QSerialPortInfo::availablePorts() ) // foreach
    {
        qDebug() << info.portName(); // permet dafficher dans la console les ports
        ui->comboBoxPort->addItem(info.portName()); // permet dajouter les donner dans le comboBox
    }


    ui->comboBoxPort->addItem("aucun port");
    ui->comboBoxPort->setCurrentText("aucun port");

    if(ui->comboBoxPort->currentText() == "aucun port"){
        ui->buttonBox->setEnabled(false);
    }

    ui->comboBoxVitesse->addItem("1200",QSerialPort::Baud1200);
    ui->comboBoxVitesse->addItem("9600",QSerialPort::Baud9600);
    ui->comboBoxVitesse->addItem("115200",QSerialPort::Baud115200);

    ui->comboBoxVitesse->setCurrentText("9600"); // permet de metre la valeur en priorité
    lePort.setBaudRate(QSerialPort::Baud9600);

    ui->spinBoxBitData->setRange(5,8); // permet detre que dans une tranche de 5 a 8 inclue
    ui->spinBoxBitData->setValue(8); // valeur prioritaire
    lePort.setDataBits(QSerialPort::Data8);

    ui->radioButtonNone->setChecked(true);//part default sans parité

    // int nombreDeBitsStop;
    // if (ui->checkBoxStop->isChecked()) {
    //     // Si la case est cochée, définir le nombre de bits de stop à 2
    //     nombreDeBitsStop = 2;
    // } else {
    //     // Si la case est décochée, définir le nombre de bits de stop à 1
    //     nombreDeBitsStop = 1;
    // }

    lePort.setStopBits(QSerialPort::OneStop); // 1 bit de stop part default

    //controle de flux
    ui->comboBoxFlux->addItem("Pas de contrôle de flux");
    ui->comboBoxFlux->addItem("Matériel (RTS/CTS)");
    ui->comboBoxFlux->addItem("Logiciel (XON/XOFF)");
    lePort.setFlowControl(QSerialPort::NoFlowControl); // pas de controle de flux part default

    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

    }

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_comboBoxVitesse_currentTextChanged(const QString &arg1)
{
    lePort.setBaudRate(_arg1.toInt);
}


void Dialog::on_spinBoxBitData_valueChanged(int arg1)
{

}


void Dialog::on_checkBoxStop_toggled(bool checked)
{

}


void Dialog::on_radioButtonPaire_toggled(bool checked)
{
    //QSerialPort::EvenParity// 2 Le nombre de bits 1 doit être pair, détection d'erreur simple
}


void Dialog::on_radioButtonImpaire_toggled(bool checked)
{
    //QSerialPort::OddParity // 3 Le nombre de bits 1 doit être impair, détection d'erreur simple
}


void Dialog::on_radioButtonNone_toggled(bool checked)
{
    //lePort.NoParity //0 Pas de bit de parité, aucun contrôle d'erreur
}


void Dialog::on_comboBoxPort_currentIndexChanged(int index)
{
    if(ui->comboBoxPort->currentText() == "aucun port"){
        ui->buttonBox->setEnabled(false);
    }else{
        ui->buttonBox->setEnabled(true);
    }
}

