#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main01()
{
   
    try
    { 
        Form* rrf; 
        Intern someRandomIntern;
        Bureaucrat B("eli",15);
        rrf = someRandomIntern.makeForm("Robotomy R0equest", "Bender");
        rrf->execute(B);
        delete rrf;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return(0); 
}

int main()
{
    main01();
    system("leaks CoffeeTime");
}