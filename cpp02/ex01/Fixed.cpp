#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed::Fixed(const int intVal)
{
	std::cout << "Int constructor called" << std::endl;
	_nbr = intVal << _frac;
}

Fixed::Fixed(const float floatVal)
{
	std::cout << "Float constructor called" << std::endl;
	_nbr = roundf(floatVal * (1 << _frac));
}

Fixed & Fixed::operator=(const Fixed & original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		_nbr = original._nbr;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Fixed & fixed)
{
	os << fixed.toFloat();
	return os;
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

float Fixed::toFloat( void ) const
{
	return (float)_nbr / (float)(1 << _frac);
}

int Fixed::toInt( void ) const
{
	return (int)_nbr >> (int)_frac;
}
