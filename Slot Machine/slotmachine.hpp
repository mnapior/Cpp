#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include "usdmoney.hpp"
#include <iostream>

class SlotMachine
{
private:
    USDMoney m_total {0,0};
public:
    SlotMachine(const USDMoney &total);

    friend std::ostream& operator<<(std::ostream &out, const SlotMachine &slotmachine);

    //int printTotal() const;

    //void setTotal(const USDMoney &total);
};

#endif 