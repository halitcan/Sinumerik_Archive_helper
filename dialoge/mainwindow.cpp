#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    file_loaded = false;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_ffnen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Lade Archiv", QString());

    if(filename != "")
    {
        qDebug()<<"Opendialog";
        loadFile(filename);
    }
}


bool MainWindow::loadFile(QString filename)
{
      ladebalken_dialog = new Ladebalken;
      ladebalken_dialog->setModal(true);
      ladebalken_dialog->show();

      Loader* loader = new Loader(this, filename);
      loader->start();

      connect(ladebalken_dialog, SIGNAL(abbrechen()), loader, SLOT(abgebrochen()));
      connect(loader, &Loader::loaded_file, this, &MainWindow::fileLoaded);

      return file_loaded; //falsch?
}

void MainWindow::fileLoaded()
{
    ladebalken_dialog->close();
    delete ladebalken_dialog;
    qDebug() << "file loaded";
}
