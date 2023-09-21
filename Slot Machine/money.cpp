#include "money.hpp"

Money::Money(int dollars, int cents) : m_dollars{ dollars }, m_cents{ cents }
{}

std::ostream &operator<<(std::ostream &out, const Money &total)
    {
        out << "$" << total.m_dollars << "." << total.m_cents;
        return out;
    }