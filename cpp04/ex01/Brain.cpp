#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = "";
}

Brain::Brain(const Brain & original)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = original;
}

Brain & Brain::operator=(const Brain & original)
{
	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &original)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = original.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return ideas[index];
	return "";
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}