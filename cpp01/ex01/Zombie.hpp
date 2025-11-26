#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	void setName(std::string name);
	void announce(void) const;
	~Zombie();
	static Zombie *zombieHorde(int N, std::string name);
};


#endif