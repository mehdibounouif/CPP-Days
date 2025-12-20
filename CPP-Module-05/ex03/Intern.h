

#ifndef _INTERN_
#define _INTERN_

#include "AForm.h"
#include <iostream>

class Intern {
public:
  Intern();
  Intern(const Intern &bj);
  Intern &operator=(const Intern &obj);
  ~Intern();
  AForm *makeForm(const std::string formName, const std::string target);
  AForm *makePresidential(std::string target);
  AForm *makeRobotomy(std::string target);
  AForm *makeShrubbery(std::string target);
};

#endif
