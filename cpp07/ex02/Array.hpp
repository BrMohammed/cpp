#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
    private :
        unsigned int _n;
        T *array;
    public :
        
        Array() : array(NULL)
        {
            _n = 0;
        }
        Array(unsigned int n)
        {
            array = new T[n];
            _n = n;
            for(int i = 0; i < (int)_n ; i++)
                array[i] = 0;
            
        }
        Array (Array const & other)
        {
            array = NULL;
            *this = other;
        }
        ~Array()
        {
            delete [] array;
        }
        Array & operator = (Array const & other)
        {
            _n = other._n;
            delete [] array;
            array = new T[_n];
            *array = *other.array;
            for(int i = 0; i < (int)_n;i++)
                array[i] = other.array[i];
            return *this;
        }

        T & operator [] (int index) const
        {
            if(index >= (int)_n || index < 0)
            {
                throw std::out_of_range(" *index is out of bounds *");
            }
            return  array[index];
        }
        
        int size() const
        {
            return _n;
        }
};
#endif