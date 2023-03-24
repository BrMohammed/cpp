#include "Cast.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t t  = reinterpret_cast<uintptr_t>(ptr);
    return(t);
}

Data* deserialize(uintptr_t raw)
{
    Data* D = reinterpret_cast<Data*>(raw);
    return(D);
}
int main()
{
    Data D;
    D.i = 11;
    
    D.t = 'a';
    uintptr_t t = serialize(&D);
    // int * ss = reinterpret_cast<int*>(t);
    // std::cout << t << std::endl;
    // std::cout << &t << std::endl;
    // std::cout << *ss << std::endl;
    // std::cout << "  **  "<< std::endl;
    // ss++;
    // std::cout << *ss << std::endl;
    // char* ch = reinterpret_cast<char*>(ss);
    // *ch = 'b';
    // std::cout << ch << std::endl;

    // char* h = reinterpret_cast<char*>(ss);
    // std::cout << h << std::endl;

    
    // ch = (char*)"b";
    // std::cout << D.t << std::endl;
    // std::cout << ch << std::endl;
    // Data *D1 = deserialize(t);
    
    // std::cout << D1->i << std::endl;

    std::cout << "  **  "<< std::endl;
    int *tt = reinterpret_cast<int*>(t);
    std::cout << tt << std::endl;
    std::cout << *tt << std::endl;
    *tt = 12;
    std::cout << *tt << std::endl;
     std::cout << D.i << std::endl;


}