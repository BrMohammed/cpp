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
        bool operator > (Fixed const & rhs);
        bool operator < (Fixed const & rhs);
        bool operator >= (Fixed const & rhs);
        bool operator <= (Fixed const & rhs);
        bool operator == (Fixed const & rhs);
        bool operator != (Fixed const & rhs);

        Fixed operator + (Fixed const & rhs);
        Fixed operator - (Fixed const & rhs);
        Fixed  operator * (Fixed const & rhs);
        Fixed operator / (Fixed const & rhs);

        Fixed operator++();//++a
        Fixed operator -- (int);//a--
        Fixed operator ++ (int);//a++
        Fixed operator -- ();//--a

        static const Fixed& min(Fixed const & lhs,Fixed const & rhs);
        static Fixed& min(Fixed & lhs,Fixed & rhs);
        static const Fixed& max(Fixed const & lhs,Fixed const & rhs);
        static Fixed& max(Fixed & lhs,Fixed & rhs);

        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#define FloatToFixed(x) ((double)(x)*(1<<_fractional))
#define FixedToFloat(x) ((double)(x) / (1<<_fractional))
#define IntToFixed(x) (x << _fractional)
#define FixedToInt(x) (x >> _fractional)
#endif