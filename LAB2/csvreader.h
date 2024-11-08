#ifndef CSVREADER_H
#define CSVREADER_H

#include <string>
#include <fstream>
#include <vector>
#include "cars.h"

class CSVReader
{
    std::ifstream fin;
public:
    CSVReader(const std::string& filename);
    ~CSVReader();
    bool is_open() const {return fin.is_open();};
    std::vector<Cars> readAll();
    std::vector<std::string> split(const std::string& str, char delim);
};

#endif // CSVREADER_H
