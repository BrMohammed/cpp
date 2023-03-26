#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <list>
#include <stack>

class RPN
{
    private:
        std::string input;
        std::list<int> numbers;
    public:
        RPN();
        RPN(std::string const & str);
        RPN(RPN const & other);
        ~RPN(); 
        RPN & operator = (RPN const & rhs);
        void pos_fix();
};

#endif