#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &og);
	Intern &operator=(const Intern &og);
	~Intern();

	AForm *makeForm(const std::string name, const std::string target);

	class FormNotFoundException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif