#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal &operator=(WrongAnimal const &other);
        ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;
};