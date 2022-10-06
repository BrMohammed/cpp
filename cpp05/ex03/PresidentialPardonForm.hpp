#ifndef PForm_HPP
#define PForm_HPP
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public :
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &  obj);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator = (PresidentialPardonForm const & rhs); 
    void execute(Bureaucrat const & executor);
};
#endif