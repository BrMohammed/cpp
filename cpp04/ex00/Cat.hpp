#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
class Cat : public Animal
{
    private :
        Cat(std::string name);  
    public :
        Cat();
        Cat(Cat const & Other);
        ~Cat();
        Cat &operator = (Cat const & rhs );
        void makeSound() const;
        std::string getType() const;
};
#endif