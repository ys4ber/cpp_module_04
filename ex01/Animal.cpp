#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor" << std::endl;
    type = "Human";
}

Animal::Animal(Animal const &other)
{
    std::cout << "Animal copy constructor " << std::endl;
    *this = other;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout << "Animal assignation operator" << std::endl;
    type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal distructor " << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Talking" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
