#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  this->_type = "WrongCat";
  std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original) {
  std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &original) {
  std::cout << "WrongCat assignment operator called." << std::endl;
  if (this != &original)
    WrongAnimal::operator=(original);
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "Meow! Meow! (WrongCat)" << std::endl;
}