#include "C.hpp"

// Default constructor
C::C() : Base()
{
  std::cout << "C default constructor called" << std::endl;
}

// Destructor
C::~C()
{
  std::cout << "C destructor called" << std::endl;
}
