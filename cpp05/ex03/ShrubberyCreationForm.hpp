#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & og);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & og);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const & executor) const;
};

#endif