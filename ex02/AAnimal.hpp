#pragma once

#include "Animal.hpp"


class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(AAnimal const &other);
        AAnimal &operator=(AAnimal const &other);
        virtual ~AAnimal();

        virtual void makeSound() const ;
        std::string getType() const;
};