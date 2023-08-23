#include <iostream>

class UnitConverter
{
    private:
        double m_temperature;

    public:
        double farenheitToCelsius()
        {
            m_temperature = (m_temperature - 32.0) * (5.0/9.0);
            return m_temperature;
        }

        const double& celsiusToFarenheit()
        {
            m_temperature = ((m_temperature * (9.0/5.0))  + 32.0);
            return m_temperature;
        }

        void setTemperature(double temperature)
        {
            m_temperature = temperature;
        }

        void printTemperature()
        {
            std::cout << " The current temperature is: " << m_temperature << '\n';
        }

        const double& readTemperature()
        {
            return m_temperature;
        }
};