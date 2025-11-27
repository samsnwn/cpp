#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
  std::string _type;

public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &original);
  ~WrongAnimal();
  WrongAnimal &operator=(const WrongAnimal &original);

  std::string getType() const;
  void makeSound() const;
};

#endif