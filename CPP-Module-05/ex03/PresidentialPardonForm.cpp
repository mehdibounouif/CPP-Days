#include "PresidentialPardonForm.h"
#include "AForm.h"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("", 25, 5), target("") {
  std::cout << "PresidentialPardonForm default constructor!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &obj)
    : AForm(obj) {
  this->target = target;
  std::cout << "PresidentialPardonForm copy constructor!" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
  if (this == &obj)
    return (*this);
  this->target = obj.target;
  this->setSigned(obj.getSigned());
  return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm(target, 25, 5), target(target) {
  std::cout << "PresidentialPardonForm constructor!" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "PresidentialPardonForm destructor!" << std::endl;
}

void PresidentialPardonForm::executeAction() const {
  std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
