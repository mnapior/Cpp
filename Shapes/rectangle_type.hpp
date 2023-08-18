#ifndef RECTANGLE_TYPE_HPP
#define RECTANGLE_TYPE_HPP

namespace shapes
{
    struct rectangleInputs
    {
        float length{0};
        float width{0};
        float height{0}; 
    }

    struct rectangleOutputs
    {
        float area{0};
    }
}

#endif