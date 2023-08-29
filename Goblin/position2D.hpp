#ifndef POSITION2D_H
#define POSITION2D_H

#include <iostream>

class Position2D
{
    private:
        int m_x {0};
        int m_y {0};

    public:
        Position2D(int x, int y);

        void setPosition(int x, int y);
};

#endif