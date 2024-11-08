#ifndef CSVREADER_H
#define CSVREADER_H
#include<algorithm>
#include <iostream>
#include "abstractreader.h"
#include <string>
#include <fstream>
#include <vector>
#include "cars.h"
using namespace std;
class CSVReader: public AbstractReader
{
    std::ifstream fin;


    CSVReader(const CSVReader&) = delete;
    CSVReader& operator=(const CSVReader&) = delete;

public:

    CSVReader(const QString& filename);
    ~CSVReader();

    bool flag;
    bool is_open() override {return fin.is_open(); };
    operator bool()  override
        {
         return flag;
        }
    //Оператор присваивания перемещением
    CSVReader& operator= (CSVReader&& orther);
    // Конструктор перемещения
    CSVReader(CSVReader&& orther);

    virtual AbstractReader& operator>> (Cars &car) override;

private:
    int index = 0;
    vector<Cars> csv;

};

#endif // CSVREADER_H
