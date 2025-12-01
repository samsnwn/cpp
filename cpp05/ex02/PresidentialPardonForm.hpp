#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <iostream>

class Bureaucrat;

class PresidentialPardonForm : public AForm {
private:
  std::string target;

public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &og);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &og);
  ~PresidentialPardonForm();

  void execute(Bureaucrat const &executor) const;
};

#endif