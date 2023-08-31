#include "health.hpp"
#include <iostream>


Health::Health(int health) : 
    m_health{ health }
{}

void Health::takeDamage(int damage)
{
    m_health = m_health - damage;
}

std::ostream &operator<<(std::ostream &out, const Health &health)
{
    out << health.m_health;
    return out;
}