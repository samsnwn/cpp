#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap called the default constructor" << std::endl;
	this->name = "default";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap called the parametrized constructor" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap & original)
{
	std::cout << "FragTrap called the copy constructor" << std::endl;
	*this = original;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap called the destructor" << std::endl;
	
}

FragTrap & FragTrap::operator=(const FragTrap & original)
{
	if (this != &original)
	{
		std::cout << "FragTrap called the copy assignment operator" << std::endl;
		this->name = original.name;
		this->hitPoints = original.hitPoints;
		this->energyPoints = original.energyPoints;
		this->attackDamage = original.attackDamage;
	}
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (!hitPoints || !energyPoints)
		std::cout << "FragTrap " << name << "cannot attack, it has no fuel!" << std::endl;
	else
	{
		energyPoints--;
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage" << std::endl;
	}
}

void FragTrap::guardGate() const 
{
	std::cout << "FragTrap is now in Gate Keeper mode!!" << std::endl;
}

void FragTrap::highFivesGuys(void) const 
{
	std::cout << "FragTrap is invoking the HIGH FIVE!!" << std::endl;
}


void FragTrap::printState()
{
	std::cout << std::endl;
	std::cout << "**=====FragTrap STATE=====**" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Hit points:  " << this->hitPoints << std::endl;
	std::cout << "Energy points: " << this->energyPoints << std::endl;
	std::cout << "Attack damage: " << this->attackDamage << std::endl;
	std::cout << "**========================**" << std::endl;
}