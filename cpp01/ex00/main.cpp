#include "Zombie.hpp"

int main(void) {
  Zombie *zombie1 = newZombie("Heap Zombie");
  zombie1->announce();
  randomChump("Stack Zombie");
  delete zombie1;
  return 0;
}