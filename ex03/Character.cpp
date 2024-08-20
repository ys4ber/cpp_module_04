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
    for(int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
    }
}

Character &Character::operator=(Character const &other)
{
    _name = other._name;
    for (int i = 0;i < 4; i++)
    {
        delete _inventory[i];
        _inventory[i] = NULL;
        if (other._inventory[i])
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
    if(!m)
        return;
    for(int i = 0; i < 4; i++)
    {
        if(!_inventory[i])
        {
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        _inventory[idx] = NULL;
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        _inventory[idx]->use(target);
    }
    else
    {
        std::cout << "Invalid index" << std::endl;
    }
}