#include "jsonreader.h"
#include <iostream>
#include "json.hpp"

JSONReader::JSONReader(const QString& filename)
{
    fin.open(filename.toLatin1().data());
    fin >> json;
    j_start = json.begin();
}

JSONReader::~JSONReader()
{
    fin.close();
}

AbstractReader& JSONReader::operator>>(Cars &car)
{
    std::string tempStr;
    if(j_start < json.end())
    {
        car.n = j_start.value()["id"];
        car.color = j_start.value()["color"];
        car.year = j_start.value()["year"];
        tempStr = j_start.value()["model"];
        car.model = QString::fromStdString(tempStr);
        j_start++;
    }else {
        fin.close();
    }


    return *this;
}
