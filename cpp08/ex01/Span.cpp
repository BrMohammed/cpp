#include "Span.hpp"

Span::Span(unsigned int n)
{
    _n.push_back(n);
}

void Span::addNumber(unsigned int n)
{
    std::vector<int>::iterator iter;
    for(iter = _n.begin(); iter < _n.end(); iter++)
    {
        if(*iter == (int)n)
            throw  " * Number allredy here *";
    }
    _n.push_back(n);
}

unsigned int Span::shortestSpan()
{
    int _short = 2147483627;
    int temp = 0;
    std::vector<int>::iterator iter;
    iter = _n.begin();
    while(iter < _n.end())
    {
        std::vector<int>::iterator i;
        for(i = iter; i < _n.end(); i++)
        { 
            if(abs(*i - *iter) < temp && abs(*i - *iter) != 0 && abs(*i - *iter) < _short)
                _short = abs(*i - *iter);
            temp = abs(*i - *iter);
        }
        iter++;
    }
    return((unsigned int)_short);
}

unsigned int Span::longestSpan()
{   
    int _long = 0;
    int temp = 0;
    std::vector<int>::iterator iter;
    iter = _n.begin();
    while(iter < _n.end())
    {
        std::vector<int>::iterator i;
        for(i = iter; i < _n.end(); i++)
        {
            
            if(abs(*i - *iter) > temp && abs(*i - *iter) > _long)
                _long = abs(*i - *iter);

            temp = abs(*i - *iter);
        }
        iter++;
    }
    return((unsigned int)_long);
}