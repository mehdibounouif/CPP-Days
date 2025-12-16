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

void Form::beSigned(Bureaucrat &obj) {
  if (obj.getGrade() <= gradeToSign)
    isSigned = true;
  else {
    isSigned = false;
    throw Form::GradeTooLowException();
  }
}

Form::Form(const std::string name, const int toSign, const int toExecute)
    : name(name), gradeToSign(toSign), gradeToExecute(toExecute) {
  if (gradeToExecute < 1 || gradeToSign < 1)
    throw Form::GradeTooHighException();
  else if (gradeToSign > 150 || gradeToExecute > 150)
    throw Form::GradeTooLowException();
  std::cout << name << " is Constructed\n";
}

bool Form::getSigned() const { return (isSigned); }

const std::string Form::getName() const { return (name); }

int Form::getGradeToExecute() const { return (gradeToExecute); }

int Form::getGradeToSign() const { return (gradeToSign); }

const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade is too low!");
}

Form::~Form() { std::cout << name << " Form Destructor\n"; }

std::ostream &operator<<(std::ostream &os, const Form &obj) {
  os << obj.getName() << ", form is signed: " << obj.getSigned()
     << ", grade to sign: " << obj.getGradeToSign()
     << ", grade to execute: " << obj.getGradeToExecute();
  return (os);
}
