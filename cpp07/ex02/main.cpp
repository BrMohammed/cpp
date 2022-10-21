#include "Array.hpp"

void main01()
{
    Array<int> const q(5);
    std::cout << q[0] << std::endl;
    std::cout << q[1] << std::endl;

    for(int i = 0; i < 5; i++)
        std::cout << q[i] << std::endl;

    for (int i = 0 ; i < 5; i++)
    {
        q[i] = i;
    } 
    Array<int> c(q);
    //c = q;
    for (int i = 0; i < 5 ; i++)
        std::cout << c[i] << std::endl;
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