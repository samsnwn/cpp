#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade too low!";
}

Bureaucrat::Bureaucrat() : _name("Default"), grade(150) {
  std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), grade(grade) {
  std::cout << "Bureaucrat constructor called" << std::endl;
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &og)
    : _name(og._name), grade(og.grade) {
  std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &og) {
  std::cout << "Bureaucrat assignment operator called" << std::endl;
  if (this != &og)
    grade = og.grade;
  return *this;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->grade; }

void Bureaucrat::incrementGrade() {
  if (this->grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  this->grade--;
}

void Bureaucrat::decrementGrade() {
  if (this->grade + 1 > 150)
    throw Bureaucrat::GradeTooLowException();
  this->grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
  os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
  return os;
}