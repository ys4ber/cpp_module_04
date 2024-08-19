#include "Brain.hpp"

Brain::Brain()
{ 
    std::cout << "Brain constructor" <<  std::endl;
}

Brain::Brain(Brain const &other)
{
    std::cout << " Brain copy constructor" << std::endl; 
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = other.ideas[i];
    }
}

Brain &Brain::operator=(Brain const &other)
{
    std::cout << "Brain assignation operator" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain distructor" << std::endl;
} 

void Brain::setIdea(std::string idea, int index)
{
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return ideas[index];
}