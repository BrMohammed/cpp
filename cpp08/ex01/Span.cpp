#include "Span.hpp"
Span::Span()
{
    _size = 0;
}

Span::Span(Span const & other)
{
    *this = other;
}

Span:: ~Span()
{

}
Span & Span::operator = (Span const & other)
{
    _size = other._size;
    _n = other._n;
    return *this;
}
Span::Span(unsigned int n) : _size(n)
{

}

void Span::addNumber(int n)
{
    std::vector<int>::iterator iter;
    for(iter = _n.begin(); iter < _n.end(); iter++)
    {
        if(*iter == (int)n)
            throw  "* Number allredy here *";
    }
    if((int)_n.size() >= (int)_size)
        throw  "* out of range *";
    _n.push_back(n);
}

unsigned int Span::shortestSpan()
{
    int _short = 2147483627;
    int temp = 2147483627;
    std::vector<int>::iterator iter;
    iter = _n.begin();
    if(_size == 1 || _size == 0)
        throw "* No span Found *";
    while(iter < _n.end())
    {
        std::vector<int>::iterator i;
        for(i = iter++; i < _n.end(); i++)
        { 
            if(iter == _n.end())
                break;
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
     if(_size == 1 || _size == 0)
        throw "* No span Found *";
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