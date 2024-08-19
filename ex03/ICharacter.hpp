#pragma once

#include <iostream>
#include <string>

class AMateria;

class ICharacter
{

    public:
        ICharacter();
        ICharacter(ICharacter const & other);
        ICharacter & operator=(ICharacter const & other);
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};