#include "ShrubberyCreationForm.h"
#include "AForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
  std::cout << "ShrubberyCreationForm default constructor!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(target, 145, 137) {
  this->target = target;
  std::cout << "ShrubberyCreationForm constructor!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
    : AForm(obj) {
  *this = obj;
  std::cout << "ShrubberyCreationForm copy constructor!" << std::endl;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
  if (this == &obj)
    return (*this);
  this->target = obj.target;
  this->setSigned(obj.getSigned());
  return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "ShrubberyCreationForm destructor!" << std::endl;
}
