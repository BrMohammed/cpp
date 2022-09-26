#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : Default constructor called" << std::endl;
}
Brain::Brain(std::string name)
{
    std::cout << "Brain : constructor called" << std::endl;
    (void)name;
}
Brain::Brain(Brain const & Other)
{
    std::cout << "Brain : copy constructor called" << std::endl;
    *this = Other;
}
Brain::~Brain()
{
    std::cout << "Brain : Destructor called" << std::endl;
}
Brain &Brain::operator = (Brain const & rhs )
{
    (void) rhs;
    std::cout << "Brain : copy assignment operator called" << std::endl;
    return *this;
}
