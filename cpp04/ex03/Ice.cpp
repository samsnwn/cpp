#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(const Ice& original) : AMateria(original)
{
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice& Ice::operator=(const Ice& original)
{
	std::cout << "Ice assignment operator called." << std::endl;
	if (this != &original)
		AMateria::operator=(original);
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." << std::endl;
}

AMateria* Ice::clone() const
{
	std::cout << "Ice clone function called." << std::endl;
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
