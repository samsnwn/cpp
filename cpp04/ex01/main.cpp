#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const int arr_length = 6;
	Animal* animals[arr_length];

	for (int i = 0; i < arr_length; i++)
	{
		if (i < arr_length / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int i = 0; i < arr_length; i++)
	{
		animals[i]->makeSound();
		std::cout << animals[i]->getType() << std::endl;
	}

	for (int i = 0; i < arr_length; i++)
		delete animals[i];

	std::cout << "\n--- Deep Copy Test ---\n" << std::endl;

	Dog originalDog;
	originalDog.setIdea(0, "I want to chase squirrels!");
	std::cout << "Original Dog's idea: " << originalDog.getIdea(0) << std::endl;

	Dog copiedDog = originalDog;
	std::cout << "Copied Dog's idea: " << copiedDog.getIdea(0) << std::endl;

	originalDog.setIdea(0, "I want to eat bones!");
	std::cout << "Original Dog's new idea: " << originalDog.getIdea(0) << std::endl;
	std::cout << "Copied Dog's idea (should be old idea): " << copiedDog.getIdea(0) << std::endl;

	Cat originalCat;
	originalCat.setIdea(0, "I want to nap!");
	std::cout << "Original Cat's idea: " << originalCat.getIdea(0) << std::endl;

	Cat copiedCat = originalCat;
	std::cout << "Copied Cat's idea: " << copiedCat.getIdea(0) << std::endl;

	originalCat.setIdea(0, "I want to play with yarn!");
	std::cout << "Original Cat's new idea: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Copied Cat's idea (should be old idea): " << copiedCat.getIdea(0) << std::endl;

	return 0;
}