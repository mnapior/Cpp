#include "position2D.hpp"


Position2D::Position2D(int x, int y) : 
    m_x{ x }, m_y{ y }
{}

// Access functions
void Position2D::setPosition(int x, int y)
{
    m_x = x;
    m_y = y;
}
