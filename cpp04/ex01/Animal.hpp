#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

class Animal {
protected:
  std::string type;
  Animal(std::string type);

public:
  Animal();
  Animal(const Animal &original);
  virtual ~Animal();
  Animal &operator=(const Animal &original);

  std::string getType() const;
  virtual void makeSound() const;
};

#endif