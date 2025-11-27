#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog &original);
  ~Dog();
  Dog &operator=(const Dog &original);

  virtual void makeSound() const;
};

#endif