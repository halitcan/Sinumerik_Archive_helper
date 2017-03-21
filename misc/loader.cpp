#include "loader.h"
#include <QFile>
#include <QDebug>
#include <QDataStream>

Loader::Loader(QObject* parent, const QString& filename)
    :QThread(parent), filename(filename)
{

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
    file.open(QIODevice::ReadOnly);

    while(!file.atEnd())
    {
        QString currentLine = file.readLine();
    }

}

void Loader::abgebrochen()
{
    this->terminate();
    this->exit();
}
