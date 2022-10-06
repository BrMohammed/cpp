#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm() : Form("* Shrubbery Creation Form *",145,137)
{
    std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm:: PresidentialPardonForm(std::string target)
{
    (void)target;
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
        std::ofstream output(executor.getName() + " _shrubbery");
        std::string line = "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n";
        if(output.is_open())
            output << line;
        output.close();
    }
    else
        throw Form::GradeTooLowException();
}