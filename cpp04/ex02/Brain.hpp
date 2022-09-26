#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private :
        Brain(std::string name);
    public :
        std::string brain[100];
        Brain();
        Brain(Brain const & Other);
        ~Brain();
        Brain &operator = (Brain const & rhs );
};
#endif