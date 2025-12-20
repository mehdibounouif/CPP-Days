#include "RobotomyRequestForm.h"
#include "AForm.h"
#include "Bureaucrat.h"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45), target("") {
  std::cout << "RobotomyRequestForm default constructor!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
    : AForm(obj) {
  this->target = obj.target;
  std::cout << "RobotomyRequestForm copy constructor!" << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
  if (this == &obj)
    return (*this);
  this->target = obj.target;
  this->setSigned(obj.getSigned());
  return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm(target, 72, 45), target(target) {
  std::cout << "RobotomyRequestForm constructor!" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "RobotomyRequestForm destructor!" << std::endl;
}

void RobotomyRequestForm::executeAction() const {
  std::cout << "* drilling noises *" << std::endl;
  if (std::rand() % 2)
    std::cout << target << "has been robotomized successfully" << std::endl;
  else
    std::cout << "the robotomy failed" << std::endl;
}
