#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
public:
  Cat();
  Cat(const Cat &original);
  ~Cat();
  Cat &operator=(const Cat &original);

  virtual void makeSound() const;
};

#endif