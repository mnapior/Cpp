#include <iostream>
#include "shapes_type.hpp"
#include "shapes_func.hpp"

int main()
{
    
    std::cout << "Please input the length: ";
    std::cin >> shapes::length ;
    std::cout << "\n";
    std::cout << "Please input the width: ";
    std::cin >> shapes::width;
    std::cout << "\n";

    std::cout << "The total area of the rectangle is: " << shapes::rectangleArea(shapes::length, shapes::width);
     
     return 0;
}