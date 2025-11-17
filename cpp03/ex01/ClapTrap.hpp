#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap  & original);
		~ClapTrap();
		ClapTrap & operator=(const ClapTrap & original);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void printState();
};

#endif