#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    for(const auto &info : QSerialPortInfo::availablePorts() ) // foreach
    {

        qDebug() << info.portName(); // permet dafficher dans la console les ports
        ui->comboBoxChoixSerie->addItem(info.portName()); // permet dajouter les donner dans le comboBox
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_comboBoxChoixSerie_currentTextChanged(const QString &arg1)
{
    lePortSerie.setPortName(arg1); //fixe le nom du port ( pour lutiliser )
    lePortSerie.setBaudRate(QSerialPort::Baud115200);
     lePortSerie.setDataBits(QSerialPort::Data8);
    lePortSerie.setParity(QSerialPort::NoParity);
     lePortSerie.setStopBits(QSerialPort::OneStop);
    lePortSerie.setFlowControl(QSerialPort::NoFlowControl);
    qDebug() << "le port est fixer " << arg1 ;
}


void Widget::on_pushButtonOuvrirPort_clicked()
{
    if(ui->pushButtonOuvrirPort->text()== "Ouvrir le port série"){

        ui->pushButtonOuvrirPort->setText("Fermer le port");
        if(lePortSerie.open(QIODevice::ReadWrite)){// ouvert en lecture et ecriture
            qDebug() << "ouverture du port";
            ui->textEditRecu->clear();
            ui->textEditRecu->setText("ouverture du port");

            connect(&lePortSerie,
                    &QSerialPort::readyRead,
                    this,
                    &Widget::onQSerialPort_readyRead);


        }else{
                qDebug() << "Erreur à l'ouverture du port :" << lePortSerie.errorString(); // erreur a louverture
            ui->textEditRecu->clear();
            ui->textEditRecu->setText("erreur d'ouverture");
        }
    }
    else
    {
        ui->pushButtonOuvrirPort->setText("Ouvrir le port série");
        lePortSerie.close();
        ui->textEditRecu->clear();
        ui->textEditRecu->setText("fermeture du port");
    }
}


void Widget::on_pushButtonEnvoyai_clicked()
{
    QByteArray data = ui->lineEditTextEnvoyer->text().toUtf8(); // toUtf8() convertie en utf-8 et toLatin1() convertie en lettre oxidental ( plus limité )
    lePortSerie.write(data);
    qDebug() << data;

    ui->textEditRecu->setText(data);
}

void Widget::onQSerialPort_readyRead()
{
    //qDebug() << lePortSerie.readAll();
    ui->textEditRecu->insertPlainText(lePortSerie.readAll());
}

