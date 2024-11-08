#include "mybrowser.h"
#include "mainwindow.h"

#include <QMainWindow>

#include "ui_mainwindow.h"

MyBrowser::MyBrowser(QWidget* parent)
    :QTextBrowser(parent)
{

}

void MyBrowser::GreenText(QString text)

{
    auto color = this->textColor();
    this->setTextColor(Qt::green);
    this->append(text);
    this->setTextColor(color);
}


void MyBrowser::RedText(QString text)

{
    auto color = this->textColor();
    this->setTextColor(Qt::red);
    this->append(text);
    this->setTextColor(color);
}
