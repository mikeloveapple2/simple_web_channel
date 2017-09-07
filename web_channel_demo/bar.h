#ifndef BAR_H
#define BAR_H

#include <QObject>

class Bar : public QObject
{
    Q_OBJECT
public:
    explicit Bar(QObject *parent = 0);

    Q_INVOKABLE void hw();
    Q_INVOKABLE QString jsHw();

signals:
    void timeChanged(QString newTime);

public slots:

private :
    void init();
};

#endif // BAR_H
