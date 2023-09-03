#ifndef USDMONEY_H
#define USDMONEY_H

#include <iostream>

class USDMoney
{
private:
    int m_dollars {0};
    int m_cents {0};
public:
    USDMoney(int dollars, int cents);

    friend std::ostream &operator<<(std::ostream &out, const USDMoney &total);

    //int centToDollar() const;

    //void dollarToCent(const USDMoney &total);
};

#endif 