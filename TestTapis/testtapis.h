#ifndef TESTTAPIS_H
#define TESTTAPIS_H

#include <QWidget>
#include "tapis.h"
#include "rouleau.h"
#include <QListWidget>
#include <QLCDNumber>
#include <QMessageBox>


/**
 *  @author eva ledig
 *  @abstract testtapis.h
 *  @date 12 novembre 2022
 */


QT_BEGIN_NAMESPACE
namespace Ui {
class TestTapis;
}
QT_END_NAMESPACE

class TestTapis : public QWidget
{
    Q_OBJECT

public:
    TestTapis(QWidget *parent = nullptr);
    ~TestTapis() {};

    void MettreAJourAffichageTapis(Tapis &_tapis, QListWidget &_listWidget, QLCDNumber &_lcdNumber);

private slots:
    void on_pushButtonSortirLeRouleau_clicked();

    void on_pushButtonRAZTapisA_clicked();

    void on_pushButtonRAZTapisB_clicked();

    void on_pushButtonRAZTapisC_clicked();

private:
    Ui::TestTapis *ui;
    Tapis tapisA;
    Tapis tapisB;
    Tapis tapisC;
};
#endif // TESTTAPIS_H
