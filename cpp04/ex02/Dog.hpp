#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal {
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