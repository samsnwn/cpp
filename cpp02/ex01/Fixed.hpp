#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _nbr;
		static const int _frac;

	public:
		Fixed(void);
		Fixed(const Fixed & original);
		Fixed(const int intVal);
		Fixed(const float floatVal);
		Fixed & operator=(const Fixed & original);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );	
		int toInt( void ) const;
		float toFloat( void ) const;
};

std::ostream & operator<<(std::ostream & os, const Fixed & fixed);

#endif