#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cars.h"
#include "csvreader.h"
#include "QString"

#include "writer.h"

#include <iostream>
#include <string>

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
    writer csv("cars_add.csv");
    csv.WriteAll(cars);
    delete ui;
}

void MainWindow::findCars()
{
    ui->textBrowser->clear();
    for (const auto &c: cars)
        if(ui->editSearch->text().isEmpty())
         ui->textBrowser->append(QString::number(c.n)+ ", "+QString::fromStdString(std::string(c.model))+", "+QString::number(c.color)+", "+ QString::number(c.year));
        else if(c.model==ui->editSearch->text().toStdString())
        ui->textBrowser->append(QString::number(c.n)+ ", "+QString::fromStdString(std::string(c.model))+", "+QString::number(c.color)+", "+ QString::number(c.year));
}

void MainWindow::addCars()
{
    Cars m;
    m.n = (ui->editID->text()).toInt();
    m.model = ui->editModel->text().toStdString();
    m.year = (ui->editYear->text()).toInt();
    m.color = static_cast<Color>(ui->comboColor->currentIndex());

    cars.push_back(m);
}
