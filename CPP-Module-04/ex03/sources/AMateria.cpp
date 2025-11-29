/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:36:21 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 03:46:42 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.h"
#include "../includes/ICharacter.h.h"

AMateria::AMateria()
{
	std::cout << "AMateria is Constructed!\n";
}

AMateria::AMateria(const AMateria &obj)
{
	(void)obj;
	std::cout << "AMateria Copy constructor\n";
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	std::cout << "AMateria Copy assingment operator\n";
	return (*this);
}

AMateria::use(ICharacter &target)
{
	std::cout << "I should't be able to use thes on " << target.getName() << std::endl;
}

std::string AMateria::getType()
{
	return (type);
}

AMateria::~AMateria()
{
	std::cout << "AMateria is Destructed!\n";
}
