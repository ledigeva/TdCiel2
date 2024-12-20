#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTimer>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonObtenir_clicked();



    void on_comboBoxRegion_currentIndexChanged(int index);

    void on_comboBoxVille_currentIndexChanged(int index);

private:
    void ChargerRegion();
    Ui::Widget *ui;
    QSqlDatabase db;
};
#endif // WIDGET_H
