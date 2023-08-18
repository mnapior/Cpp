#ifndef RECTANGLE_FUNC_HPP
#define RECTANGLE_FUNC_HPP

#include "rectangle_type.hpp"

namespace shapes
{
    class RectangleFunc
    {
        public:
            rectangleOutputs run(const rectangleInputs)
            
        private:
            float area(float length, float height)
            {
                return length * height;
            };
    };
    
}

#endif