#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : _type("default")
{
	std::cout << "Default AMateria constructor called for type " << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria constructor called for type " << this->_type << std::endl;
}

AMateria::AMateria(const AMateria &original) : _type(original._type)
{
	std::cout << "AMateria copy constructor called for type " << this->_type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &original)
{
	std::cout << "AMateria assignment operator called for type " << this->_type << std::endl;
	if (this != &original)
		this->_type = original._type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called for type " << this->_type << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}