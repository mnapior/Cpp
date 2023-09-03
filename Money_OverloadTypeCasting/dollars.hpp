#ifndef DOLLARS_H
#define DOLLARS_H

class Dollars
{
private:
    int m_dollars {0};
public:
    Dollars(int dollars);

    // Overloaded int cast
    operator int() const { return m_dollars; }


    int getDollars() const;

    void setDollars(int dollars);
};

#endif 