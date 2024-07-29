#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QMessageBox>
#include <QJsonObject>
#include <QJsonDocument>
#include "player.h"

namespace Ui {
class Widget;
}

//#define IP    "8.130.96.66"
//#define PORT  8000

#define IP "110.42.167.18"
#define PORT 10000

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();
    void server_reply_slot();

private:
    void bind_operation();

private:
    Ui::Widget *ui;
    QTcpSocket *socket;
};

#endif // WIDGET_H
