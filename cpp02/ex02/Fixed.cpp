#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_number = 0;
}

Fixed::Fixed(Fixed const &number)
{
    *this = number;
}

Fixed::Fixed (int const number)
{
    _number = IntToFixed(number);
}

Fixed::Fixed (float const number)
{
    _number = roundf(FloatToFixed(number));
}

Fixed::~Fixed()
{
    this->_number = 0;
}


Fixed & Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        this->_number = rhs.getRawBits();
    return *this;
}
bool Fixed::operator > (Fixed const & rhs)
{
    return ((*this)._number > rhs._number);
}
bool Fixed::operator < (Fixed const & rhs)
{
    return ((*this)._number < rhs._number);
}
bool Fixed::operator >= (Fixed const & rhs)
{
    return ((*this)._number >= rhs._number);
}
bool Fixed::operator <= (Fixed const & rhs)
{
    return ((*this)._number <= rhs._number);
}
bool Fixed::operator == (Fixed const & rhs)
{
    return ((*this)._number == rhs._number);
}
bool Fixed::operator != (Fixed const & rhs)
{
    return !((*this)._number == rhs._number);
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
    return this->_number;
}
void Fixed::setRawBits( int const raw )
{
    this->_number = raw;
}

const Fixed& Fixed::min(Fixed const  & lhs,Fixed const & rhs)
{
     if(lhs._number < rhs._number)
        return lhs;
    else
         return rhs;
}

Fixed& Fixed::min(Fixed & lhs,Fixed & rhs)
{
     if(lhs._number < rhs._number)
        return lhs;
    else
         return rhs;
}

const Fixed& Fixed::max(Fixed const & lhs,Fixed const & rhs)
{
   
    if(lhs._number > rhs._number)
        return lhs;
    else
         return rhs;
}

Fixed& Fixed::max(Fixed & lhs,Fixed & rhs)
{
     std::cout << "------" << std::endl;
    if(lhs._number > rhs._number)
        return lhs;
    else
         return rhs;
}

Fixed Fixed::operator++()
{
    ++(*this)._number;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp._number = (*this)._number;
    (*this)._number++;
    return tmp;
}

Fixed Fixed::operator--()
{
    --(*this)._number;
    return *this;
}

Fixed Fixed::operator--(int)
{
    (*this)._number--;
    return *this;
}


Fixed Fixed::operator * (Fixed const & rhs)
{
    Fixed tmp;

    tmp._number = ((double)((*this)._number) * (rhs._number)) / (1<<_fractional);
    return tmp;
}


Fixed Fixed::operator / (Fixed const & rhs)
{
    Fixed tmp;

    tmp._number = ((double)(*this)._number / rhs._number) * (1<<_fractional);
    return tmp;
}

Fixed Fixed::operator + (Fixed const & rhs)
{
    Fixed tmp;

    tmp._number = ((double)(*this)._number + rhs._number);
    return tmp;
}

Fixed Fixed::operator - (Fixed const & rhs)
{
    Fixed tmp;

    tmp._number = ((double)(*this)._number - rhs._number);
    return tmp;
}


float bsp( Fixed a, Fixed  b, Fixed  c, Fixed const point)
{
    (void)point;
    Fixed s;
    s = (a + b + c) / 2;
    Fixed A = sqrtf(s.getRawBits()*(s.getRawBits()-a.getRawBits())*(s.getRawBits()-b.getRawBits())*(s.getRawBits()-c.getRawBits()));
    return(A.getRawBits());
}

float bsp1( float a, float  b, float  c, float  point)
{
    (void)point;
    float s;
    s = (a + b + c) / 2;
    float A = sqrtf(s*(s-a)*(s-b)*(s-c));
    return(A);
}