#include "Ice.hpp"

Ice::Ice()
{
    _Type = "ice";
}

Ice::Ice(Ice const & other)
{
    *this = other;
}

Ice & Ice::operator=(Ice const & other)
{
    _Type = other._Type;
    return *this;
}

Ice::~Ice()
{
}



