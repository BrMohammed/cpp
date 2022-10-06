#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Intern 
{
    private :
        Intern(std::string target);
    public :
    Intern();
    Intern(Intern const &  obj);
    ~Intern();
    Intern& operator = (Intern const & rhs); 
    Form* makeForm(std::string FormName, std::string target);
};
#endif