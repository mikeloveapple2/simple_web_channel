#include "bar.h"

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtWebEngine>
#include <QtQml>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QtWebEngine::initialize();
    qmlRegisterType<Bar>("Ho0", 1, 0, "Bar");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
