#include "Character.hpp"
#include <iostream>

Character::Character()
{
	std::cout << "Character " << this->_name << " default constructed." << std::endl;
	this->_name = "Default name";
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	std::cout << "Character " << this->_name << " constructed." << std::endl;
}

Character::Character(const Character& original) : _name(original._name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (original._inventory[i])
			this->_inventory[i] = original._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	std::cout << "Character " << this->_name << " copy constructed." << std::endl;
}

Character& Character::operator=(const Character& original)
{
	std::cout << "Character assignment operator called for " << this->_name << std::endl;
	if (this != &original)
	{
		this->_name = original._name;
		for (int i = 0; i < 4; ++i)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (original._inventory[i])
				this->_inventory[i] = original._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character " << this->_name << " destructed." << std::endl;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Cannot equip NULL Materia." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "Character " << this->_name << " equipped " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Character " << this->_name << " inventory is full, cannot equip " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		std::cout << "Character " << this->_name << " unequipped " << this->_inventory[idx]->getType() << " from slot " << idx << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "Cannot unequip from invalid slot " << idx << " or slot is empty." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		std::cout << "Character " << this->_name << " uses Materia in slot " << idx << ": ";
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "Cannot use Materia from invalid slot " << idx << " or slot is empty." << std::endl;
}
