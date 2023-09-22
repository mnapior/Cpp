#include "money.hpp"
#include "slotmachine.hpp"


int main()
{
    std::cout << "Enter the total amound of dollar you would like to add: ";
    int totalDollars;
    std::cin >> totalDollars;
    SlotMachine slotMachine{{totalDollars,0}};

    std::cout << slotMachine << '\n';

    std::cout << "Please type below how many dollars you would like to add: " << '\n';
    int dollars;
    std::cin >> dollars;
    slotMachine.addDollars(dollars);
    std::cout << slotMachine << '\n';
}