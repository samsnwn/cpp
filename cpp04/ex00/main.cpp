#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "--- Animal Tests ---" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();

	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "--- WrongAnimal Tests ---" << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongMeta->makeSound();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();

	delete wrongMeta;
	delete wrongCat;
	std::cout << std::endl;

	return 0;
}