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

        friend std::ostream &operator<<(std::ostream &out, const Health &health);
};

#endif