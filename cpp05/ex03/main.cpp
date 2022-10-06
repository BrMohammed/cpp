#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main01()
{
    Intern someRandomIntern;
    Bureaucrat B("eli",15);
    Form* rrf;
    rrf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
    rrf->execute(B);
    delete rrf;
    return(0);
}

int main()
{
    main01();
    system("leaks 28B");
}