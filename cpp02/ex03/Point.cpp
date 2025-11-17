#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float a, const float b) : _x(a), _y(b)
{
}

Point::Point(const Point & pointRef)
{
	*this = pointRef;
}

Point::~Point()
{
}

Point &Point::operator=(const Point & other)
{
	if (this != &other)
	{
		this->_x = other.getX();
		this->_y = other.getY();
	}
	return *this;
}


std::ostream & operator<<(std::ostream & os, const Point & point)
{
	os << "x -> "<< point.getX() << " _| y -> "<< point.getY();
	return os;
}

const Fixed & Point::getX() const 
{
	return this->_x;
}

const Fixed & Point::getY() const 
{
	return this->_y;
}