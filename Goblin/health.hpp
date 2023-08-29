#ifndef HEALTH_H
#define HEALTH_H

#include <iostream>

class Health
{
    private:
        int m_health {0};

    public:
        Health(int health);

        void takeDamage(int damage);
};

#endif