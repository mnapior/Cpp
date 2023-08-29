#include <string>
#include <iostream>
#include "goblin.hpp"
#include "position2D.hpp"
#include "health.hpp"

int main()
{
    std::cout << "Enter a name for your creature: ";
    std::string name;
    std::cin >> name;
    Goblin goblin{ name, 10 , { 4, 7 } };

    std::cout << goblin << '\n';

    std::cout << "Enter new X location for creature (-1 to quit): ";
    int x{ 0 };
    std::cin >> x;
    if (x == -1)
        break;

    std::cout << "Enter new Y location for creature (-1 to quit): ";
    int y{ 0 };
    std::cin >> y;
    if (y == -1)
        break;

    creature.moveTo(x, y);
    std::cout << creature << '\n';

    return 0;
}