#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>


class Span
{
    std::vector<int> _n;
    public:
        Span(unsigned int n);
        void addNumber(unsigned int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};

#endif