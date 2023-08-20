#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
//#include "rectangle_type.hpp"
#include "rectangle_func.hpp"

namespace rectangle
{
    class RectangleFunc
    {
        public:
            float area(float length, float height)
            {
                return length * height;
            }

            float volume(float length, float height, float width)
            {
                return length * height * width;
            }

            float perimeter(float length, float height)
            {
                return ((length * 2) + (2 * height));
            }
    };
}

#endif