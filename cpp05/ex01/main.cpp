#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  // Test Form creation with valid grades
  try {
    Form form1("Form A", false, 50, 25);
    std::cout << form1 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  // Test Form creation with too high sign grade
  try {
    Form form2("Form B", false, 0, 25);
    std::cout << form2 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  // Test Form creation with too low execute grade
  try {
    Form form3("Form C", false, 50, 151);
    std::cout << form3 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  // Test beSigned method
  try {
    Bureaucrat b1("Alice", 40);
    Form form4("Form D", false, 50, 30);
    std::cout << b1 << std::endl;
    std::cout << form4 << std::endl;
    b1.signForm(form4);
    std::cout << form4 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  std::cout << "\n---\n" << std::endl;

  // Test beSigned method with too low bureaucrat grade
  try {
    Bureaucrat b2("Bob", 60);
    Form form5("Form E", false, 50, 30);
    std::cout << b2 << std::endl;
    std::cout << form5 << std::endl;
    b2.signForm(form5);
    std::cout << form5 << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}