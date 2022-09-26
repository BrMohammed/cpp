#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
    std::cout << "WrongCat : Default constructor called" << std::endl;
    type = "WrongCat";
}
WrongCat::WrongCat(std::string name) 
{
    std::cout << "WrongCat : constructor called" << std::endl;
    type = name;
}
WrongCat::WrongCat(WrongCat const & Other)
{
    std::cout << "WrongCat : copy constructor called" << std::endl;
    *this = Other;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructor called" << std::endl;
}
WrongCat &WrongCat::operator = (WrongCat const & rhs )
{
    std::cout << "WrongCat : copy assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}
void WrongCat::makeSound() const
{
    std::cout << "Sound of WrongCat" << std::endl;
}
std::string WrongCat::getType() const
{
    return this->type;
}