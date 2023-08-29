#include "health.hpp"


Health::Health(int health) : 
    m_health{ health }
{}

// Access functions
void Health::setHealth(int health)
{
    m_health = health;
}

void Health::takeDamage(int damage)
{
    m_health = m_health - damage;
}