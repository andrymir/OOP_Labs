#ifndef ABSTRACTREADER_H
#define ABSTRACTREADER_H
#include <vector>
#include "cars.h"

class AbstractReader
{
public:
    AbstractReader();
     virtual std::vector<Cars> readAll() {std::vector<Cars> car; return car;};
     virtual bool is_open() = 0;
     virtual operator bool()  = 0;
     virtual AbstractReader& operator>> (Cars &c) = 0;
};

#endif // ABSTRACTREADER_H
