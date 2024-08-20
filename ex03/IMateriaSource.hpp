#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        IMateriaSource();
        IMateriaSource(IMateriaSource const &other);
        IMateriaSource &operator=(IMateriaSource const &other);
        virtual ~IMateriaSource();

        virtual void learnMateria(AMateria* m) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};