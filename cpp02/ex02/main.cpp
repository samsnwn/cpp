#include "Fixed.hpp"

void test_all(Fixed & a, const Fixed & b)
{
  std::cout << std::endl;
  std::cout << "Arithmetics Ops" << std::endl;
  std::cout << "a + b =====> " << a + b << std::endl;
  std::cout << "a - b =====> " << a - b << std::endl;
  std::cout << "a * b =====> " << a * b << std::endl;
  std::cout << "a / b =====> " << a / b << std::endl;

  std::cout << std::endl;
  std::cout << "Comparison Ops" << std::endl;
  std::cout << "a > b =====> " << (a > b) << std::endl;
  std::cout << "a < b =====> " << (a < b )<< std::endl;
  std::cout << "a >= b =====> " << (a >= b) << std::endl;
  std::cout << "a <= b =====> " << (a <= b) << std::endl;
  std::cout << "a == b =====> " << (a == b) << std::endl;
  std::cout << "a != b =====> " << (a != b) << std::endl;

  std::cout << std::endl;
  std::cout << "Increment/Decrement" << std::endl;
  std::cout << "a++ =====> " << a++ << std::endl;
  std::cout << "a-- =====> " << a-- << std::endl;
  std::cout << "++a =====> " << ++a << std::endl;
  std::cout << "--a =====> " << --a << std::endl;

  std::cout << std::endl;
  std::cout << "Min/Max" << std::endl;
  std::cout << "Min(a, b) =====> " << Fixed::min(a, b) << std::endl;
  std::cout << "Max(a, b) =====> " << Fixed::max(a, b) << std::endl;
  
}

int main(void)
{
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a, b) << std::endl;
  test_all(a, b);
  return 0;
}