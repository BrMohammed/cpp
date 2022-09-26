#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    private :
        WrongCat(std::string name);  
    public :
        WrongCat();
        WrongCat(WrongCat const & Other);
        ~WrongCat();
        WrongCat &operator = (WrongCat const & rhs );
        void makeSound() const;
        std::string getType() const;
};
#endif