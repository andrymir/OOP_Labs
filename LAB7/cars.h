#ifndef CARS_H
#define CARS_H
#include <QString>
#include <string>
#include <iostream>
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
    bool operator <(const Cars &other)
    {
        return this->n < other.n;
    }

    friend std::ostream& operator<<(std::ostream& os, const Cars &c)
    {
        os << (c.model).toStdString() << " " << c.color << " " << c.year << std::endl;
        return os;
    };

};

#endif // CARS_H
