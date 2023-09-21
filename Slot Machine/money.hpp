#ifndef MONEY_H
#define MONEY_H

#include <iostream>

class Money
{
private:
    int m_dollars {0};
    int m_cents {00};
public:
    Money(int dollars, int cents);

    friend std::ostream &operator<<(std::ostream &out, const Money &total);

    //int centToDollar() const;

    //void dollarToCent(const USDMoney &total);
};

#endif 