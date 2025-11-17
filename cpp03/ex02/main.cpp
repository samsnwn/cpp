#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap john("John");
	ClapTrap jesus = ClapTrap(john);

	ScavTrap scavi("Scavi");
	ScavTrap sendi = ScavTrap("Sendi");

	FragTrap flagy("Flagy");
	FragTrap flewy;
	flewy = flagy;

	std::cout << "Inital ClapTrap state: " << std::endl;
	jesus.printState();
	std::cout << "Inital ScavTrap state: " << std::endl;
	sendi.printState();
	std::cout << "Inital FragTrap state: " << std::endl;
	flewy.printState();

	flewy.attack("poor guy");
	flewy.highFivesGuys();
	flewy.takeDamage(10);
	flewy.printState();

	return 0;
}