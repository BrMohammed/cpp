#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("RAW")
{
    std::cout << "WrongAnimal : Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string name) : type(name)
{
    std::cout << "WrongAnimal : constructor called" << std::endl;

}
WrongAnimal::WrongAnimal(WrongAnimal const & Other)
{
    std::cout << "WrongAnimal : copy constructor called" << std::endl;
    *this = Other;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : Destructor called" << std::endl;
}
WrongAnimal &WrongAnimal::operator = (WrongAnimal const & rhs )
{
    std::cout << "WrongAnimal : copy assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << " * WrongAnimal RAW Sound *" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return this->type;
}