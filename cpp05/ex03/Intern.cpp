#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
Intern::Intern()
{
    std::cout << "Default constructor called" << std::endl;
}

Intern:: Intern(std::string target)
{
    (void)target;
    std::cout << "constructor called" << std::endl;
}

Intern::Intern(Intern const & obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Intern::~Intern()
{
    std::cout << "Destructor called" << std::endl;
}

Intern& Intern::operator = (Intern const & rhs)
{
    (void)rhs;
    return *this;
}

Form *Intern::makeForm(std::string FormName, std::string target)
{
    Form *i;
    std::string Forms[] = {"Shrubbery Creation","Robotomy Request","Presidential Pardon"};
    int type = -1;
    for(int i = 0 ; i < 3 ; i++)
    {
        if(Forms[i] == FormName)
        {
            type = i;
            break;
        }
    }
    switch(type)
    {
        case 0:
                i = new ShrubberyCreationForm(target);
               std::cout << " Intern creates " << Forms[type] << std::endl;
            return i ;
        case 1:
                i = new RobotomyRequestForm(target);
                std::cout << " Intern creates " << Forms[type] << std::endl;
            return i ;
        case 2:
                i = new PresidentialPardonForm(target);
                std::cout << " Intern creates " << Forms[type] << std::endl;
            return i ;
        default:
            std::cout << " * This Forn Not Found * " << std::endl;
    }
    return(0);
}