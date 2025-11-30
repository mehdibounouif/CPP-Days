/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:50:59 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 18:48:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.h"  // Include here
#include "../includes/Cure.h"  // Include here

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure is Constructed!\n";
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	std::cout << "Cure Copy Constructor!\n";
}

Cure &Cure::operator=(const Cure &obj)
{
	if (this != &obj)
		AMateria::operator=(obj);
	std::cout << "Cure Copy assignment operator!\n";
	return (*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

Cure::~Cure()
{
	std::cout << "Cure is Destructed!\n";
}
