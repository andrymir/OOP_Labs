#ifndef CARS_H
#define CARS_H
#include <QString>
enum Color {RED, GREEN,BLUE,BLACK};
class Cars
{
public:
    int n;
    QString model;
    Color color;
    int year;
    Cars();
    std::string to_string();

};

#endif // CARS_H
