#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap & original);
		~FragTrap();

		FragTrap & operator=(const FragTrap & original);

		void attack(const std::string &target);
		void guardGate() const;
		void highFivesGuys(void) const;

		void printState();
};

#endif