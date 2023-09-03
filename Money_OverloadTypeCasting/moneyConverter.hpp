#ifndef DOLLAR_H
#define DOLLAR_H

#include "cents.hpp"
#include "dollars.hpp"

class MoneyConverter
{
private:
    int m_cents {0};
    int m_dollars {0};
    
public:
    MoneyConverter(const Cents& cents, const Dollars& dollars) : m_dollars{ dollars }, m_cents{ cents }
    {}

    // Allow us to convert Dollars into Cents
    operator Dollars() const { return Dollars { m_cents / 100 }; }

    // Allow us to convert Dollars into Cents
    operator Cents() const { return Cents { m_dollars * 100 }; }
};

#endif 