#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T >
void print(T array[],int size)
{
    int ix = 0;

    while (!array[ix].empty())
        ix++;
    ix--;
    for (int i = 0; i < size; i++)
    {
       if(i < ix)
            std::cout << array[i] << " ";
    } 
        std::cout << "\n";
}

template <typename T >
void iter(T *arr,int Size,void (*print)(T[], int))
{
    if(!arr[0].empty())
        print(arr, Size);
}
#endif