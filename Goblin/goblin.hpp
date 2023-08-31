#ifndef GOBLIN_H
#define GOBLIN_H

#include "position2D.hpp"
#include "health.hpp"
#include <string>
#include <string_view>

class Goblin
{
    private:
        std::string m_name {""};
        Health m_health {10};
        Position2D m_position {0,0};

    public:
        Goblin(std::string_view name, const Health& health, const Position2D& position);

        void moveTo(int x, int y);

        void loseHealth(int damage);

        friend std::ostream &operator<<(std::ostream &out, const Goblin &goblin);

};

#endif