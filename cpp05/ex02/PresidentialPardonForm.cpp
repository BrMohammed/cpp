#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm() : Form("* Shrubbery Creation Form *",25,5,"boot")
{
    std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm:: PresidentialPardonForm(std::string target): Form("* Shrubbery Creation Form *",25,5,target)
{
    std::cout << "constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (PresidentialPardonForm const & rhs)
{
    (void)rhs;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    Form::beSigned(executor);
    if(Form::get_grade_to_execute() >=  executor.getGrade())
    {
       std::cout <<  executor.getName() << " pardoned by Zaphod Beeblebrox.\n";
    }
    else
        throw Form::GradeTooLowException();
}