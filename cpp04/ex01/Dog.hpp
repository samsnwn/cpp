#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
private:
  Brain *_brain;

public:
  Dog();
  Dog(const Dog &original);
  ~Dog();
  Dog &operator=(const Dog &original);

  virtual void makeSound() const;

  std::string getIdea(int index) const;
  void setIdea(int index, const std::string &idea);
};

#endif