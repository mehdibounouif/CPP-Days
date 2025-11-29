/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:50:59 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 04:23:02 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.h"
#include "../includes/Cure.h"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure is Constructed!\n";
}

Cure::Cure(const Cure &obj) : AMateria(obj)
{
	(void)obj;
	std::cout << "Cure Copy Constructor!\n";
}

Cure &Cure::operator=(const Cure &obj)
{
	std::cout << "Cure Copy Assingment operator!\n";
	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "`s wounds *\n";
}

AMateria	*Cure::clone() const
{
	AMateria *obj = new Cure;
	return (obj);
}

Cure::~Cure()
{
	std::cout << "Cure is Destructed!\n";
}
