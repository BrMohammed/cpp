#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;


std::cout << Fixed::min( a, b )<< "\n" << std::endl;


std::cout << "----------------\n" << std::endl;
std::cout << a << std::endl;
std::cout << --a << std::endl;
std::cout << a << std::endl;
std::cout << a-- << std::endl;
std::cout << a << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;


Fixed  c( Fixed( 5.2f ) + Fixed( 2 ) );
std::cout << c << std::endl;

Fixed  t( Fixed( 5.2f ) - Fixed( 2 ) );
std::cout << t << std::endl;
return 0;
}
