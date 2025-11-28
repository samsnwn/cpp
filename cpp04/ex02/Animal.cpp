#include "Animal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
  std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type) {
  std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &original) : type(original.type) {
  std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &original) {
  std::cout << "AAnimal assignment operator called." << std::endl;
  if (this != &original)
    this->type = original.type;
  return *this;
}

AAnimal::~AAnimal() { std::cout << "AAnimal destructor called." << std::endl; }

std::string AAnimal::getType() const { return this->type; }

void AAnimal::makeSound() const {
  std::cout << "* AAnimal sound *" << std::endl;
}
