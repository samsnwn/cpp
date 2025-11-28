#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
  std::string type;
  WrongAnimal(std::string type);

public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &original);
  ~WrongAnimal();
  WrongAnimal &operator=(const WrongAnimal &original);

  std::string getType() const;
  void makeSound() const;
};

#endif