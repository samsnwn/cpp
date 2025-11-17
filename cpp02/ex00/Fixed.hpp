#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _nbr;
		static const int _frac;

	public:
		Fixed();
		Fixed(const Fixed & original);
		Fixed & operator=(const Fixed & original);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );	
};

#endif