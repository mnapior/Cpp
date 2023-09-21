#include "money.hpp"
#include "slotmachine.hpp"

int main()
{
    std::cout << "Enter the total amound of dollar you would like to add: ";
    int totalDollars;
    std::cin >> totalDollars;
    SlotMachine slotMachine{{totalDollars,00}};

    std::cout << slotMachine << '\n';
}