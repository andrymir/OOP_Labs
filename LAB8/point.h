#ifndef POINT_H
#define POINT_H
#include <iostream>
template<typename T2>
class Point
{
public:
    Point(T2 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }
    T2 x = 0;
    T2 y = 0;
    Point() = default;
    Point operator +=(Point<T2> & other)
    {
        Point<T2> temp(0, 0);
         this->x += other.x;
         this->y += other.y;



    }
    Point operator -(Point<T2> & other)
    {
        Point<T2> temp(0, 0);
        temp.x = this->x - other.x;
        temp.y = this->y - other.y;
        return temp;
    }
    Point operator /(const int n)
    {
        Point temp;
        temp.x = this->x / n;
        temp.y = this->y / n;
        return temp;
    }





};

#endif // POINT_H
