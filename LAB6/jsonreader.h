#ifndef JSONREADER_H
#define JSONREADER_H
#include <vector>
#include "cars.h"
#include "abstractreader.h"
#include <QString>
#include <fstream>
#include <json.hpp>

class JSONReader: public AbstractReader
{
public:
    std::ifstream fin;
    JSONReader(const QString& filename);
    ~JSONReader();
    bool is_open() override
    {
       return fin.is_open();
    }
    virtual AbstractReader& operator>> (Cars &car);

    virtual operator bool()
        {
            return this->is_open();
        }
private:
    int index = 0;
    nlohmann::json json;
    nlohmann::json::iterator j_start;
};

#endif // JSONREADER_H
