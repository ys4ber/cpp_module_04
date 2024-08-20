#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        _Templates[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const &other) : IMateriaSource(other)
{
    for(int i = 0; i < 4; i++)
    {
        if (other._Templates[i])
            _Templates[i] = other._Templates[i]->clone();
        else
            _Templates[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if(this != &other)
    {
        for(int i = 0; i < 4; i++)
        {
            delete _Templates[i];
            if (other._Templates[i])
                _Templates[i] = other._Templates[i]->clone();
            else
                _Templates[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete _Templates[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (!m)
        return;
    for (int i = 0; i < 4 ;i++)
    {
        if(!_Templates[i]) 
        {
            _Templates[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4 ; i++)
    {
        if(_Templates[i] && _Templates[i]->getType() == type)
        {
            return (_Templates[i]->clone());
        }
    }
    return NULL;
}