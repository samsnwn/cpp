#include "Zombie.hpp"

int main(void) {
  const int nbrZombies = 5;

  Zombie *horde = zombieHorde(nbrZombies, "Zombie #");
  if (!horde)
    return 1;
  for (int i = 0; i < nbrZombies; i++)
    horde[i].announce();
  delete[] horde;
  horde = NULL;
  return 0;
}