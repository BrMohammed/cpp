#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T > void print( T const & x )
{ 
    std::cout << x << std::endl; 
    return; 
} 

template <typename T >
void iter(T *arr,int Size,void (*print)(T const &))
{
   for (int i = 0; i < Size; i++)
    {
        print(arr[i]);
    }
}
#endif