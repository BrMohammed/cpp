#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("boot") ,  _grade_to_sign(0),_grade_to_execute(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Form:: Form(std::string name,int grade_to_sign,int grade_to_execute) :  _name(name), _grade_to_sign(grade_to_sign) ,
    _grade_to_execute(grade_to_execute)
{
    std::cout << "constructor called" << std::endl;
     if(_grade_to_execute < 1 || _grade_to_sign < 1 )
        throw Form::GradeTooHighException();
    else if(_grade_to_execute > 150 || _grade_to_sign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &  obj) : _name(obj.getName()), _grade_to_sign(obj.get_grade_to_sign()) ,
    _grade_to_execute(obj.get_grade_to_execute())
{
    std::cout << "Copy constructor called" << std::endl;
}
Form::~Form()
{
    std::cout << "Destructor called" << std::endl;
}

std::string  Form::getName() const
{
    return _name;
}

bool Form::get_is_signed() const
{
    return _is_signed;
}
int Form::get_grade_to_sign() const
{
    return _grade_to_sign;
}
int Form::get_grade_to_execute() const
{
    return _grade_to_execute;
}

std::ostream& operator << (std::ostream & left , Form const & right)
{
    std::cout << "Copy assignment operator called" << std::endl;
    left << right.getName() << " Form grade " << right.get_grade_to_sign();
   return left;
}

Form& Form::operator = (Form const & rhs)
{
   (void)rhs;
    return *this;
}


void Form::beSigned(Bureaucrat& too_Low)
{
    if(too_Low.getGrade() > _grade_to_sign )
    {
        throw Form::GradeTooLowException();
        _is_signed = false;
    }
    else
        _is_signed = true;
    too_Low.signForm(_name,_is_signed);
}

