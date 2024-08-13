#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(Cat const &other) : Animal()
{
    std::cout << "Cat copy constructor " << std::endl;
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat assignation operator" << std::endl;
    type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat distructor " << std::endl;
    delete brain;
}


void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

