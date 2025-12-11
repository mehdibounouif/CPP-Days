/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:32:22 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/11 09:21:43 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat()
{
	std::cout  << name  << "Bureaucrat default constructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name)
{
	std::cout << "Bureaucrat copy constructor\n";
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat copy assignment operator\n";
	if (this == &obj)
		return (*this);
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	std::cout  << name  << " Bureaucrat is Constructed!\n";
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

void	Bureaucrat::decrement()
{
	if (grade + 1 > 150)
		throw	Bureaucrat::GradeTooLowException();
	else
		grade++;
}

void	Bureaucrat::increment()
{
	if (grade - 1 < 1)
		throw	Bureaucrat::GradeTooHighException();
	else
		grade--;
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

const	char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

Bureaucrat::~Bureaucrat()
{
	std::cout  << name  << " Bureaucrat is Destructed!\n";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", Bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}
