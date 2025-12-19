#ifndef _SHRUBBERYCREATIONFORM_
#define _SHRUBBERYCREATIONFORM_

#include "AForm.h"

class ShrubberyCreationForm : public AForm {
  std::string target;

public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(const std::string &target);
  ShrubberyCreationForm(const ShrubberyCreationForm &obj);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
  void executeAction() const;
  ~ShrubberyCreationForm();
};

#endif
