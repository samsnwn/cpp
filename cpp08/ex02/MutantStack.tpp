template <typename T>
MutantStack<T>::MutantStack() : stack(NULL), _size(0)
{
  std::cout << "MutantStack default constructor called" << std::endl;
}

// Copy constructor
MutantStack::MutantStack(const MutantStack &other)
{
  std::cout << "MutantStack copy constructor called" << std::endl;
  *this = other; // Call assignment operator for deep copy if needed
}

// Assignment operator
MutantStack & MutantStack::operator=(const MutantStack &other)
{
  std::cout << "MutantStack assignment operator called" << std::endl;
  if (this != &other)
  {
    // Copy members from other to this
  }
  return *this;
}

// Destructor
MutantStack::~MutantStack()
{
  std::cout << "MutantStack destructor called" << std::endl;
}
