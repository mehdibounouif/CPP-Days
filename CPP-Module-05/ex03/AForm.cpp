/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 09:10:16 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/16 09:26:23 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.h"
#include "Bureaucrat.h"

void AForm::beSigned(Bureaucrat &obj) {
  if (obj.getGrade() <= gradeToSign)
    isSigned = true;
  else {
    isSigned = false;
    throw AForm::GradeTooLowException();
  }
}

AForm::AForm(const std::string name, const int toSign, const int toExecute)
    : name(name), gradeToSign(toSign), gradeToExecute(toExecute) {
  if (gradeToExecute < 1 || gradeToSign < 1)
    throw AForm::GradeTooHighException();
  else if (gradeToSign > 150 || gradeToExecute > 150)
    throw AForm::GradeTooLowException();
  std::cout << name << " is Constructed\n";
}

AForm::AForm(const AForm &obj)
    : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign),
      gradeToExecute(obj.gradeToExecute) {}

bool AForm::getSigned() const { return (isSigned); }
void AForm::setSigned(bool flag) { this->isSigned = flag; }

const std::string AForm::getName() const { return (name); }

int AForm::getGradeToExecute() const { return (gradeToExecute); }

int AForm::getGradeToSign() const { return (gradeToSign); }

const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade is too high!");
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade is too low!");
}

const char *AForm::FormNotSignedException::what() const throw() {
  return ("Form is not signed!");
}

AForm::~AForm() { std::cout << name << " Form Destructor\n"; }

std::ostream &operator<<(std::ostream &os, const AForm &obj) {
  os << obj.getName() << ", form is signed: " << obj.getSigned()
     << ", grade to sign: " << obj.getGradeToSign()
     << ", grade to execute: " << obj.getGradeToExecute();
  return (os);
}

void AForm::execute(const Bureaucrat &obj) const {
  if (!isSigned)
    throw FormNotSignedException();
  else if (obj.getGrade() > getGradeToExecute())
    throw GradeTooLowException();
  executeAction();
}
