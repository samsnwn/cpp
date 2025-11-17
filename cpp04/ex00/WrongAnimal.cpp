#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original) : _type(original._type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	if (this != &original)
		this->_type = original._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* WrongAnimal sound *" << std::endl;
}

