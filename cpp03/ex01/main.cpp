#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap john("John");
	ClapTrap jane("Jane");
	ClapTrap jesus = ClapTrap(jane);

	ScavTrap sendi("Sendi");

	std::cout << "Inital ClapTrap state: " << std::endl;
	john.printState();
	std::cout << "Inital ScavTrap state: " << std::endl;
	sendi.printState();

	sendi.beRepaired(10);
	sendi.attack("someone new");
	sendi.takeDamage(4);
	sendi.printState();
	sendi.guardGate();

	return 0;
}