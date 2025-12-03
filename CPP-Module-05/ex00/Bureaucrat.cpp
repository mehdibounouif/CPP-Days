/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 09:32:22 by mbounoui          #+#    #+#             */
/*   Updated: 2025/12/03 09:36:21 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat is Constructed!\n";
}

int	Bureaucrat::getGade() const
{
	return (grade);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat is Destructed!\n";
}
