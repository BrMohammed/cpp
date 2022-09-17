#include "change.hpp"

int main(int argc, char **argv)
{
    if(argc == 4)
    {
        std::string file(argv[1]);
        std::string s1(argv[2]);
        std::string s2(argv[3]);
        Change change(file,s1,s2);
    }
    else
     std::cout << "* Input ERROR *" << std::endl;
}