#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;

std::cout << "\n --------- \n" << std::endl;
std::cout << "a is " << a.toFloat() << " as float" << std::endl;
std::cout << "raw a is " << a.getRawBits() << std::endl;
std::cout << "a is " << (a.getRawBits() >> 8) << " as desimal ;)" << std::endl;
std::cout << "a is " << ((float)a.getRawBits() / (1<<8)) << " as float ;)" << std::endl;
std::cout << "\n --------- \n" << std::endl;

return 0;
}