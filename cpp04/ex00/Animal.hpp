#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        Animal(std::string name);
        Animal(Animal const & Other);
        ~Animal();
        Animal &operator = (Animal const & rhs );
        virtual void makeSound();
        std::string getType() const;
}

#endif