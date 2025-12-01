#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", false, 145, 137), target(target) {
  std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &og)
    : AForm(og), target(og.target) {
  std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &og) {
  std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
  if (this != &og) {
    AForm::operator=(og);
    this->target = og.target;
  }
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  checkExecution(executor);
  std::string outFile = target + "_shrubbery";
  std::ofstream out(outFile.c_str());
  if (!out) {
    std::cerr << "Error: cannot create output file '" << outFile << "'"
              << std::endl;
    return;
  }
  out << "       _-\n";
  out << "    /\\/ \\   _-\n";
  out << "  _-\\\\   \\//\\\n";
  out << " /     \\  /  \\_\n";
  out << "         \\/    \\";
  out.close();
}
