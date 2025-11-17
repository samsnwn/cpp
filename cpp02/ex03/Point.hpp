#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed _x;
		Fixed _y;

	public:
		Point();
		Point(const float a, const float b);
		Point(const Point & pointRef);
		Point & operator=(const Point & other);
		~Point();
		const Fixed  & getX() const;
		const Fixed  & getY() const;
};

std::ostream & operator<<(std::ostream & os, const Point & point);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif