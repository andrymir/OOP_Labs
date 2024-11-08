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
    std::ofstream fin;

public:
    writer(const QString& filename);
    ~writer();

// функция is_open
    bool is_open() const { return fin.is_open(); };

// функция writeAll
    void WriteAll(std::vector<Cars> f);
};

#endif // WRITER_H

