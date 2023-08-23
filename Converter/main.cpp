#include "unit_converter.hpp"
#include <iostream>

int main()
{
    UnitConverter temperature;

    temperature.setTemperature(92.0);
    temperature.printTemperature();
    std::cout << "The current temperature in Farenheit is: " << temperature.celsiusToFarenheit() << '\n';
    std::cout << "The current temperature in Celcius is: " << temperature.farenheitToCelsius() << '\n';


    std::cout << temperature.readTemperature();
}