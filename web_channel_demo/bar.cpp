#include "bar.h"

#include <QTimer>
#include <QDateTime>

Bar::Bar(QObject *parent) : QObject(parent)
{
    init();
}

void Bar::hw()
{
    qDebug("cpp: Hello World");
}

QString Bar::jsHw()
{
    return QLatin1Literal("Hello World");
}

void Bar::init()
{
    QTimer* timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, &QTimer::timeout, [&]{
        QString curr_time = QDateTime::currentDateTime().toString();
        emit timeChanged(curr_time);
    });
    timer->start();
}
