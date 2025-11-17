#include "Animal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &original) : _type(original._type)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &original)
{
	std::cout << "AAnimal assignment operator called." << std::endl;
	if (this != &original)
		this->_type = original._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

std::string AAnimal::getType() const
{
	return this->_type;
}

void AAnimal::makeSound() const
{
	std::cout << "* AAnimal sound *" << std::endl;
}

