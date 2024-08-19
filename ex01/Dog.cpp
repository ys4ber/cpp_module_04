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
    brain = new Brain(*other.brain);
    type = other.type;
}

Dog &Dog::operator=(Dog const &other)
{
    std::cout << "Dog assignation operator" << std::endl;
    type = other.type;
    brain = other.brain;
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

void Dog::setBrain(Brain &setb)
{
    this->brain = &setb;
    for (int i = 0; i < 100 ; i++)
    {
        brain->setIdea("I am a Dog", i);
    }
}

Brain *Dog::getBrain() const
{
    return brain;
}