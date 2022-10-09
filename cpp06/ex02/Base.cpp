#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"


Base * generate(void)
{
    int type;
    Base *i;

    srand(time(0));
    type = (rand() % 3) + 1;
    switch (type)
    {
    case 1:
        i = new A;
        return(i);
    case 2:
        i = new B;
        return(i);
    case 3:
        i = new C;
        return(i);
    default:
        break;
    }
    return(0);

}


void identify(Base* p)
{
    A * a = dynamic_cast< A *>(p);
    if(a != NULL)
        std::cout << "Type is : A" << std::endl;
    B * b = dynamic_cast< B *>(p);
     if(b != NULL)
        std::cout << "Type is : B " << std::endl;

    C * c = dynamic_cast< C *>(p);
     if(c != NULL)
        std::cout << "Type is : C"  << std::endl;
}

void identify(Base& p)
{
    try
    {
        A & a = dynamic_cast< A &>(p);
        (void)a;
        std::cout << "Type is : A" << std::endl;
    }
    catch(std::exception& e){}
    try
    {
        B & b = dynamic_cast< B&>(p);
         (void)b;
        std::cout << "Type is : B" << std::endl;
    }
    catch(std::exception& e){}
    try
    {
        C & c = dynamic_cast< C &>(p);
         (void)c;
        std::cout << "Type is : C" << std::endl;
    }
    catch(std::exception& e){}


}