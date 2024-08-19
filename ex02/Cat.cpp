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
    brain = new Brain(*other.brain);
    type = other.type;
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat assignation operator" << std::endl;
    type = other.type;
    brain = other.brain;
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

void Cat::setBrain(Brain &setb)
{
    this->brain = &setb;
    for (int i = 0; i < 100 ; i++)
    {
        brain->setIdea("I am a Cat", i);
    }
}

Brain *Cat::getBrain() const
{
    return brain;
}