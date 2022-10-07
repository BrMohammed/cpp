#include "Convert.hpp"

int main(int argc, char** argv)
{
    if(argc == 2)
    {
        char c;
        int i;
        float f;
        double d;
        bool is_error = false;
        try
        {
            i = std::stoi(argv[1]);
           
        }
       catch(std::exception & e)
       {
            is_error = true;
            std::cout << "char: " << "impossible "<< std::endl;
            std::cout << "int: " << "impossible "<< std::endl;
       }
       if(is_error == false)
       {
            c = i;
            if(i <= 32 || i >= 127)
                std::cout << "char: " << "Non displayable"<< std::endl;
            else
                std::cout << "char: " << "'" << c << "'"<< std::endl;
            std::cout << "char: " << i << std::endl;
       }
        is_error = false;
       try
       {
            f = std::stof(argv[1]);
       }
       catch (std::exception & e)
       {
            is_error = true;
            std::cout << "float: " << "impossible "<< std::endl;
            std::cout << "double: " << "impossible "<< std::endl;
       }
        std::cout << std::setprecision(1) << std::fixed;
        if(is_error == false)
        {
            d = std::stod(argv[1]);
            std::cout << "float: " << f << "f"<< std::endl;
            std::cout << "double: " << d <<std::endl;
        }
    }
}