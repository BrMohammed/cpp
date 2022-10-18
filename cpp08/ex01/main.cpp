#include "Span.hpp"

int main()
{
   try
   {
        Span sp = Span(100);
        sp.addNumber(1);
        sp.addNumber(11);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        //sp.addNumber(5);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
   }
   catch(char const* e)
   {
        std::cerr << e << '\n';
   }
   
    return 0;
}