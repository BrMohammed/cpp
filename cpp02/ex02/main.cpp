#include "Fixed.hpp"

int main( void ) {
// const Fixed s;
// Fixed a;
Fixed const b( Fixed( 5.0f ) / Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
 std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;

// std::cout << Fixed::min( a, b )<< "\n" << std::endl;


// std::cout << "----------------\n" << std::endl;
// std::cout << a << std::endl;
// std::cout << --a << std::endl;
// std::cout << a << std::endl;
// std::cout << a-- << std::endl;
// std::cout << a << std::endl;

// std::cout << Fixed::max( a, b ) << std::endl;
// std::cout << Fixed::min( a, b ) << std::endl;


// Fixed  c( Fixed( 5.2f ) + Fixed( 2 ) );
// std::cout << c << std::endl;

// Fixed  t( Fixed( 5.2f ) - Fixed( 2 ) );
// std::cout << t << std::endl;


// Fixed u(2);
// std::cout << " \n" <<(2<<8) << std::endl;
// std::cout << u.getRawBits() << std::endl;
// std::cout << ((2<<8) >> 8 )<< std::endl;
// std::cout << u.toInt() << std::endl;

// std::cout << "\n"<<(1<<8) << std::endl;
// Fixed u1(2.2f);
// std::cout << u1.getRawBits() << std::endl;
// std::cout << (2.2*(1<<8))<< std::endl;
// std::cout << u1.toFloat() << std::endl;
// std::cout << ((2.2*(1<<8))) / (1<<8) << std::endl;
return 0;
}
