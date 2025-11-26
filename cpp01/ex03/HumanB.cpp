#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::attack() {
  if (weapon)
    std::cout << _name << " attacks with their " << weapon->getType()
              << std::endl;
  else
    std::cout << _name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }