#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private :
        int _number;
        static const int _fractional = 8;
    public :
        Fixed (void);
        Fixed (Fixed const &number);
        Fixed (int const number);
        Fixed (float const number);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        Fixed& operator = (Fixed const & rhs);
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#define FloatToFixed(x) (x*(float)(1<<_fractional))
#define FixedToFloat(x) ((float)x / (float)(1<<_fractional))
#define IntToFixed(x) (x << _fractional)
#define FixedToInt(x) (x >> _fractional)

#endif