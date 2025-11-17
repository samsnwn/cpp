#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat & original);
		~Cat();
		Cat & operator=(const Cat & original);

		virtual void makeSound() const;

		std::string getIdea(int index) const;
		void setIdea(int index, const std::string &idea);
};

#endif