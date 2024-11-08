#include "csvexception.h"

CSVException::CSVException(int line)
{
    this->line =line;
}


int CSVException::GetLine(){ return line;}
