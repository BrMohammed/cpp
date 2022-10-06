#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
    try
    {
       Bureaucrat B("eli",15);
       //PresidentialPardonForm Pf;
            ShrubberyCreationForm Pf;

     // RobotomyRequestForm Pf;
       Pf.execute(B);
       //B.executeForm(Pf);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}