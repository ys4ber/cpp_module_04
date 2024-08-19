#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int na = 4;
    Animal *Animals[na];

    for (int i = 0; i < na / 2; i++)
    {
        Animals[i] = new Cat();
    }
    for (int i = na/2 ; i < na; i++)
    {
        Animals[i] = new Dog();
    }
    std::cout << "------------" << std::endl;
    for (int i = 0 ; i < na; i++)
    {
        delete Animals[i];
    }
}
