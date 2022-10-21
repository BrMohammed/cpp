#ifndef M_HPP
#define M_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        typedef typename MutantStack::container_type::const_iterator const_iterator;
        typedef typename MutantStack::container_type::iterator iterator;
        const_iterator begin() const
        {
            return this->c.begin();
        }
        const_iterator end() const
        { 
            return this->c.end(); 
        }
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