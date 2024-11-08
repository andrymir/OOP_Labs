#ifndef TRUCKS_H
#define TRUCKS_H
#include "cars.h"

class Trucks : public Cars
{
public:
    int weight;
    Trucks();
    std::string to_string();


};
#endif // TRUCKS_H
