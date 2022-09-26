#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    protected :
        std::string type;
    private :
        Animal(std::string name); 
    public : 
        Animal();
        Animal(Animal const & Other);
        virtual ~Animal();
        Animal &operator = (Animal const & rhs );
        virtual void makeSound() const = 0;
        std::string getType() const;
};
#endif