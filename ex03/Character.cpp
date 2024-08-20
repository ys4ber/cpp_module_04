#include "Character.hpp"

Character::Character(std::string const &name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const &other) : ICharacter(other)
{
    _name = other._name;
    for (int i = 0;i < 4; i++)
    {
        _inventory[i] = other._inventory[i]->clone();
    }
}

Character &Character::operator=(Character const &other)
{
    _name = other._name;
    for (int i = 0;i < 4; i++)
    {
        delete _inventory[i];
        _inventory[i] = other._inventory[i]->clone();
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0;i < 4; i++)
    {
        delete _inventory[i];
    }
}

std::string const &Character::getName() const
{
    return _name;
}



void Character::equip(AMateria *m)
{
(void)m;
}

void Character::unequip(int idx)
{
    (void)idx;
}

void Character::use(int idx, ICharacter& target)
{
    (void )idx;
    (void)target;
}