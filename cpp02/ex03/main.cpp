#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
  Fixed a(10);
  Fixed b(42.42f);
  Point p(a.toFloat(), b.toFloat());

  std::cout << p << std::endl;
  return 0;
}