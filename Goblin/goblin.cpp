#include "goblin.hpp"


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