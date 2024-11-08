#include "writer.h"
#include <iostream>
#include <string>
writer::writer(const QString& filename)
{

    fout.open(filename.toLatin1().data());
}
writer::~writer()
{
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
        fout << c.n << ";" << c.model.toLatin1().data() << ";" << c.color << ";" << c.year << std::endl;
    }

    fout.close(); // закрываем файл
}

    writer& writer::operator=(writer&& orher){
    fout = std::move(orher.fout);
    return *this;
}

    writer::writer(writer&& orther){
    fout = std::move(orther.fout);
}

