#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    private :
        Fixed const _x;
        Fixed const _y;
    public :
        Point();
        Point(float const x, float const y);
        ~Point();
        Point(const Point & other);
        Fixed get_x(void) const;
        Fixed get_y(void) const;
        Point& operator = (Point const & rhs);
};
bool bsp( Point const &a, Point const &b, Point const &c, Point const &point);

#endif