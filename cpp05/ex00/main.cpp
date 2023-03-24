#include "Bureaucrat.hpp"

int main()
{
    
 
    try
    {
        Bureaucrat t("d",150);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
  
  
}