#include "cents.hpp"

Cents::Cents(int cents) : m_cents{ cents }
    {}

int Cents::getCents() const { return m_cents; }

void Cents::setCents(int cents) { m_cents = cents; }


