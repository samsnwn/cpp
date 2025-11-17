#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal & original);
		virtual ~Animal();
		Animal & operator=(const Animal & original);

		std::string getType() const;
		virtual void makeSound() const;
};

#endif