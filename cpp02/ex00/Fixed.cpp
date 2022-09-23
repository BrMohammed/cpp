#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_number = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &number)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = number;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
     std::cout << "Copy assignment operator called" << std::endl;
     if (this != &rhs)
        this->_number = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{   
    std::cout << "getRawBits member function called" << std::endl;
    return this->_number;
}
void Fixed::setRawBits( int const raw )
{
    this->_number = raw;
}

