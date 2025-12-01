#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", false, 72, 45), target(target) {
  std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &og)
    : AForm(og), target(og.target) {
  std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &og) {
  std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
  if (this != &og) {
    AForm::operator=(og);
    this->target = og.target;
  }
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  checkExecution(executor);
  std::cout << "* Drilling noise *" << std::endl;
  std::srand(std::time(0));
  if (std::rand() % 2)
    std::cout << target << " has been robotomized successfully" << std::endl;
  else
    std::cout << "Robotomy failed for " << target << std::endl;
}
