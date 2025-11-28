#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
  std::cout << "WrongAnimal parameterized constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original) : type(original.type) {
  std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original) {
  std::cout << "WrongAnimal assignment operator called." << std::endl;
  if (this != &original)
    this->type = original.type;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called." << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const {
  std::cout << "* WrongAnimal sound *" << std::endl;
}
