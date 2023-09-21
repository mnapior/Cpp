#include "slotmachine.hpp"
#include <iostream>

SlotMachine::SlotMachine(const Money &total) : m_total{ total }
{}

std::ostream &operator<<(std::ostream &out, const SlotMachine &slotmachine)
{
    out << "Your total balance left is " << slotmachine.m_total << '\n';
    return out;
}