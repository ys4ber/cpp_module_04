#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const &other);
        Dog &operator=(Dog const &other);
        ~Dog();
        void makeSound() const;
};