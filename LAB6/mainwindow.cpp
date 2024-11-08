#include "mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
    int f=0;
    for (const auto &c: cars)
        if(ui->editSearch->text().isEmpty()){
            ui->textBrowser->append(QString::number(c.n)+ ", "+c.model+ ", "+QString::number(c.color)+", "+ QString::number(c.year));
            f=1;}
            else if(c.model==ui->editSearch->text()){
        ui->textBrowser->GreenText(QString::number(c.n)+ ", "+c.model+", "+QString::number(c.color)+", "+ QString::number(c.year));
        f=1;}

  if(f==0) ui->textBrowser->RedText("ERORR");
}

void MainWindow::addCars()
{
    Cars m;
    m.n = (ui->editID->text()).toInt();
    m.model = ui->editModel->text();
    m.year = (ui->editYear->text()).toInt();
    m.color = static_cast<Color>(ui->comboColor->currentIndex());

    cars.push_back(m);
}

// здесь будем считывать файл сразу после нажатия кнопки
void MainWindow::openCars()
{
   QString file_name = QFileDialog::getOpenFileName(this,"Open a file");

    if(file_name != "") {
    if (file_name.toStdString().find(".csv") != -1)
    {
        // открытие файла csv
        CSVReader csv(file_name);
        read_file(csv);

    }
    else if (file_name.toStdString().find(".json") != -1)
    {
        // открытие файла JSON
        JSONReader json(file_name);
        read_file(json);

    }
    else ui->textBrowser->RedText("Вы выбрали не читаемые файлы!");

        } else {
            ui->textBrowser->RedText("Вы не выбрали откуда читать текст!");
        }
    }

void MainWindow::read_file(AbstractReader &rd)
{
    if (rd.is_open())
{
        //Чтение из файла в вектор
           cars.clear();
           Cars car;
           while(rd >> car){
           cars.push_back(car);}
           }
           else {
        ui->textBrowser->RedText("Не смог открыть файл!");
    }
}

