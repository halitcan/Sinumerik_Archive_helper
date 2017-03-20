#include "loader.h"

Loader::Loader(QObject* parent, const QString& filename)
    :QThread(parent), filename(filename)
{
    //emit loaded_file(true);
}

void Loader::run()
{
    emit loaded_file();
    //do something
}
