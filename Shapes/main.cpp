#include <iostream>
//#include "rectangle_type.hpp"
#include "rectangle.hpp"

int main()
{
    float length{0};
    float height{0};
    float width{0};

    std::cout << "Please input the length: ";
    std::cin >> length ;
    std::cout << "\n";
    std::cout << "Please input the height: ";
    std::cin >> height;
    std::cout << "\n";
    std::cout << "Please input the width: ";
    std::cin >> width;
    std::cout << "\n";

    float area {0};
    rectangle::RectangleFunc rectangle;
    area = rectangle.area(length, width);
    std::cout << "The total area of the rectangle is: " << area;
     
     return 0;
}