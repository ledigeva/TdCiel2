#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //QList("QMARIADB", "QMYSQL", "QSQLITE", "QODBC", "QPSQL", "QMIMER")
    ui->setupUi(this);

    qDebug() << QSqlDatabase::drivers();

    bool retour = false;

    db = QSqlDatabase::addDatabase("QMARIADB"); // ou "QMYSQL"
    db.setHostName("172.18.58.7"); // Adresse du serveur MySQL
    db.setDatabaseName("france2018"); // Nom de la base de données
    db.setUserName("snir"); // Nom d'utilisateur
    db.setPassword("snir"); // Mot de passe
    if(db.open()){
        qDebug() << "Connexion réussie à la base de données.";
        ChargerRegion();


    }else{
        qDebug() << "sa marche pas t une merde";
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonObtenir_clicked()
{
    QString code = ui->lineEditCode->text();
    if(!code.isEmpty()){
        if(db.isOpen()){
            QSqlQuery requete;
            requete.prepare("SELECT name FROM departments WHERE code = :code");
            requete.bindValue(":code",code);
            if(requete.exec()){
                qDebug() << "requete executé : " << requete.lastQuery();
                if(requete.next()){
                    QString nom = requete.value("name").toString();
                    ui->lineEditNom->setText(nom);
                }else{
                    QMessageBox::critical(this, "Erreur", "ce code de departement nexiste pas");
                }
            }else{
                qDebug() << "erreur lors de la selection : " << requete.lastError().text();
            }
        }
    }
}

void Widget::ChargerRegion()
{
    QSqlQuery requete("SELECT name, code FROM regions");
    if (requete.exec()){
        QString nom;
        QString id;
        ui->comboBoxRegion->clear();
        ui->comboBoxRegion->addItem("Choisissez une région",QVariant());
        while(requete.next())
        {
            nom=requete.value("name").toString();
            id=requete.value("code").toString();
            ui->comboBoxRegion->addItem(nom,id);
        }
    }
    else qDebug() << "Erreur dans sélection des régions : " << requete.lastError().text();
}





void Widget::on_comboBoxRegion_currentIndexChanged(int index)
{
    // Récupérer l'identifiant de la région sélectionnée
    QString idRegion = ui->comboBoxRegion->itemData(index).toString();

    // Nettoyer le comboBox des departement
    ui->comboBoxDepartement->clear();
    ui->comboBoxDepartement->addItem("Choisissez un departement");

    // Vérifier que l'identifiant de la region est valide
    if (!idRegion.isEmpty()) {
        QSqlQuery query;
        query.prepare("SELECT name, code FROM departments WHERE region_code = :idRegion");
        query.bindValue(":idRegion", idRegion);

        if (query.exec()) {
            // Parcourir les résultats et ajouter les départements au comboBox
            while (query.next()) {
                QString name = query.value("name").toString();
                QString code = query.value("code").toString();
                ui->comboBoxDepartement->addItem(name, code);
            }
        } else {
            // Afficher une erreur si la requête échoue
            qDebug() << "Erreur lors de la récupération des départements : " << query.lastError().text();
        }
    }
}


void Widget::on_comboBoxVille_currentIndexChanged(int index)
{
    // Récupérer l'identifiant du département sélectionné
    QString idDepartment = ui->comboBoxDepartement->itemData(index).toString();

    // Nettoyer le comboBox des villes
    ui->comboBoxVille->clear();
    ui->comboBoxVille->addItem("Choisissez une ville");

    // Vérifier que l'identifiant du département est valide
    if (!idDepartment.isEmpty()) {
        QSqlQuery query;
        query.prepare("SELECT name FROM cities WHERE department_code = :idDepartment");
        query.bindValue(":idDepartment", idDepartment);

        if (query.exec()) {
            // Parcourir les résultats et ajouter les villes au comboBox
            while (query.next()) {
                QString name = query.value("name").toString();

                ui->comboBoxVille->addItem(name);
            }
        } else {
            // Afficher une erreur si la requête échoue
            qDebug() << "Erreur lors de la récupération des villes : " << query.lastError().text();
        }
    }
}

