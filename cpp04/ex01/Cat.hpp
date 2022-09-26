#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private :
        Brain* b;
    public :
        Cat(); 
        Cat(std::string name);
        Cat(Cat const & Other);
        ~Cat();
        Cat &operator = (Cat const & rhs );
        void makeSound() const;
        std::string getType() const;
        std::string get_b() const;
        void set_b(std::string first);
};
#endif