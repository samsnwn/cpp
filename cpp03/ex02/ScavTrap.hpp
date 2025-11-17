#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & original);
		~ScavTrap();

		ScavTrap & operator=(const ScavTrap & original);

		void attack(const std::string &target);
		void guardGate() const;

		void printState();

};

#endif