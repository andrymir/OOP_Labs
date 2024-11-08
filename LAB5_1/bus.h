#ifndef BUS_H
#define BUS_H
#include "cars.h"

class Bus : public Cars
{
public:
    int people;
    Bus();
    std::string to_string();


};
#endif // BUS_H
