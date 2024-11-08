#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cars.h"
#include "csvreader.h"
#include "QString"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CSVReader csv("cars.csv");
    if(csv.is_open())
    {
      cars = csv.readAll();

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::findCars()
{
    ui->textBrowser->clear();
    for (const auto &c: cars)
        if(ui->editSearch->text().isEmpty())
         ui->textBrowser->append(QString::number(c.n)+ ", "+QString::fromStdString(std::string(c.model))+", "+ QString::number(c.year));
        else if(c.model==ui->editSearch->text().toStdString())
        ui->textBrowser->append(QString::number(c.n)+ ", "+QString::fromStdString(std::string(c.model))+", "+ QString::number(c.year));
}
