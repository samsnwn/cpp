#include "Form.hpp"
#include "Bureaucrat.hpp"

const char *Form::GradeTooHighException::what() const throw() {
  return "Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Grade too low!";
}

Form::Form()
    : _name("Form"), isSigned(false), signGrade(150), executeGrade(150) {
  std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, bool isSigned, int signGrade,
           int executeGrade)
    : _name(name), isSigned(isSigned), signGrade(signGrade),
      executeGrade(executeGrade) {
  if (signGrade < 1 || executeGrade < 1)
    throw Form::GradeTooHighException();
  if (signGrade > 150 || executeGrade > 150)
    throw Form::GradeTooLowException();
  std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &og)
    : _name(og._name), isSigned(og.isSigned), signGrade(og.signGrade),
      executeGrade(og.executeGrade) {
  std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &og) {
  std::cout << "Form assignment operator called" << std::endl;
  if (this != &og)
    this->isSigned = og.isSigned;
  return *this;
}

Form::~Form() { std::cout << "Form destructor called" << std::endl; }

std::ostream &operator<<(std::ostream &os, const Form &form) {
  os << "Form name: " << form.getName() << std::endl
     << "Is signed: " << form.getIsSigned() << std::endl
     << "Sign grade: " << form.getSignGrade() << std::endl
     << "Execute Grade: " << form.getExecuteGrade();
  return os;
}

std::string Form::getName() const { return _name; }

bool Form::getIsSigned() const { return isSigned; }

int Form::getSignGrade() const { return signGrade; }

int Form::getExecuteGrade() const { return executeGrade; }

void Form::beSigned(Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->getSignGrade())
    throw Form::GradeTooLowException();
  this->isSigned = true;
}