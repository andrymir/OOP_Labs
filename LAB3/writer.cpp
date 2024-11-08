#include "writer.h"
#include <iostream>
#include <string>
writer::writer(const QString& filename)
{
    std::ofstream fout;
    fout.open(filename.toLatin1().data());
}
writer::~writer()
{
    std::ofstream fout;
    fout.close();
}

// тело функции writeAll для дополнения данных в файле
void writer::WriteAll(std::vector<Cars> f)
{
    std::ofstream fout;
    std::string path = "cars_add.csv";
    fout.open(path);

    for (const auto &c: f)
    {
        fout << c.n << ";" << c.model << ";" << c.color << ";" << c.year << std::endl;
    }

    fout.close(); // закрываем файл
}

