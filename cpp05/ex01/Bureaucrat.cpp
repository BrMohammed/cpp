#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("boot") , _grade(150)
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name , int grade):_name(name), _grade(grade)
{
    std::cout << "constructor called" << std::endl;
    if(getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &  obj) : _name(obj._name)
{
    std::cout << "Copy constructor called" << std::endl;
    _grade = obj._grade;
    if(getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

std::string  Bureaucrat::getName() const
{
    return _name;
}

int  Bureaucrat::getGrade() const
{
    return _grade;
}

std::ostream& operator << (std::ostream & left , Bureaucrat const & right)
{
    std::cout << "Copy assignment operator called" << std::endl;
    left << right.getName() << " bureaucrat grade " << right.getGrade();
   return left;
}

Bureaucrat& Bureaucrat::operator = (Bureaucrat const & rhs)
{
    _grade =  rhs.getGrade();
    return *this;
}
void Bureaucrat::signForm(std::string form, bool is_sign)
{
    if(is_sign)
        std::cout <<  _name << " signed " << form << std::endl;
    else
        std::cout <<  _name << " couldn’t sign " << form << std::endl;
}

