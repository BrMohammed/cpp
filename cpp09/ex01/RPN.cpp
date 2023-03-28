#include "RPN.hpp"
RPN::RPN():input(""){}
RPN::RPN(std::string const & str)
{
    input = str;
}
RPN::RPN(RPN const & other)
{
    *this = other;
}
RPN::~RPN(){}
RPN & RPN::operator = (RPN const & rhs)
{
    input = rhs.input;
    return *this;
}

void RPN::pos_fix()
{
    if(input == "")
    {
        std::cerr << "ERROR" << std::endl;
        return;
    }
    for(size_t i = 0; i < input.length();i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
            numbers.push_front((int)(input[i] - '0'));
        else if((input[i] == '/' || input[i]  == '*' 
            || input[i]  == '-' || input[i]  == '+') )
        {
            if((numbers.size() < 2))
            {
                std::cerr << "ERROR" << std::endl;
                return;
            }
            int num1 = numbers.front();
            numbers.pop_front();
            int num2 = numbers.front();
            numbers.pop_front();
            switch(input[i])
            {
                case '+':
                    numbers.push_back(num2 + num1);
                    break;
                case '-':
                    numbers.push_back(num2 - num1);
                    break;
                case '*':
                    numbers.push_back(num2 * num1);
                    break;    
                case '/':
                    numbers.push_back(num2 / num1);
                    break;
            }
        }
        else if((input[i] != 32 && input[i] != 9))
        {
            std::cerr << "ERROR" << std::endl;
                    return;
        }
    }
    if(numbers.size() != 1)
    {
        std::cerr << "ERROR" << std::endl;
        return;
    }
    std::cout << numbers.front() << std::endl;
}
