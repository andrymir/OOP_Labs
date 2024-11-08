#ifndef PASSENGER_CARS_H
#define PASSENGER_CARS_H

#include "cars.h"

class Passenger_cars : public Cars
{
public:
    std::string num;
    Passenger_cars();
    std::string to_string();


};
#endif // PASSENGER_CARS_H
