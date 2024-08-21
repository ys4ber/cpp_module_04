#pragma once

#include <iostream>
#include <string>

typedef struct s_all
{
    void *data;
    struct s_all *next;
} t_all;

extern t_all *list;

t_all *add(void *data);

class ICharacter;

class AMateria
{
    protected:
        std::string _Type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & other);
        AMateria & operator=(AMateria const & other);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};