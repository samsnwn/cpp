#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(const Cure& original) : AMateria(original)
{
	std::cout << "Cure copy constructor called." << std::endl;
}

Cure& Cure::operator=(const Cure& original)
{
	std::cout << "Cure assignment operator called." << std::endl;
	if (this != &original)
		AMateria::operator=(original);
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called." << std::endl;
}

AMateria* Cure::clone() const
{
	std::cout << "Cure clone function called." << std::endl;
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
