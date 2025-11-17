#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brain = new Brain(*original._brain);
}

Cat &Cat::operator=(const Cat &original)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &original)
	{
		Animal::operator=(original);
		delete this->_brain;
		this->_brain = new Brain(*original._brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meow! Meow!" << std::endl;
}

std::string Cat::getIdea(int index) const
{
	return this->_brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string &idea)
{
	this->_brain->setIdea(index, idea);
}