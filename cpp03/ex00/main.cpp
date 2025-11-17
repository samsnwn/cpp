#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap john("John");
	ClapTrap jane("Jane");
	ClapTrap();
	ClapTrap jesus = ClapTrap(jane);
	jane = john;

	std::cout << "Inital ClapTrap state: " << std::endl;
	john.printState();
	jane.printState();
	jesus.printState();

	john.attack("Someone");
	jane.takeDamage(3);
	jesus.beRepaired(6);
	john.beRepaired(10);
	john.printState();
	jane.printState();
	jesus.printState();

	return 0;
}