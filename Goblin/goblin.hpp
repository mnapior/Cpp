#ifndef GOBLIN_H
#define GOBLIN_H

#include "position2D.hpp"
#include <string>
#include <string_view>

class Goblin
{
    private:
        int m_health {10};
        std::string m_name {""};
        Position2D m_position {0,0};

    public:
        Goblin(std::string_view name, int health, const Position2D& position);

        void moveTo(int x, int y);

};

#endif