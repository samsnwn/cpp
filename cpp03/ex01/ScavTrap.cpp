#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap called the default constructor" << std::endl;
	this->_name = "default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap called the parametrized constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
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
		this->_name = original._name;
		this->_hitPoints = original._hitPoints;
		this->_energyPoints = original._energyPoints;
		this->_attackDamage = original._attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (!_hitPoints || !_energyPoints)
		std::cout << "ScavTrap " << _name << "cannot attack, it has no fuel!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper mode!!" << std::endl;
}


void ScavTrap::printState()
{
	std::cout << std::endl;
	std::cout << "**=====SCAVTRAP STATE=====**" << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hit points:  " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "**========================**" << std::endl;
}