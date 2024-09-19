#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QJSValue>
#include <QJSEngine>


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
    const int NB_TOUCHES;
    QGridLayout *grille;
    QLineEdit *afficheur;
    QPushButton **touches;

private slots:
    void onQPushButtonClicked();

};
#endif // CALCULATRICE_H:
