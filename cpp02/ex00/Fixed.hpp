#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private :
        int _number;
        static const int _fractional = 8;
    public :
        Fixed ();
        Fixed (int t);
        Fixed (const Fixed & number);
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        Fixed& operator=(Fixed const & rhs);
};

#endif