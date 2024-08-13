#pragma once

#include <iostream>
#include <string>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &other);
        Animal &operator=(Animal const &other);
        virtual ~Animal();

        virtual void makeSound() const ;
        std::string getType() const;
};