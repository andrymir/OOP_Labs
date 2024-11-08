#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "cars.h"
#include "csvreader.h"
#include "QString"
#include <QDebug>
#include "writer.h"
#include "mybrowser.h"
#include <iostream>
#include <string>
#include <QFileDialog>
#include <QMessageBox>
#include "jsonreader.h"
#include "abstractreader.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    std::vector<Cars> cars;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void findCars();
    void addCars();
    void read_file(AbstractReader &rd);
    void openCars();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
