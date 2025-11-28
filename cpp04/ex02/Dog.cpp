#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
  this->_brain = new Brain();
  std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &original) : AAnimal(original) {
  std::cout << "Dog copy constructor called." << std::endl;
  this->_brain = new Brain(*original._brain);
}

Dog &Dog::operator=(const Dog &original) {
  std::cout << "Dog assignment operator called." << std::endl;
  if (this != &original) {
    AAnimal::operator=(original);
    delete this->_brain;
    this->_brain = new Brain(*original._brain);
  }
  return *this;
}

Dog::~Dog() {
  delete this->_brain;
  std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const { std::cout << "Woof! Woof!" << std::endl; }

std::string Dog::getIdea(int index) const {
  return this->_brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string &idea) {
  this->_brain->setIdea(index, idea);
}