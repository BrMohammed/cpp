#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <array>

template <typename T>
void easyfind(const T &c, int number)
{
    if ( std::find(c.begin(), c.end(), number) != c.end() )
        std::cout << "finde the occurrence :)" << std::endl;
    else
         std::cout << "* occurrence not found *" << std::endl;
}

#endif