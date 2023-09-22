#include "slotmachine.hpp"
#include <iostream>

SlotMachine::SlotMachine(const Money &total) : m_total{ total }
{}

std::ostream &operator<<(std::ostream &out, const SlotMachine &slotMachine)
{
    out << "Your total balance left is " << slotMachine.m_total << '\n';
    return out;
}

SlotMachine &operator +(SlotMachine &total, const SlotMachine &addDollar)
{
    //m_total and addDollar not adding due to compiler not knowing user defined types.
    //Use link below to figure out how to overload the + operator in order to add the two together.
    //https://www.go4expert.com/articles/cpp-extending-operators-user-defined-t34641/
    total = total.m_total + addDollar.m_total;
}

void SlotMachine::addDollars(int dollars)
{
    Money addDollar = {dollars,0};
    m_total = m_total + addDollar;
}