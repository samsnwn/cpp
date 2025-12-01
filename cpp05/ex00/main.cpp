#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat b1("John", 1);
    Bureaucrat a1(b1);
    std::cout << b1 << std::endl;
    std::cout << a1 << std::endl;
    b1.incrementGrade();
    std::cout << b1 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  try {
    Bureaucrat b2("Jane", 150);
    std::cout << b2 << std::endl;
    b2.decrementGrade();
    std::cout << b2 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  try {
    Bureaucrat b3("InvalidHigh", 0);
    std::cout << b3 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  try {
    Bureaucrat b4("InvalidLow", 151);
    std::cout << b4 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  try {
    Bureaucrat b5("Valid", 25);
    b5.incrementGrade();
    std::cout << b5 << std::endl;
    b5.decrementGrade();
    std::cout << b5 << std::endl;
  } catch (...) {
    std::cerr << "Unexpected error" << std::endl;
  }

  return 0;
}