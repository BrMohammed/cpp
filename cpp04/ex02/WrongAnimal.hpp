#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected :
        std::string type;
    private :
        WrongAnimal(std::string name);
    public :
        WrongAnimal();
        WrongAnimal(WrongAnimal const & Other);
        ~WrongAnimal();
        WrongAnimal &operator = (WrongAnimal const & rhs );
        void makeSound() const;
        std::string getType() const;
};
#endif