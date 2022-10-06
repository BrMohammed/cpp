#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("* Presidential Pardon Form *",145,137,"boot")
{
    std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm:: ShrubberyCreationForm(std::string Target): Form("* Presidential Pardon Form *",145,137,Target)
{
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
        std::ofstream output(get_target() + " _shrubbery");
        std::string line = "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\\n";
        if(output.is_open())
            output << line;
        output.close();
    }
    else
        throw Form::GradeTooLowException();
}