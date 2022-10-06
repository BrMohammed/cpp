#ifndef SForm_HPP
#define SForm_HPP
#include <iostream>
#include "Form.hpp"
class ShrubberyCreationForm : public Form
{
    private :
        ShrubberyCreationForm(std::string target);
    public :
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &  obj);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator = (ShrubberyCreationForm const & rhs); 
    void execute(Bureaucrat const & executor);
};

#endif