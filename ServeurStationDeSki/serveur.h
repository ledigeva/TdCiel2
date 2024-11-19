#ifndef SERVEUR_H
#define SERVEUR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Serveur;
}
QT_END_NAMESPACE

class Serveur : public QWidget
{
    Q_OBJECT

public:
    Serveur(QWidget *parent = nullptr);
    ~Serveur();

private:
    Ui::Serveur *ui;
};
#endif // SERVEUR_H
