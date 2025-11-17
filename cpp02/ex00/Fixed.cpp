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

Fixed & Fixed::operator=(const Fixed & original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		this->_nbr = original.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_nbr;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "ssetRawBits member function called" << std::endl;
	this->_nbr = raw;
}