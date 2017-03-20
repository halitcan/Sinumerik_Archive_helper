#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "misc/loader.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool loadFile(QString filename);

private slots:
    void on_action_ffnen_triggered();
    void fileLoaded();
    
signals:


private:
    Ui::MainWindow *ui;
    bool file_loaded;
};

#endif // MAINWINDOW_H
