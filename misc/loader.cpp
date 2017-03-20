#include "loader.h"
#include <QFile>
#include <QDebug>

Loader::Loader(QObject* parent, const QString& filename)
    :QThread(parent), filename(filename)
{
    //emit loaded_file(true);
}

void Loader::run()
{
    load_archive();
    emit loaded_file();
    //do something
}

void Loader::load_archive()
{
    QFile file(filename);
    QDataStream data(&file);
    file.read(0);

    QString currentString;
    data >> currentString;
    qDebug() << currentString;
}
