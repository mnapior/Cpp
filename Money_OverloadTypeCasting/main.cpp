#include "cents.hpp"
#include "dollars.hpp"
//#include "moneyConverter.hpp"
#include <iostream>


void printCents(Cents cents)
{
    std::cout << cents; // cents will be implicitly cast to an int here
}

int main()
{
    Dollars dollars{ 9 };
    Cents cents{ 30 };
    
    std::cout << "You have total of $" << dollars.getDollars() << "." << cents.getCents() << " in your account" << '\n';

    return 0;
}

//solution to issue not working? https://stackoverflow.com/questions/65393557/converting-dollars-to-cents-and-cents-to-dollars