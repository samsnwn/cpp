#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
#include <stdexcept>

template <typename T>
class MutantStack
{
public:
  MutantStack(); // Default constructor
  MutantStack(const MutantStack &other); // Copy constructor
  MutantStack &operator=(const MutantStack &other); // Assignment operator
  ~MutantStack(); // Destructor

  unsigned int size();
  bool empty() const;

private:
  T *stack;
  unsigned int _size;
};

#include "MutantStack.tpp"


#endif
