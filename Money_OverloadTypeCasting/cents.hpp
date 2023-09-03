#ifndef CENTS_H
#define CENTS_H

class Cents
{
private:
    int m_cents {0};
public:
    Cents(int cents);

    // Overloaded int cast
    operator int() const { return m_cents; }

    int getCents() const;
    void setCents(int cents);
};

#endif