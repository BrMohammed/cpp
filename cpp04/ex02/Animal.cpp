#include "Animal.hpp"

Animal::Animal() : type("RAW")
{
    std::cout << "Animal : Default constructor called" << std::endl;
}
Animal::Animal(std::string name) : type(name)
{
    std::cout << "Animal : constructor called" << std::endl;

}
Animal::Animal(Animal const & Other)
{
    std::cout << "Animal : copy constructor called" << std::endl;
    *this = Other;
}
Animal::~Animal()
{
    std::cout << "Animal : Destructor called" << std::endl;
}
Animal &Animal::operator = (Animal const & rhs )
{
    std::cout << "Animal : copy assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}
std::string Animal::getType() const
{
    return this->type;
}