/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:32:15 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/16 09:26:34 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"
#include "AForm.h"

Bureaucrat::Bureaucrat() {
  std::cout << name << "Bureaucrat default constructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name) {
  std::cout << name << "Bureaucrat Copy constructor\n";
  *this = obj;
}

Bureaucrat::~Bureaucrat() { std::cout << name << " Bureaucrat destructor\n"; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
  std::cout << "Bureaucrat copy  assignment operator\n";
  if (this == &obj)
    return (*this);
  this->grade = obj.grade;
  return (*this);
}

void Bureaucrat::signForm(AForm &obj) {
  try {
    obj.beSigned(*this);
    std::cout << this->getName() << " signed " << obj.getName() << std::endl;
  } catch (std::exception &e) {
    std::cout << this->getName() << " couldn't sign " << obj.getName()
              << " because " << e.what() << std::endl;
  }
}

void Bureaucrat::executeForm(const AForm &obj) const {
  try {
    obj.execute(*this);
    std::cout << this->getName() << " execute " << obj.getName() << std::endl;
  } catch (std::exception &e) {
    std::cout << this->getName() << " couldn't execute " << obj.getName()
              << " because " << e.what() << std::endl;
  }
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
  std::cout << name << " Bureaucrat constructor\n";
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    this->grade = grade;
}

void Bureaucrat::decrement() {
  if (grade + 1 > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    grade++;
}

void Bureaucrat::increment() {
  if (grade - 1 < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    grade--;
}

const std::string Bureaucrat::getName() const { return (name); }

int Bureaucrat::getGrade() const { return (grade); }

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade is too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.getName() << ", Bureaucrat grade " << obj.getGrade() << ".\n";
  return (os);
}
