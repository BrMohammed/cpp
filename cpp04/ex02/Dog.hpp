#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private :
        Dog(std::string name);
        Brain* b;
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