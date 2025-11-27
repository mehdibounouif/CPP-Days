/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:33:30 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/26 11:14:40 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.h"
#include "WrongAnimal.h"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat is Constructed!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	if (this == &obj)
		return (*this);
	type = obj.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound .." << std::endl;
}

std::string	WrongCat::getType() const
{
	return (type);
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	this->type = obj.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat is Destructed!" << std::endl;
}
