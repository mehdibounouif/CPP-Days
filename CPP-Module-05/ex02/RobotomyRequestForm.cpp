#include "RobotomyRequestForm.h"
#include "AForm.h"
#include "Bureaucrat.h"

RobotomyRequestForm::RobotomyRequestForm() : AForm() {
  std::cout << "RobotomyRequestForm default constructor!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) {
  std::cout << "RobotomyRequestForm copy constructor!" << std::endl;
  *this = obj;
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

void RobotomyRequestForm::executeAction() {
  std::cout << "* drilling noises *" << std::endl;
  if (std::rand() % 2)
    std::cout << "1 success!" << std::endl;
  else
    std::cout << "0 failed!" << std::endl;
}
