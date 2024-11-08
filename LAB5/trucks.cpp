#include "trucks.h"

Trucks::Trucks()
{

}
std::string Trucks::to_string() {
   std::string object_information = Cars::to_string();
    object_information = object_information + std::to_string(weight);
    return object_information;}
