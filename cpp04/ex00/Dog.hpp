#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
class Dog : public Animal
{
    private :
        Dog(std::string name);
    public :
        Dog();
        Dog(Dog const & Other);
        ~Dog();
        Dog &operator = (Dog const & rhs );
        void makeSound() const;
        std::string getType() const;
       // void hi() const;
};
#endif