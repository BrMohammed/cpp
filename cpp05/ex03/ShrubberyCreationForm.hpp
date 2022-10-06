#ifndef SForm_HPP
#define SForm_HPP
#include <iostream>
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
    public : 
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &  obj);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator = (ShrubberyCreationForm const & rhs); 
    void execute(Bureaucrat const & executor);
};

#endif