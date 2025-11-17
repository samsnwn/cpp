#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap called the default constructor" << std::endl;
	this->name = "default";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap called the parametrized constructor" << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap & original)
{
	std::cout << "ClapTrap called the copy constructor" << std::endl;
	*this = original;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & original)
{
	std::cout << "ClapTrap called the copy assignment operator" << std::endl;
	if (this != &original)
	{
		name = original.name;
		hitPoints = original.hitPoints;
		energyPoints = original.energyPoints;
		attackDamage = original.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap called the destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!hitPoints || !energyPoints)
		std::cout << "Claptrap " << name << "cannot attack as it has no energy left!" << std::endl;
	else
	{
		energyPoints--;
		std::cout << "Claptrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints <= 0)
		std::cout << name << " is dead!" << std::endl;
	else
		std::cout << name << " took " << amount << " of damage, and now has " << hitPoints << " hitPoints left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!hitPoints || !energyPoints)
		std::cout << name << "cannot repair itself as it has nothing left!" << std::endl;
	else
	{
		hitPoints += amount;
		energyPoints--;
		std::cout << name << " has repaired itself by " << amount << " and now has " << hitPoints << " hitPoints" << std::endl;
	}
}

void ClapTrap::printState()
{
	std::cout << std::endl;
	std::cout << "**=====CLAPTRAP STATE=====**" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit points:  " << this->hitPoints << std::endl;
	std::cout << "Energy points: " << this->energyPoints << std::endl;
	std::cout << "Attack damage: " << this->attackDamage << std::endl;
	std::cout << "**========================**" << std::endl;
}
