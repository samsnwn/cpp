#include "Span.hpp"

// Default constructor
template <typename Container>
Span<Container>::Span(unsigned int N) : maxSize(N)
{
  std::cout << "Span default constructor called" << std::endl;
}

// Copy constructor 
template <typename Container>
Span<Container>::Span(const Span &og)
{
  std::cout << "Span copy constructor called" << std::endl;
  *this = og; // Call assignment operator for deep copy if needed
}

// Assignment operator
template <typename Container>
Span<Container> & Span<Container>::operator=(const Span &og)
{
  std::cout << "Span assignment operator called" << std::endl;
  if (this != &og)
  {
    this->numbers = og.numbers;
    this->maxSize = og.maxSize;
  }
  return *this;
}

// Destructor
template <typename Container>
Span<Container>::~Span()
{
  std::cout << "Span destructor called" << std::endl;
}

template <typename Container>
void Span<Container>::addNumber(int num)
{
  if (this->numbers.size() >= this->maxSize)
    throw MaxSizeReachedException();
  this->numbers.push_back(num);
}

template <typename Container>
unsigned int Span<Container>::getMaxSize() const
{
  return maxSize;
}
template <typename Container>
Container& Span<Container>::getContainer()
{
  return this->numbers;
}

template <typename Container>
const Container& Span<Container>::getContainer() const
{
  return this->numbers;
}


template <typename Container>
int Span<Container>::shortestSpan()
{
  if (this->numbers.size() < 2)
    throw NoSpanPossibleException();
  std::vector<int> temp(this->numbers.begin(), this->numbers.end());
  std::sort(temp.begin(), temp.end());
  int minSpan = temp[1] - temp[0];
  for (unsigned int i = 2; i < temp.size(); i++)
  {
    int span = temp[i] - temp[i - 1];
    if (span < minSpan)
      minSpan = span;
  }
  return minSpan;
}

template <typename Container>
int Span<Container>::longestSpan()
{
  if (this->numbers.size() < 2)
    throw NoSpanPossibleException();

  std::vector<int> temp_numbers(this->numbers.begin(), this->numbers.end());
  int minVal = *std::min_element(temp_numbers.begin(), temp_numbers.end());
  int maxVal = *std::max_element(temp_numbers.begin(), temp_numbers.end());
  return maxVal - minVal;
}

template class Span<std::vector<int> >; 
template class Span<std::list<int> >; 
template class Span<std::deque<int> >; 

