#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>


class Span
{
    std::vector<int> _n;
    unsigned int _size;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & other);
        ~Span();
        Span& operator = (Span const & other);
        void addNumber(int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        template <typename T>
        void addNumber(const T & c)
        {
            typedef typename T::const_iterator c_iter;
            for(c_iter i = c.begin(); i < c.end(); i++)
            {
                std::vector<int>::iterator iter;
                for(iter = _n.begin(); iter < _n.end(); iter++)
                {
                    if(*iter == *i)
                        throw  "* Number allredy here *";
                }
                _n.push_back(*i);
                if((int)_n.size() >= (int)_size)
                    throw  "* out of range *";
            }
        }
};

#endif