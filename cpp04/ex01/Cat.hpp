#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
private:
  Brain *_brain;

public:
  Cat();
  Cat(const Cat &original);
  ~Cat();
  Cat &operator=(const Cat &original);

  virtual void makeSound() const;

  std::string getIdea(int index) const;
  void setIdea(int index, const std::string &idea);
};

#endif