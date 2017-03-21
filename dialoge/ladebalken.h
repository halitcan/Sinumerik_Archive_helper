#ifndef LADEBALKEN_H
#define LADEBALKEN_H

#include <QDialog>

namespace Ui {
class Ladebalken;
}

class Ladebalken : public QDialog
{
    Q_OBJECT

public:
    explicit Ladebalken(QWidget *parent = 0);
    ~Ladebalken();

private slots:

    void on_pb_Abbrechen_clicked();


signals:
    void abbrechen();

private:
    Ui::Ladebalken *ui;
};

#endif // LADEBALKEN_H
