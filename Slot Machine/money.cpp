#include "money.hpp"

Money::Money(int dollars, int cents) : m_dollars{ dollars }, m_cents{ cents }
{}

Money::Money(int dollars) : m_dollars {dollars}
{}

std::ostream &operator<<(std::ostream &out, const Money &total)
{
    out << "$" << total.m_dollars << "." << total.m_cents;
    return out;
}

Money operator +(const Money dollar, const Money addDollar)
{
    std::cout << "You are adding " << dollar << " to " << addDollar << '\n';
    return {dollar.m_dollars + addDollar.m_dollars, dollar.m_cents + addDollar.m_cents};
}