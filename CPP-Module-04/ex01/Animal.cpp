/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:39:07 by mbounoui          #+#    #+#             */
/*   Updated: 2025/11/26 11:17:35 by mbounoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal is Constructed!" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

Animal::Animal(const Animal &obj)
{
	this->type = obj.type;
}

std::string Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound .." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal is Destructed!" << std::endl;
}
