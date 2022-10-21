#ifndef M_HPP
#define M_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        typedef typename MutantStack::container_type::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end() 
        { 
            return this->c.end(); 
        }
};

#endif