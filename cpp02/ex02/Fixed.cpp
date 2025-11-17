#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed() : _nbr(0)
{
}

Fixed::Fixed(const Fixed & original)
{
	*this = original;
}

Fixed::Fixed(const int intVal)
{
	_nbr = intVal << _frac;
}

Fixed::Fixed(const float floatVal)
{
	_nbr = roundf(floatVal * (1 << _frac));
}

Fixed & Fixed::operator=(const Fixed & original)
{
	if (this != &original)
		_nbr = original._nbr;
	return *this;
}

Fixed::~Fixed()
{
}

float Fixed::toFloat( void ) const
{
	return (float)_nbr / (float)(1 << _frac);
}

int Fixed::toInt( void ) const
{
	return (int)_nbr >> (int)_frac;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return _nbr;
}

void Fixed::setRawBits(int const raw)
{
	_nbr = raw;
}

std::ostream & operator<<(std::ostream & os, const Fixed & fixed)
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(const Fixed & other) const
{
	return this->toFloat() > other.toFloat();
}

bool Fixed::operator>=(const Fixed & other) const
{
	return this->toFloat() >= other.toFloat();

}

bool Fixed::operator<(const Fixed & other) const
{
		return this->toFloat() < other.toFloat();
}

bool Fixed::operator<=(const Fixed & other) const
{
	return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed & other) const
{
	return this->toFloat() == other.toFloat();

}

bool Fixed::operator!=(const Fixed & other) const
{
	return this->toFloat() != other.toFloat();
}

Fixed Fixed::operator+(const Fixed & other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed & other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed & other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed & other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed & Fixed::operator++()
{
	_nbr++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	_nbr++;
	return temp;
}

Fixed & Fixed::operator--()
{
	_nbr--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	_nbr--;
	return temp;
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}
