#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", false, 25, 5), target(target) {
  std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &og)
    : AForm(og), target(og.target) {
  std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &og) {
  std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
  if (this != &og) {
    AForm::operator=(og);
    this->target = og.target;
  }
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  checkExecution(executor);
  std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
