#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp_val;

	temp_val = a;
	a = b;
	b = temp_val;
}

template <typename U>
U const &min(const U &a, const U &b)
{
	return (a < b ? a : b);
}

template <typename X>
X const &max(const X &a, const X &b)
{
	return (a > b ? a : b);
}

#endif