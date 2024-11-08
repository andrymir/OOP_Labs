#include "cars.h"

std::string Cars::to_string()
        {
            std::string object_information;
            object_information = object_information + std::to_string(n);
            std::string utf8_text = model.toUtf8().constData();
            object_information = object_information + utf8_text;
            object_information = object_information + std::to_string(color);
            object_information = object_information + std::to_string(year);
            return object_information;
        }
Cars::Cars()
{

}

