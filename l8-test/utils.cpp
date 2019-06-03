#include "utils.h"
#include <QUrlQuery>
#include "../app/globals.h"
#include "../app/token.h"
#include <QDebug>

Utils::Utils(QObject* parent) : QObject (parent)
{

}

void Utils::getError(const QUrl &url)
{
    qDebug() << "U: " << url.toString();
    QString urlString = url.toDisplayString(QUrl::FullyEncoded);
    QUrlQuery query(urlString);
    Token token(nullptr);
    token.setValue(query.queryItemValue("https://oauth.vk.com/blank.html#access_token"));
    e = token.isEmpty() ? AT_ERR : NO_ERR;
}
