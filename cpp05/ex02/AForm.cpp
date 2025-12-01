#include "AForm.hpp"
#include "Bureaucrat.hpp"

const char *AForm::GradeTooHighException::what() const throw() {
  return "Grade too high!";
}

const char *AForm::GradeTooLowException::what() const throw() {
  return "Grade too low!";
}

const char *AForm::FormNotSignedException::what() const throw() {
  return "Form is not signed";
}

AForm::AForm()
    : _name("AForm"), isSigned(false), signGrade(3), executeGrade(45) {
  std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string name, bool isSigned, int signGrade,
             int executeGrade)
    : _name(name), isSigned(isSigned), signGrade(signGrade),
      executeGrade(executeGrade) {
  if (signGrade < 1 || executeGrade < 1)
    throw AForm::GradeTooHighException();
  if (signGrade > 150 || executeGrade > 150)
    throw AForm::GradeTooLowException();
  std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(const AForm &og)
    : _name(og._name), isSigned(og.isSigned), signGrade(og.signGrade),
      executeGrade(og.executeGrade) {
  std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &og) {
  std::cout << "AForm assignment operator called" << std::endl;
  if (this != &og)
    this->isSigned = og.isSigned;
  return *this;
}

AForm::~AForm() { std::cout << "AForm destructor called" << std::endl; }

std::ostream &operator<<(std::ostream &os, const AForm &Aform) {
  os << "AForm name: " << Aform.getName() << std::endl
     << "Is signed: " << Aform.getIsSigned() << std::endl
     << "Sign grade: " << Aform.getSignGrade() << std::endl
     << "Execute Grade: " << Aform.getExecuteGrade();
  return os;
}

std::string AForm::getName() const { return _name; }

bool AForm::getIsSigned() const { return isSigned; }

int AForm::getSignGrade() const { return signGrade; }

int AForm::getExecuteGrade() const { return executeGrade; }

void AForm::beSigned(Bureaucrat &bureaucrat) {
  if (bureaucrat.getGrade() > this->getSignGrade())
    throw AForm::GradeTooLowException();
  this->isSigned = true;
}

void AForm::checkExecution(Bureaucrat const &bureaucrat) const {
  if (!this->getIsSigned())
    throw AForm::FormNotSignedException();
  if (bureaucrat.getGrade() > this->getExecuteGrade())
    throw AForm::GradeTooLowException();
}
