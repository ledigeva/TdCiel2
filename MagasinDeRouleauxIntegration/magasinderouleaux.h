#ifndef MAGASINDEROULEAUX_H
#define MAGASINDEROULEAUX_H

#include <QWidget>
#include "alveoleslibres.h"
#include "stock.h"
#include "chariot.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MagasinDeRouleaux;
}
QT_END_NAMESPACE

class MagasinDeRouleaux : public QWidget
{
    Q_OBJECT

public:
    MagasinDeRouleaux(QWidget *parent = nullptr);
    ~MagasinDeRouleaux();

private slots:
    void on_pushButtonEntrer_clicked();

    void on_pushButtonSortir_clicked();

private:
    Ui::MagasinDeRouleaux *ui;
    Chariot leChariot;
    AlveolesLibres alveole;

        void AfficherStock();
    void AfficherRouleauEnceinte(Rouleau _rouleau);
};
#endif // MAGASINDEROULEAUX_H
