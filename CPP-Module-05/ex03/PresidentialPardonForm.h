
#ifndef _PRESIDENTIALPARDONFORM_
#define _PRESIDENTIALPARDONFORM_

#include "AForm.h"

class PresidentialPardonForm : public AForm {
  std::string target;

public:
  PresidentialPardonForm();
  PresidentialPardonForm(const std::string &target);
  PresidentialPardonForm(const PresidentialPardonForm &obj);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
  void executeAction() const;
  ~PresidentialPardonForm();
};

#endif
