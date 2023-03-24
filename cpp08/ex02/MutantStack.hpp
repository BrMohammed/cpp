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

#include "vector.hpp"
#include <iostream> 
#include <stack>
using namespace std;
int main() {
    std::stack<int> stack;
    stack.push(21);// The values pushed in the stack should be of the same data which is written during declaration of stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
      stack.push(num);
    stack.pop();
    stack.pop();
      stack.pop();
    
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}

#endif