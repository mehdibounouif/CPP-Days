/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 04:23:18 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 03:50:39 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/Ice.h"
#include "../includes/ICharacter.h"  // Include here

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice is Constructed!\n";
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	std::cout << "Ice Copy Constructor!\n";
}

Ice &Ice::operator=(const Ice &obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	std::cout << "Ice Copy assignment operator!\n";
	return (*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

Ice::~Ice()
{
	std::cout << "Ice is Destructed!\n";
}
