#ifndef ABSTRACTREADER_H
#define ABSTRACTREADER_H
#include <vector>
#include "cars.h"

class AbstractReader
{
public:
    virtual ~AbstractReader();
    virtual std::vector<Cars> readAll() =0;
    virtual bool is_open() = 0;

};

#endif // ABSTRACTREADER_H
