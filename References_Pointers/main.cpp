#include <iostream>

void bananaAsker(int& bananas)
{
    std::cout << "How many bananas are in each box?" << '\n';
    std::cin >> bananas;
}

void bananaAnnouncer(int& bananas)
{
    std::cout << "The total amount of bananas in each box is: " << bananas << '\n';
}

int main()
{
    int total_bananas {0};

    bananaAsker(total_bananas);
    bananaAnnouncer(total_bananas);
}