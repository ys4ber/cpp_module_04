#pragma once

#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &other);
        Brain &operator=(Brain const &other);
        ~Brain();
};
