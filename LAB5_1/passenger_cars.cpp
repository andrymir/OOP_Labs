#include "passenger_cars.h"

Passenger_cars::Passenger_cars()
{

}

std::string Passenger_cars::to_string() {
   std::string object_information = Cars::to_string();
    object_information = object_information + num;
    return object_information;}
