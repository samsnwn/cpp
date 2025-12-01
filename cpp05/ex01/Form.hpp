#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form {
private:
  const std::string _name;
  bool isSigned;
  const int signGrade;
  const int executeGrade;

public:
  Form();
  Form(const Form &og);
  Form(const std::string _name, bool isSigned, int signGrade, int executeGrade);
  Form &operator=(const Form &og);
  ~Form();

  std::string getName() const;
  bool getIsSigned() const;
  int getSignGrade() const;
  int getExecuteGrade() const;

  void beSigned(Bureaucrat &bureaucrat);

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
