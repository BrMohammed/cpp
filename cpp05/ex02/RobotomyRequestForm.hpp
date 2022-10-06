#ifndef RForm_HPP
#define RForm_HPP
#include <iostream>
#include <unistd.h>
#include "Form.hpp"
class RobotomyRequestForm : public Form
{
   private :
        RobotomyRequestForm(std::string target);
    public :
    RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &  obj);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator = (RobotomyRequestForm const & rhs); 
    void execute(Bureaucrat const & executor);
};
#endif