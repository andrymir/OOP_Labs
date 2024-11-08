#include "bus.h"

Bus::Bus()
{

}


std::string Bus::to_string() {
   std::string object_information = Cars::to_string();
    object_information = object_information + std::to_string(people);
    return object_information;}

