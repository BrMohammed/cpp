#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Harl comp;
        comp.complain(argv[1]);
    }
    else
        std::cout << "*INPUT NOt VALID *" << std::endl;
}