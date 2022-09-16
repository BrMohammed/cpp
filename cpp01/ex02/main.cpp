#include <iostream>
#include <cstring>

int main()
{
    std::string a = "HI THIS IS BRAIN";
    std::string *aPTR = &a;
    std::string &aREF = a;

    std::cout << "&a = " << &a << "\n &aPTR = " << 
            &aPTR << "\n &AREF = " << &aREF << std::endl;

    std::cout << "a = " << a << "\n aPTR = " << 
            aPTR << "\n AREF = " << aREF << std::endl; 
}