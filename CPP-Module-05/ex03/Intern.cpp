

#include "Intern.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

Intern::Intern() { std::cout << "Intern Constructor!" << std::endl; }

Intern::Intern(const Intern &obj) {
  std::cout << "Intern copy constructor!" << std::endl;
  *this = obj;
}

Intern &Intern::operator=(const Intern &obj) {
  std::cout << "Intern copy assingment operator!" << std::endl;
  if (this == &obj)
    return (*this);
  return (*this);
}

Intern::~Intern() { std::cout << "Intern Destructor!" << std::endl; }

AForm *Intern::makePresidential(std::string target) {
  AForm *a = new PresidentialPardonForm(target);
  return (a);
}

AForm *Intern::makeRobotomy(std::string target) {
  AForm *a = new RobotomyRequestForm(target);
  return (a);
}

AForm *Intern::makeShrubbery(std::string target) {
  AForm *a = new ShrubberyCreationForm(target);
  return (a);
}

AForm *Intern::makeForm(const std::string formName, const std::string target) {
  const std::string forms[3] = {"presidential pardon", "robotomy request",
                                "sherubbery creation"};

  AForm *(Intern::*funs[3])(std::string) = {
      &Intern::makePresidential,
      &Intern::makeRobotomy,
      &Intern::makeShrubbery,
  };

  for (int i = 0; i < 3; i++) {
    if (forms[i] == formName) {
      std::cout << "Intern creates " << formName << std::endl;
      return ((this->*funs[i])(target));
    }
  }
  std::cout << "Intern cannot create " << formName << std::endl;
  return NULL;
}
