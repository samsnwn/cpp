#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
  std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &original) : _type(original._type) {
  std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &original) {
  std::cout << "Animal assignment operator called." << std::endl;
  if (this != &original)
    this->_type = original._type;
  return *this;
}

Animal::~Animal() { std::cout << "Animal destructor called." << std::endl; }

std::string Animal::getType() const { return this->_type; }

void Animal::makeSound() const { std::cout << "* Animal sound *" << std::endl; }
