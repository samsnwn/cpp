#ifndef AFORM_H
#define AFORM_H

#include <fstream>
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class AForm {
private:
  const std::string _name;
  bool isSigned;
  const int signGrade;
  const int executeGrade;

public:
  AForm();
  AForm(const AForm &og);
  AForm(const std::string _name, bool isSigned, int signGrade,
        int executeGrade);
  AForm &operator=(const AForm &og);
  virtual ~AForm();

  std::string getName() const;
  bool getIsSigned() const;
  int getSignGrade() const;
  int getExecuteGrade() const;

  void beSigned(Bureaucrat &bureaucrat);
  void checkExecution(Bureaucrat const &bureaucrat) const;
  virtual void execute(Bureaucrat const &executor) const = 0;

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class FormNotSignedException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, const AForm &Aform);

#endif
