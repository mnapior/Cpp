#include "slotmachine.hpp"
#include <iostream>

SlotMachine::SlotMachine(const Money &total) : m_total{ total }
{}

std::ostream &operator<<(std::ostream &out, const SlotMachine &slotMachine)
{
    out << "Your total balance left is " << slotMachine.m_total << '\n';
    return out;
}

void SlotMachine::addDollars(int dollars)
{
    Money addDollar = {dollars,0};
    m_total = m_total + addDollar;
}