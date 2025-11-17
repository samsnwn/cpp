#include "B.hpp"

// Default constructor
B::B() : Base()
{
  std::cout << "B default constructor called" << std::endl;
}

// Destructor
B::~B()
{
  std::cout << "B destructor called" << std::endl;
}
