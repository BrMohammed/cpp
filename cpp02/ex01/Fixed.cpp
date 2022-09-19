#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_number = 0;
}

Fixed::Fixed(Fixed const &number)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = number;
}

Fixed::Fixed (int const number)
{
    _number = IntToFixed(number);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed (float const number)
{
    _number = roundf(FloatToFixed(number));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    this->_number = 0;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
     std::cout << "Copy assignment operator called" << std::endl;
     if (this != &rhs)
        this->_number = rhs._number;
     return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o <<  rhs.toFloat();
   return o;
}
float  Fixed::toFloat( void ) const
{
    return FixedToFloat(_number);
}
int  Fixed::toInt( void ) const
{
    return FixedToInt(_number);
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

