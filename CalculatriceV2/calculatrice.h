#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculatrice;
}
QT_END_NAMESPACE

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();


private:
    Ui::Calculatrice *ui;

private slots:

    void onQPushButtonCliked();

    void on_pushButtonEffacer_clicked();
    void on_pushButtonEgal_clicked();
};
#endif // CALCULATRICE_H
