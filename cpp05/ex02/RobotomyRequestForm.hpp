#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

// #include <cstdlib>
#include "AForm.hpp"
#include <ctime>
#include <iostream>

class RobotomyRequestForm : public AForm {
private:
  std::string target;

public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &og);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &og);
  ~RobotomyRequestForm();

  void execute(Bureaucrat const &executor) const;
};

#endif