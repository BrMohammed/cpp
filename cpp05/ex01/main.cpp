#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Form t("h", 5,1);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

}