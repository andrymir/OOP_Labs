#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QString"
#include "cars.h"

#include <QMainWindow>
#include <cars.h>
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
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
