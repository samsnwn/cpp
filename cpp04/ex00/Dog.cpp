#include "Dog.hpp"

Dog::Dog() : Animal() {
  this->_type = "Dog";
  std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &original) : Animal(original) {
  std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &original) {
  std::cout << "Dog assignment operator called." << std::endl;
  if (this != &original)
    Animal::operator=(original);
  return *this;
}

Dog::~Dog() { std::cout << "Dog destructor called." << std::endl; }

void Dog::makeSound() const { std::cout << "Woof! Woof!" << std::endl; }