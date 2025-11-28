#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
  std::string type;
  AAnimal(std::string type);

public:
  AAnimal();
  AAnimal(const AAnimal &original);
  virtual ~AAnimal();
  AAnimal &operator=(const AAnimal &original);

  std::string getType() const;
  virtual void makeSound() const = 0;
};

#endif