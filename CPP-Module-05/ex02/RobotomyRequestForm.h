
#ifndef _ROBOTOMYREQUESTFORM_
#define _ROBOTOMYREQUESTFORM_

#include "AForm.h"

class RobotomyRequestForm : public AForm {
  std::string target;

public:
  RobotomyRequestForm();
  RobotomyRequestForm(const std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &obj);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
  void executeAction();
  ~RobotomyRequestForm();
};

#endif
