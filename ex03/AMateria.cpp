#include "AMateria.hpp"


AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    _Type = type;
}

AMateria::AMateria(AMateria const & other)
{
    *this = other;
}

AMateria & AMateria::operator=(AMateria const & other)
{
    _Type = other._Type;
    return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return _Type;
}

AMateria* AMateria::clone() const
{
    return nullptr;
}

void AMateria::use(ICharacter& target)
{

}

