#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1 = Zombie::newZombie("Heap Zombie");
	zombie1->announce();
	Zombie::randomChump("Stack Zombie");
	delete zombie1;
	return 0;
}