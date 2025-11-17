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
		Fixed(const int nbr_val);
		Fixed(const float nbr);
		Fixed & operator=(const Fixed & original);
		~Fixed();

		bool operator>(const Fixed & other) const;
		bool operator>=(const Fixed & other) const;
		bool operator<(const Fixed & other) const;
		bool operator<=(const Fixed & other) const;
		bool operator==(const Fixed & other) const;
		bool operator!=(const Fixed & other) const;

		Fixed operator+(const Fixed & other) const;
		Fixed operator-(const Fixed & other) const;
		Fixed operator*(const Fixed & other) const;
		Fixed operator/(const Fixed & other) const;

		Fixed & operator++();
		Fixed operator++(int); 
		Fixed & operator--();
		Fixed operator--(int); 
		
		int toInt( void ) const;
		float toFloat( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );	

		static Fixed & min(Fixed & a, Fixed & b);
		static const Fixed & min(const Fixed & a, const Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static const Fixed & max(const Fixed & a, const Fixed & b);

};

std::ostream & operator<<(std::ostream & os, const Fixed & fixed);

#endif