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
      loadFile(filename);
    }
}


bool MainWindow::loadFile(QString filename)
{
      Loader* loader = new Loader(this, filename);
      loader->start();
      connect(loader, &Loader::loaded_file, this, &MainWindow::fileLoaded);

      return file_loaded; //falsch?
}

void MainWindow::fileLoaded()
{
    qDebug() << "file loaded";
    //file_loaded = state;
}
