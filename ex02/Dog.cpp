#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(Dog const &other) : Animal()
{
    std::cout << "Dog copy constructor " << std::endl;
    *this = other;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog assignation operator" << std::endl;
    type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog distructor " << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
