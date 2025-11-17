#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{

}
void Weapon::setType(std::string newType)
{
	this->_type = newType;
}

const std::string & Weapon::getType() const
{
	return this->_type;
}