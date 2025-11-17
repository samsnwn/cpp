#include "A.hpp"

// Default constructor
A::A() : Base()
{
  std::cout << "A default constructor called" << std::endl;
}

// Destructor
A::~A()
{
  std::cout << "A destructor called" << std::endl;
}
