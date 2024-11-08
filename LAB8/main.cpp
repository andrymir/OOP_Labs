#include <iostream>
#include <vector>
#include <string>
 #include <numeric>
#include "point.h"
#include <typeinfo>

template <typename T1>
T1 arithmetic_mean(std::vector <T1> vec)
{
   // T1 temp_pointer = vec[0];
    T1 summary;
        for(auto &e: vec)
        {
            summary += e;
        }
        return (summary) / static_cast<int>(vec.size());

}


int main()
{
    std::vector<double> vec= {1, 2};
    std::cout<<"Arithemtic mean of a vector a: ";
    std::cout << arithmetic_mean<double>(vec) << std::endl;
    // для вектора точек:

    std::vector<Point<double>>  c = {Point<double>(1, 2), Point<double>(3, 4), Point<double>(3, 6)};

    Point<double> d = arithmetic_mean<Point<double>>(c);
    std::cout<<"Arithemtic mean of a vector x: " << d.x << std::endl;
    std::cout<<"Arithemtic mean of a vector y: " << d.y << std::endl;
    return 0;
}
