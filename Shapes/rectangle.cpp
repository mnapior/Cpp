#include <iostream>
#include "rectangle_type.hpp"
#include "rectangle.hpp"

int rectangle()
{
    
    std::cout << "Please input the length: ";
    std::cin >> shapes::length ;
    std::cout << "\n";
    std::cout << "Please input the width: ";
    std::cin >> shapes::width;
    std::cout << "\n";

    std::cout << "The total area of the rectangle is: " << rectangle::area << area(shapes::length, shapes::width);
     
     return 0;
}