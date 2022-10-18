#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <array>

template <typename T>
void easyfind(const T &c, int number)
{
    typedef typename T::const_iterator Iter;
    for(Iter i = c.begin(); i != c.end(); i++)
    {
        if(*i == number)
        {
            std::cout << "finde the occurrence :)" << std::endl;
            break;
        }
        if(i + 1 == c.end() && *i != number)
            std::cout << " * occurrence not found * " << std::endl;
    }
}

#endif