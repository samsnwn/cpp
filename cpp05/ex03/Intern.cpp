#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern() {
  std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &og) {
  (void)og;
  std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &og) {
  (void)og;
  std::cout << "Intern assignment operator called" << std::endl;
  return *this;
}

Intern::~Intern() { std::cout << "Intern destructor called" << std::endl; }

const char *Intern::FormNotFoundException::what() const throw() {
  return "Form not found!";
}

AForm *Intern::makeForm(std::string name, std::string target) {
  AForm *form;

  std::cout << "Intern creates " << name << std::endl;

  if (name == "robotomy request")
    form = new RobotomyRequestForm(target);
  else if (name == "presidential pardon")
    form = new PresidentialPardonForm(target);
  else if (name == "shrubbery creation")
    form = new ShrubberyCreationForm(target);
  else
    throw Intern::FormNotFoundException();
  return form;
}
