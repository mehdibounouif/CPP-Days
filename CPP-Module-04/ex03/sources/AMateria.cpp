/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 03:36:21 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/30 05:00:48 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/AMateria.h"
#include "../includes/ICharacter.h"  // Now include it here in the .cpp

AMateria::AMateria() : type("")
{
	std::cout << "AMateria is Constructed!\n";
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria is Constructed!\n";
}

AMateria::AMateria(const AMateria &obj) : type(obj.type)
{
	std::cout << "AMateria Copy constructor\n";
}

AMateria &AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
		type = obj.type;
	std::cout << "AMateria Copy assignment operator\n";
	return (*this);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "I shouldn't be able to use this on " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const
{
	return (type);
}

AMateria::~AMateria()
{
	std::cout << "AMateria is Destructed!\n";
}
