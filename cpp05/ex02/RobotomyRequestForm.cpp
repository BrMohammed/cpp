#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("* Robotomy Request Form *",72,45)
{
    std::cout << "Default constructor called" << std::endl;
}

RobotomyRequestForm:: RobotomyRequestForm(std::string target)
{
    (void)target;
    std::cout << "constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (RobotomyRequestForm const & rhs)
{
    (void)rhs;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    static int t;
    Form::beSigned(executor);
    if(Form::get_grade_to_execute() >=  executor.getGrade())
    {
       std::cout << "pam pam pam..."<< std::endl;
       usleep(1000000);
       std::cout << "pam pam pam" << std::endl;
       usleep(1000000);
       if(t % 2 == 0)
        {
            std::cout << executor.getName() << " * You Win *" << std::endl;
            t++;
        }
        else 
            std::cout <<  " Ooooh  you faild :( \n";
    }
    else
        throw Form::GradeTooLowException();
}