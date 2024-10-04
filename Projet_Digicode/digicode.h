#ifndef DIGICODE_H
#define DIGICODE_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class Digicode;
}
QT_END_NAMESPACE

class Digicode : public QWidget
{
    Q_OBJECT

public:
    Digicode(QWidget *parent = nullptr);
    ~Digicode();

private:
    Ui::Digicode *ui;
    QString code;
    QString codeSecret;

    QGridLayout *grille;
    QPushButton **touches;
    QPushButton *uneTouches;
    QLineEdit *afficheur;

private slots:
    void onQPushButtonCliked();

};
#endif // DIGICODE_H
