#ifndef CSVREADER_H
#define CSVREADER_H

#include <iostream>
#include "abstractreader.h"
#include <string>
#include <fstream>
#include <vector>
#include "cars.h"

class CSVReader: public AbstractReader
{
    std::ifstream fin;


    CSVReader(const CSVReader&) = delete;
    CSVReader& operator=(const CSVReader&) = delete;

public:

    CSVReader(QString& filename);
    ~CSVReader();

    bool is_open () override {return fin.is_open();};
    std::vector<Cars> readAll() override;
    //Оператор присваивания перемещением
    CSVReader& operator= (CSVReader&& orther);
    // Конструктор перемещения
    CSVReader(CSVReader&& orther);



};

#endif // CSVREADER_H
