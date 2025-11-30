/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:50:59 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 04:00:36 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/Cure.h"
#include "../includes/ICharacter.h"  // Include here

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
