#pragma once

#include "WrongAnimal.hpp"

class wCat : public WrongAnimal
{
    public:
        wCat();
        wCat(wCat const &other);
        wCat &operator=(wCat const &other);
        ~wCat();
        void makeSound() const;
};