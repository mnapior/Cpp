#include "goblin.hpp"
#include "health.hpp"
#include "position2D.hpp"
#include <iostream>


Goblin::Goblin(std::string_view name, const Health& health, const Position2D& position) : 
    m_name{ name }, m_health{ health }, m_position{ position }
{}

void Goblin::moveTo(int x, int y)
{
    m_position.setPosition(x, y);
}

void Goblin::loseHealth(int damage)
{
    m_health.takeDamage(damage);
}

std::ostream &operator<<(std::ostream &out, const Goblin &goblin)
{
    out << goblin.m_name << " is at " << goblin.m_position << " with a current health of " << goblin.m_health << '\n';
    return out;
}
