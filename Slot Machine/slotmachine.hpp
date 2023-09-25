#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include "money.hpp"
#include <iostream>

class SlotMachine
{
private:
    Money m_total {0,0};

public:
    SlotMachine(const Money &total);

    friend std::ostream& operator<<(std::ostream &out, const SlotMachine &slotMachine);
    
    void addDollars(int dollars);
};

#endif 