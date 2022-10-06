#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("* Presidential Pardon Form *",25,5)
{
    std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm:: ShrubberyCreationForm(std::string target)
{
    (void)target;
    std::cout << "constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (ShrubberyCreationForm const & rhs)
{
    (void)rhs;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    Form::beSigned(executor);
    if(Form::get_grade_to_execute() >=  executor.getGrade())
    {
       std::cout <<  executor.getName() << " pardoned by Zaphod Beeblebrox.\n";
    }
    else
        throw Form::GradeTooLowException();
}