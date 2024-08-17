#include "WrongCat.hpp"

wCat::wCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

wCat::wCat(wCat const &other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

wCat &wCat::operator=(wCat const &other)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    type = other.type;
    return *this;
}

wCat::~wCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void wCat::makeSound() const
{
    std::cout << "WrongCat making a song" << std::endl;
}