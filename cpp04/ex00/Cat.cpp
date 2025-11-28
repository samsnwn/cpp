#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
  std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original) {
  std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &original) {
  std::cout << "Cat assignment operator called." << std::endl;
  if (this != &original)
    Animal::operator=(original);
  return *this;
}

Cat::~Cat() { std::cout << "Cat destructor called." << std::endl; }

void Cat::makeSound() const { std::cout << "Meow! Meow!" << std::endl; }