#include "Span.hpp"
#include <array>
int main()
{
    // std::array<int,5> ar = {0,1,2,3,4};
   try
   {
        Span sp = Span(0);//
       // sp.addNumber(ar);
       //sp.addNumber(0);
     //   sp.addNumber(1);
     //   sp.addNumber(2);
     //   sp.addNumber(3);
     //   sp.addNumber(4);
     //    sp.addNumber(17);
     //    sp.addNumber(9);
     //    sp.addNumber(66);
     //    sp.addNumber(87);
     //    sp.addNumber(65);
        //sp.addNumber(65);
       // sp.addNumber(62);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
   }
   catch(char const* e)
   {
        std::cerr << e << '\n';
   }
   
    return 0;
}