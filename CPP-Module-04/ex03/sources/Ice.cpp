/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 04:23:18 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/29 04:33:01 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.h"
#include "../includes/Ice.h"

Ice::Ice() : AMateria()
{
	std::cout << "Ice is Constructed!\n";
}

Ice::Ice(const Ice &obj)
{
	(void)obj;
	std::cout << "Ice Copy Constructor!\n";
}

Ice &Ice::operator=(const Ice &obj) {
	std::cout << "Ice Copy assingment operator!\n";
	return (*this);
}	

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria *Ice::clone()
{
	AMateria *obj = new Ice();
	return (obj);
}

Ice::~Ice()
{
	std::cout << "Ice is Destructed!\n";
}
