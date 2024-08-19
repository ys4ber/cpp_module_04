#pragma once

#include <iostream>
#include <string>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &other);
        Brain &operator=(Brain const &other);
        ~Brain();

        void setIdea(std::string idea, int index);
        std::string getIdea(int index) const;
};