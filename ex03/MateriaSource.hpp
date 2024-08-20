#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _Templates[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &other);
        MateriaSource &operator=(MateriaSource const &other);
        ~MateriaSource();

       void learnMateria(AMateria* m);
       AMateria* createMateria(std::string const & type);
};
