/**
  * Модуль автоматической авторизации;
  * только для тестирования.
  */

#include <QCoreApplication>
#include "../app/datareceiver.h"
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DataReceiver receiver;
    receiver.setUrl("https://m.vk.com/login");
    QByteArray data = receiver.getData();
    qDebug() << data << "\n\n\n";
    QRegExp rx("action=.*novalidate");
    QStringList list = rx.capturedTexts();
    QString s = list[0];
    s = s.remove("action=").remove(" novalidate").replace('"', "");
    QFile hidden("hidden");
    QString d = hidden.readAll();
    s += d;
    qDebug() << s;
    return a.exec();
}
