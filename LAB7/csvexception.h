#ifndef CSVEXCEPTION_H
#define CSVEXCEPTION_H
#include <iostream>
#include "abstractreader.h"

using namespace std;


class CSVException : public exception
{
public:
    CSVException(int line);
    int GetLine();

private:
    int line;
};


#endif // CSVEXCEPTION_H
