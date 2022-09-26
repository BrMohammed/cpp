#include "Dog.hpp"

Dog::Dog() 
{
    std::cout << "Dog : Default constructor called" << std::endl;
    type = "Dog";
    b = new Brain();
}
Dog::Dog(std::string name)
{
    std::cout << "Dog : constructor called" << std::endl;
    type = name;
    b = new Brain();
}
Dog::Dog(Dog const & Other)
{
    std::cout << "Dog : copy constructor called" << std::endl;
    *this = Other;
}
Dog::~Dog()
{
    std::cout << "Dog : Destructor called" << std::endl;
    delete b;
}
Dog &Dog::operator = (Dog const & rhs )
{
    std::cout << "Dog : copy assignment operator called" << std::endl;
    this->type = rhs.type;
    b = new Brain();
    *b = *rhs.b;
    return *this;
}
void Dog::makeSound() const
{
    std::cout << "Soud of Dog" << std::endl;
}
std::string Dog::getType() const
{
    return this->type;
}

// void Dog::hi() const
// {
//     std::cout << "hi" << std::endl;
// }