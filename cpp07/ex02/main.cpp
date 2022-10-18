#include "Array.hpp"

void main01()
{
    Array<int> const q(5);
    std::cout << q[0] << std::endl;
    std::cout << q[1] << std::endl;

    Array<int> c;
    c = q;
    std::cout << c[0] << std::endl;
}

int main()
{
    try
    {
        main01();
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    //system("leaks Array");
}