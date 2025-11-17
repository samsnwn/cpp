#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog & original);
		~Dog();
		Dog & operator=(const Dog & original);

		virtual void makeSound() const;

};

#endif