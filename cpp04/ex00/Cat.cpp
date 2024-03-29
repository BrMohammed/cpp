#include "Cat.hpp"

Cat::Cat() 
{
    std::cout << "Cat : Default constructor called" << std::endl;
    type = "Cat";
}
Cat::Cat(std::string name) 
{
    std::cout << "Cat : constructor called" << std::endl;
    type = name;
}
Cat::Cat(Cat const & Other)
{
    std::cout << "Cat : copy constructor called" << std::endl;
    *this = Other;
}
Cat::~Cat()
{
    std::cout << "Cat : Destructor called" << std::endl;
}
Cat &Cat::operator = (Cat const & rhs )
{
    std::cout << "Cat : copy assignment operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}
void Cat::makeSound() const
{
    std::cout << "Sound of Cat" << std::endl;
}
std::string Cat::getType() const
{
    return this->type;
}