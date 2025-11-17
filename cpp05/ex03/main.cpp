#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Intern someIntern;
	AForm *form;

	std::cout << "--- Test valid form creation ---" << std::endl;
	try
	{
		form = someIntern.makeForm("robotomy request", "Bender");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		form = someIntern.makeForm("presidential pardon", "Marvin");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		form = someIntern.makeForm("shrubbery creation", "home");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n--- Test invalid form creation ---" << std::endl;
	try
	{
		form = someIntern.makeForm("unknown form", "target");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}