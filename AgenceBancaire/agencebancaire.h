#ifndef AGENCEBANCAIRE_H
#define AGENCEBANCAIRE_H

#include <QWidget>
#include "accesbdd.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class AgenceBancaire;
}
QT_END_NAMESPACE

class AgenceBancaire : public QWidget
{
    Q_OBJECT

public:
    AgenceBancaire(QWidget *parent = nullptr);
    ~AgenceBancaire();

private slots:
    void on_pushButtonConnexion_clicked();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButtonAjouter_clicked();

    void on_comboBoxAgencesConsultationClients_currentIndexChanged(int index);

private:
    Ui::AgenceBancaire *ui;

    AccesBdd *laBdd;
};
#endif // AGENCEBANCAIRE_H
