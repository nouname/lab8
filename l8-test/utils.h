#ifndef UTILS_H
#define UTILS_H

#include <QObject>
#include <QUrl>

class Utils : public QObject
{
    Q_OBJECT

public:
    Utils(QObject *parent = nullptr);
    QString e;

public slots:
    void getError(const QUrl &url);
};

#endif // UTILS_H
