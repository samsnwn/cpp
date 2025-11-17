#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap called the default constructor" << std::endl;
	this->_name = "default";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap called the parametrized constructor" << std::endl;
	this->_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
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
		_name = original._name;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_attackDamage = original._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap called the destructor" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!_hitPoints || !_energyPoints)
		std::cout << "Claptrap " << _name << "cannot attack as it has no energy left!" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints <= 0)
		std::cout << _name << " is dead!" << std::endl;
	else
		std::cout << _name << " took " << amount << " of damage, and now has " << _hitPoints << " hitPoints left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPoints || !_energyPoints)
		std::cout << _name << "cannot repair itself as it has nothing left!" << std::endl;
	else
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << _name << " has repaired itself by " << amount << " and now has " << _hitPoints << " hitPoints" << std::endl;
	}
}

void ClapTrap::printState()
{
	std::cout << std::endl;
	std::cout << "**=====CLAPTRAP STATE=====**" << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hit points:  " << this->_hitPoints << std::endl;
	std::cout << "Energy points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_attackDamage << std::endl;
	std::cout << "**========================**" << std::endl;
}
