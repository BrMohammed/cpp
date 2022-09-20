#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{

Point const a(20,5);
Point const b(20,30);
Point const c(50,35);
Point const point(46,33);
//bsp( a, b, c,point);
std::cout << bsp( a, b, c,point) << std::endl;
return 0;
}
