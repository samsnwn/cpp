#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  const int arr_length = 4;
  AAnimal *animals[arr_length];

  for (int i = 0; i < arr_length; i++) {
    if (i < arr_length / 2)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }

  for (int i = 0; i < arr_length; i++) {
    animals[i]->makeSound();
    std::cout << animals[i]->getType() << std::endl;
  }

  for (int i = 0; i < arr_length; i++) {
    delete animals[i];
    animals[i] = NULL;
  }

  std::cout << "\n--- Deep Copy Test ---\n" << std::endl;

  Dog originalDog;
  originalDog.setIdea(0, "CHASE THE CAT!");
  std::cout << "Original Dog's idea: " << originalDog.getIdea(0) << std::endl;
  std::cout << std::endl;

  Dog copiedDog = originalDog;
  std::cout << "Copied Dog's idea: " << copiedDog.getIdea(0) << std::endl;
  std::cout << std::endl;

  originalDog.setIdea(0, "EAT!");
  std::cout << "Original Dog's new idea: " << originalDog.getIdea(0)
            << std::endl;
  std::cout << std::endl;

  std::cout << "Copied Dog's idea (should be old idea): "
            << copiedDog.getIdea(0) << std::endl;
  std::cout << std::endl;

  Cat originalCat;
  originalCat.setIdea(0, "SLEEP!");
  std::cout << "Original Cat's idea: " << originalCat.getIdea(0) << std::endl;
  std::cout << std::endl;

  Cat copiedCat = originalCat;
  std::cout << "Copied Cat's idea: " << copiedCat.getIdea(0) << std::endl;
  std::cout << std::endl;

  originalCat.setIdea(0, "PLAY!");
  std::cout << "Original Cat's new idea: " << originalCat.getIdea(0)
            << std::endl;
  std::cout << std::endl;

  std::cout << "Copied Cat's idea (should be old idea): "
            << copiedCat.getIdea(0) << std::endl;
  std::cout << std::endl;

  // AAnimal *aanimal = new AAnimal("AAnimal");

  return 0;
}