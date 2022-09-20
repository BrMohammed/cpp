#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
   
}
Point::Point(float const x, float const y) :  _x(x), _y(y)
{
   
}
Point::Point(const Point & p) : _x(p._x), _y(p._y)
{

}
Point::~Point() 
{
   
}
Fixed Point::get_x(void) const
{   
    return this->_x;
}

Fixed Point::get_y(void) const
{   
    return this->_y;
}

Point& Point::operator = (Point const & rhs) 
{
    (void)rhs;
    return *this;
}

bool bsp( Point const &a, Point const &b, Point const &c, Point const &point)
{
    Fixed Area = ((a.get_x() * (b.get_y() - c.get_y())) + (b.get_x() * 
                    (c.get_y() - a.get_y())) + (c.get_x() * (a.get_y() - b.get_y()))) / 2;
    Fixed Area1 = ((point.get_x() * (b.get_y() - c.get_y())) + (b.get_x() * 
                    (c.get_y() - point.get_y())) + (c.get_x() * (point.get_y() - b.get_y()))) / 2;
    Fixed Area2 = ((a.get_x() * (point.get_y() - c.get_y())) + (point.get_x() * 
                    (c.get_y() - a.get_y())) + (c.get_x() * (a.get_y() - point.get_y()))) / 2;
    Fixed Area3 = ((a.get_x() * (b.get_y() - point.get_y())) + (b.get_x() * 
                    (point.get_y() - a.get_y())) + (point.get_x() * (a.get_y() - b.get_y()))) / 2;
    if(Area < 0)
        Area = Area * -1;
    if(Area1 < 0)
        Area1 = Area1 * -1;
    if(Area2 < 0)
        Area2 = Area2 * -1;
    if(Area3 < 0)
        Area3 = Area3 * -1;
    // std::cout << Area << std::endl;
    // std::cout << Area1 << std::endl;
    // std::cout << Area2 << std::endl;
    // std::cout << Area3 << std::endl;
    if(Area > Area1 && Area > Area2 && Area > Area3)
        return(true);
    else
        return false;
}