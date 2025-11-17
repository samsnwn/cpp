#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap called the default constructor" << std::endl;
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap called the parametrized constructor" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap & original)
{
	std::cout << "ScavTrap called the copy constructor" << std::endl;
	*this = original;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap called the destructor" << std::endl;
	
}

ScavTrap & ScavTrap::operator=(const ScavTrap & original)
{
	if (this != &original)
	{
		std::cout << "ScavTrap called the copy assignment operator" << std::endl;
		this->name = original.name;
		this->hitPoints = original.hitPoints;
		this->energyPoints = original.energyPoints;
		this->attackDamage = original.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (!hitPoints || !energyPoints)
		std::cout << "ScavTrap " << name << "cannot attack, it has no fuel!" << std::endl;
	else
	{
		energyPoints--;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap is now in Gate Keeper mode!!" << std::endl;
}


void ScavTrap::printState()
{
	std::cout << std::endl;
	std::cout << "**=====SCAVTRAP STATE=====**" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit points:  " << this->hitPoints << std::endl;
	std::cout << "Energy points: " << this->energyPoints << std::endl;
	std::cout << "Attack damage: " << this->attackDamage << std::endl;
	std::cout << "**========================**" << std::endl;
}