#ifndef WRITER_H
#define WRITER_H

#include <QString>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

#include "mainwindow.h"
#include "cars.h"

class writer
{
    std::fstream fout;
    writer(const writer&) = delete;
    writer& operator=(const writer&) = delete;

public:
    writer(const QString& filename);
    ~writer();




// функция is_open
    bool is_open() const { return fout.is_open(); };

// функция writeAll
    void WriteAll(std::vector<Cars> f);
    //Оператор присваивания перемещением
    writer& operator= (writer&& orther);
    // Конструктор перемещения
    writer(writer&& orther);
};

#endif // WRITER_H

