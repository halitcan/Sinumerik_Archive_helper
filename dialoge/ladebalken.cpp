#include "ladebalken.h"
#include "ui_ladebalken.h"
#include <QDebug>

Ladebalken::Ladebalken(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ladebalken)
{
    ui->setupUi(this);
}

Ladebalken::~Ladebalken()
{
    delete ui;
}

void Ladebalken::on_pb_Abbrechen_clicked()
{
    qDebug()<<"abgebrochen";
    this->close();
    emit abbrechen();
}
