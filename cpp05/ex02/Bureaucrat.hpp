#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
	const std::string _name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &og);
	Bureaucrat &operator=(const Bureaucrat &og);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	void signForm(AForm & Aform);
	void executeForm(AForm const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif