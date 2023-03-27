#include "RPN.hpp"

int main(int argc, char** argv)
{
    if(argc  == 2)
    {
        RPN r(argv[1]);
        r.pos_fix();
    }
    else
        std::cerr << "ERROR" << std::endl;
    return 0;
       
}