#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <algorithm>
# include <exception>

template <typename Container>
class Span
{
public:
  Span(unsigned int N); // Default constructor
  Span(const Span &og); // Copy constructor
  Span &operator=(const Span &og); // Assignment operator
  ~Span(); // Destructor

  void addNumber(int num);
  unsigned int getMaxSize() const;
  Container& getContainer();
  const Container& getContainer() const;
  int shortestSpan();
  int longestSpan();


private:
  Container numbers;
  unsigned int maxSize;

  class MaxSizeReachedException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return "Max size reached!";
    }
  };

  class NoSpanPossibleException : public std::exception {
  public:
    virtual const char* what() const throw() {
      return "No span can be found!";
    }
  };
};

#endif
