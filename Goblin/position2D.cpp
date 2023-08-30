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

std::ostream& operator<<(std::ostream& out, const Position2D& position)
{
    out << '(' << position.m_x << ", " << position.m_y << ')';
    return out;
}
