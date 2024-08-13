#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *animals[4];
    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Cat();
        std::cout << "+++++++++++++++" << std::endl;
    }
    for (int i = 2; i < 4; i++)
    {
        animals[i] = new Dog();
        std::cout << "+++++++++++++++" << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
        std::cout << "+++++++++++++++" << std::endl;
    }
    return 0;
}

    