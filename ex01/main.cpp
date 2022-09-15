#include <iostream>
#include <cstring>
#include <iomanip>

void creat_one_colom(std::string word)
{
    char horezon = '-';
    char vertical = '|';

    std::cout << " " << std::setfill (horezon) << std::setw (10) << horezon << '\n';
    std::cout << vertical << " hi" << std::setfill (' ') << std::setw (8);
    std::cout << vertical << '\n';
    std::cout << " " << std::setfill (horezon) << std::setw (10) << horezon << '\n';
}
int main()
{
    //Display : a list of 4 columns: index, first name, last name , nickname.
    

    creat_one_colom("hi");
 
    return (0);
}