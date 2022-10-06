#ifndef PForm_HPP
#define PForm_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private :
        PresidentialPardonForm(std::string target);
    public :
    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &  obj);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator = (PresidentialPardonForm const & rhs); 
    void execute(Bureaucrat const & executor);
};
#endif