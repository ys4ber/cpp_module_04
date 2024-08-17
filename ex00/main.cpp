#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* Wrong = new WrongAnimal("wrong");
    const WrongAnimal* Cat = new wCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout <<"here===== ";
    i->makeSound(); //will output the cat sound!
    std::cout <<"here===== ";
    j->makeSound();
    meta->makeSound();
    std::cout << "Now the wrong animal+++++++++++++" << std::endl;
    std::cout << Wrong->getType() << " " << std::endl;
    std::cout << Cat->getType() << " " << std::endl;
    std::cout <<"here=====    ";
    Wrong->makeSound();
    delete meta;
    delete j;
    delete i; 
    delete Wrong;
    delete Cat;
    return 0;
}