#ifndef AUDITSERVEURWIDGET_H
#define AUDITSERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QProcess>
#include <QTcpServer>
#include <QHostInfo>
#include <QNetworkInterface>

QT_BEGIN_NAMESPACE
namespace Ui {
class AuditServeurWidget;
}
QT_END_NAMESPACE

class AuditServeurWidget : public QWidget
{
    Q_OBJECT

public:
    AuditServeurWidget(QWidget *parent = nullptr);
    ~AuditServeurWidget();

private slots:
    void on_pushButtonLancement_clicked();

    void onQTcpServerNewConnection();
    void onQTcpServerAccepError();
    void onQTcpServerConnected();
    void onQTcpServerDisconnected();
    void onQTcpServerReadyRead();
    void onQTcpServerErrorOccured(QAbstractSocket::SocketError _socketError);
    void onQTcpServerStateChanged(QAbstractSocket::SocketState _socketState);
    void onQTcpServerHostFound();
    void onQTcpServerBytesWritten(qint64 _bytes);
    void onQTcpServerAboutToClose();
    void onQProcessReadyReadStandardOutput();

private:
    Ui::AuditServeurWidget *ui;

    QTcpServer *socketEcouteServeur;
    QProcess *process;
    QTcpSocket *socketDialogueClient;
};
#endif // AUDITSERVEURWIDGET_H
