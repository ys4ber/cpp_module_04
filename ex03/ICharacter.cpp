#include "ICharacter.hpp"

ICharacter::ICharacter()
{
}

ICharacter::ICharacter(ICharacter const & other)
{
    *this = other;
}

ICharacter & ICharacter::operator=(ICharacter const & other)
{
    (void)other;
    return *this;
}

ICharacter::~ICharacter()
{
}

void ICharacter::equip(AMateria* m)
{
    (void)m;
}

void ICharacter::unequip(int idx)
{
    (void)idx;
}

void ICharacter::use(int idx, ICharacter& target)
{
    (void)idx;
    (void)target;
}
