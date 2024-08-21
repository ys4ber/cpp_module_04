#include "AMateria.hpp"

t_all *list;

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    _Type = type;
}

AMateria::AMateria(AMateria const & other)
{
    *this = other;
}

AMateria & AMateria::operator=(AMateria const & other)
{
    _Type = other._Type;
    return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return _Type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

t_all *add(void *data)
{
    t_all *new_node = new t_all;
    new_node->data = data;
    new_node->next = list;
    list = new_node;
    return list;
}

