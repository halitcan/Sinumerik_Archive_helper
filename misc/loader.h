#ifndef LOADER_H
#define LOADER_H
#include <QThread>

class Loader :public QThread
{
    Q_OBJECT
public:
    explicit Loader(QObject* parent, const QString& filename);
    void run();

signals:
    void loaded_file();

private:
    const QString filename;
};

#endif // LOADER_H
