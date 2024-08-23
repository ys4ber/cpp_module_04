#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    // Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout <<"here===== ";
    i->makeSound();
    std::cout <<"here===== ";
    j->makeSound();
    // delete meta;
    delete j;
    delete i; 
    return 0;
}